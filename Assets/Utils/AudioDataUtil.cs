using System;
using System.IO;
using System.Threading;
using RingBuffer;

namespace QNRTCUnityDemo
{
    public class AudioDataReader
    {
        public delegate void OnReaderAudioDataCallBack(byte[] data, uint dataSize, uint bitsPerSample, uint sampleRate, uint channels);
        public event OnReaderAudioDataCallBack AudioDataCallback;

        private int readingFrequencyPerSecond = 100;

        private string path;
        private int bitsPerSample;
        private int sampleRate;
        private int channels;

        private Thread readingThread;
        private RingBuffer<byte> cacheBuffer;
        private byte[] bufferPerReading;

        private long audioFileLength;
        private long audioFileOffset;

        private int cacheLength;
        private int samplesPerReading;
        private int bytesPerReading;

        private volatile bool isStop = false;

        private AudioDataReader() { }

        public AudioDataReader(string path, int bitsPerSample, int sampleRate, int channels)
        {
            this.path = path;
            this.bitsPerSample = bitsPerSample;
            this.sampleRate = sampleRate;
            this.channels = channels;
        }

        public void StartReading()
        {
            isStop = false;

            // 初始化文件偏移量和文件总长
            audioFileOffset = 0;
            audioFileLength = new FileInfo(path).Length;

            // 每次从缓存读取的采样点个数   采样率 / 频率
            samplesPerReading = sampleRate / readingFrequencyPerSecond;

            // 每次从缓存读取的字节大小  初始化 bufferPerReading
            bytesPerReading = samplesPerReading * channels * bitsPerSample / 8;
            bufferPerReading = new byte[bytesPerReading];

            // ringBuffer 缓冲大小设置为 60 秒读取数据的大小  即 6000 次读取的大小总和
            cacheLength = bytesPerReading * 6000;
            cacheBuffer = new RingBuffer<byte>(cacheLength);

            Console.WriteLine("StartReading:");
            readingThread = new Thread(InnerReading);
            readingThread.Start();
        }

        public void StopReading()
        {
            Console.WriteLine("StopReading:");
            isStop = true;
            if (readingThread != null)
            {
                readingThread.Join();
                readingThread = null;
            }
        }

        private void InnerReading()
        {
            // 每次读取的时间间隔
            int interval = 1000 / readingFrequencyPerSecond;
            Console.WriteLine("interval: " + interval);
            TimeSpan tic = new TimeSpan(DateTime.Now.Ticks);
            Console.WriteLine(DateTime.Now.ToString() + " InnerReading ");
            while (!isStop)
            {
                TimeSpan toc = new TimeSpan(DateTime.Now.Ticks);
                if (toc.Subtract(tic).Duration().Milliseconds >= interval)
                {
                    Console.WriteLine("tic: " + tic + " toc: " + toc);
                    tic = new TimeSpan(DateTime.Now.Ticks);
                    if (cacheBuffer.Size >= bytesPerReading)
                    {
                        // 缓冲区有未读的 bytesPerReading 大小 buffer   读到 bufferPerReading 
                        for (int i = 0; i < bytesPerReading; i++)
                        {
                            bufferPerReading[i] = cacheBuffer.Get();
                        }

                        // 回调
                        AudioDataCallback(bufferPerReading, (uint)bytesPerReading, (uint)bitsPerSample, (uint)sampleRate, (uint)channels);
                    }
                    else
                    {
                        // 如果缓冲区不够 bytesPerReading  从文件读取到缓冲区
                        Console.WriteLine(DateTime.Now.ToString() + " AppendCacheBuffer ");
                        AppendCacheBuffer();
                    }
                }
            }
        }

        private void AppendCacheBuffer()
        {
            try
            {
                using (FileStream fs = File.OpenRead(path))
                {
                    int bufferSize = 0;
                    if (audioFileLength - audioFileOffset < cacheLength)
                    {
                        // 文件剩余未读字节比缓冲区大小小  则 buffersize 为文件剩余大小（按 bytesPerReading 对齐）
                        bufferSize = (int)((audioFileLength - audioFileOffset) / bytesPerReading * bytesPerReading);
                    }
                    else
                    {
                        // 文件剩余未读字节大于缓冲区大小  则 buffersize 为缓冲区大小
                        bufferSize = cacheLength;
                    }

                    // 先读到临时缓冲区
                    byte[] tempCacheBuffer = new byte[bufferSize];
                    fs.Seek(audioFileOffset, SeekOrigin.Begin);
                    fs.Read(tempCacheBuffer, 0, bufferSize);
                    audioFileOffset += bufferSize;

                    // 读到 ring buffer
                    foreach (byte b in tempCacheBuffer)
                    {
                        cacheBuffer.Put(b);
                    }

                    // 文件剩余未读字节小于单次读取的大小  文件偏移量重置
                    if (audioFileLength - audioFileOffset < bytesPerReading)
                    {
                        audioFileOffset = 0;
                    }
                }
            }
            catch (Exception e)
            {
                Console.WriteLine(e.Message);
            }
        }
    }

    public class AudioDataWriter
    {
        private AudioDataWriter() { }
        private string path;
        private int audioFileOffset;

        public AudioDataWriter(string path)
        {
            this.path = path;
            this.audioFileOffset = 0;

            if (!File.Exists(path))
            {
                File.Create(path);
            }
        }

        public void Writing(byte[] data, uint dataSize)
        {
            try
            {
                using (FileStream fs = File.OpenWrite(path))
                {
                    Console.WriteLine("Writing: " + dataSize + " offset: " + audioFileOffset);
                    Console.WriteLine("buffer length: " + data.Length);
                    fs.Seek(audioFileOffset, SeekOrigin.Begin);
                    fs.Write(data, 0, (int)dataSize);
                    audioFileOffset += (int)dataSize;
                }
            }
            catch (Exception e)
            {
                Console.WriteLine(e.Message);
            }
        }
    }
}
