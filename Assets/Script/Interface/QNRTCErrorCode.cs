namespace qnrtc {
    public enum QNRTCErrorCode {
        /* Token error */
        QNRTCErrorCodeTokenError = 10001,

        /* Token is expired */
        QNRTCErrorCodeTokenExpired = 10002,

        /* Room closed*/
        QNRTCErrorCodeRoomClosed = 10005,

        /* Room is full*/
        QNRTCErrorCodeRoomFull = 10011,

        /* User already exist */
        QNRTCErrorCodeUserAlreadyExist = 10022,

        /* No permission */
        QNRTCErrorCodeNoPermission = 10051,

        /* Invalid parameter */
        QNRTCErrorCodeInvalidParameter = 10053,

        /* Media capability not supported */
        QNRTCErrorCodeMediaNotSupport = 10054,

        /* Join auth failed */
        QNRTCErrorCodeAuthFailed = 21001,

        /* Operation in invalid state */
        QNRTCErrorCodeInvalidState = 21002,

        /* Reconnect failed */
        QNRTCErrorCodeReconnectFailed = 21003,

        /* Network request timeout */
        QNRTCErrorCodeNetworkTimeout = 21004,

        /* Error fatal */
        QNRTCErrorCodeFatal = 21005,

        /* CDN stream not exist */
        QNRTCErrorCodeStreamNotExist = 21006,

        /* Server unavailable */
        QNRTCErrorCodeServerUnavailable = 21007,

        /* Android camera open failed, no permission or be occupied */
        QNRTCErrorCodeCameraInitFailed = 23001,

        /* Android camera is evicted by other process */
        QNRTCErrorCodeCameraCaptureFailed = 23002,

        /* Microphone init failed */
        QNRTCErrorCodeMicInitFailed = 23006,

        /* Microphone capture failed */
        QNRTCErrorCodeMicCaptureFailed = 23007,

        /* Speaker init failed */
        QNRTCErrorCodeSpeakerInitFailed = 23008,

        /* Resample failed */
        QNRTCErrorCodeAudioMixingResampleFailed = 22001,

        /* Can not find audio track when extract the mixing audio */
        QNRTCErrorCodeAudioMixingAudioNotFound = 22002,

        /* IO exception when set audio file */
        QNRTCErrorCodeAudioMixingIOException = 22003,

        /* Device maybe can not support decode the mixing audio */
        QNRTCErrorCodeAudioMixingDecoderException = 22004,

        /* Seek before audio mixing */
        QNRTCErrorCodeAudioMixingSeekFailed = 22005,

        /* AUGraph error, iOS Only */
        QNRTCErrorCodeAudioMixingGrap = 22006,

        /* AUNode error, iOS Only */
        QNRTCErrorCodeAudioMixingNode = 22007,

        /* Error happened when read audio data, iOS Only */
        QNRTCErrorCodeAudioMixingReadData = 22008,

        /* Wrong property error, iOS Only */
        QNRTCErrorCodeAudioMixingProperty = 22009,

        /* Setting callback error, iOS Only */
        QNRTCErrorCodeAudioMixingCallback = 22010,

        /* relay token invalid */
        QNRTCErrorCodeRelayTokenInvalid = 24000,

        /* invalid client mode */
        QNRTCErrorCodeInvalidClientMode = 24001,

        /* invlid client role */
        QNRTCErrorCodeInvalidClientRole = 24002
    }
}