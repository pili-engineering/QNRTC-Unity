#if UNITY_IOS

using System.IO;
using UnityEditor;
using UnityEditor.Callbacks;
using UnityEditor.iOS.Xcode;

public class PostProcessBuild_iOS
{
    [PostProcessBuild]
    public static void OnPostProcessBuild(BuildTarget buildTarget, string path)
    {
        if (buildTarget == BuildTarget.iOS)
        {
            string projPath = path + "/Unity-iPhone.xcodeproj/project.pbxproj";
            string plistPath = path + "/Info.plist";
            string bundlId = "com.qbox.QNRTCUnityDemo";

            PBXProject proj = new PBXProject();
            proj.ReadFromFile(projPath);

            string mainTarget = proj.GetUnityMainTargetGuid();
            string frameworkTarget = proj.GetUnityFrameworkTargetGuid();

            // property
            proj.SetBuildProperty(mainTarget, "ENABLE_BITCODE", "NO");
            proj.SetBuildProperty(frameworkTarget, "ENABLE_BITCODE", "NO");
            proj.SetBuildProperty(mainTarget, "PRODUCT_BUNDLE_IDENTIFIER", bundlId);

            // link
            proj.AddFrameworkToProject(frameworkTarget, "GLKit.framework", false);
            proj.AddFrameworkToProject(frameworkTarget, "VideoToolBox.framework", false);
            proj.AddFrameworkToProject(frameworkTarget, "ReplayKit.framework", false);
            proj.AddFrameworkToProject(frameworkTarget, "libz.tbd", false);

            // capability
            proj.AddCapability(mainTarget, PBXCapabilityType.BackgroundModes);

            //var projCapability = new ProjectCapabilityManager(projPath, "Unity-iPhone/QNRTCUnity.entitlements", mainTarget);
            //projCapability.AddBackgroundModes(BackgroundModesOptions.AudioAirplayPiP);
            //projCapability.WriteToFile();

            proj.WriteToFile(projPath);

            // permission
            PlistDocument plist = new PlistDocument();
            plist.ReadFromFile(plistPath);
            PlistElementDict rootDict = plist.root;
            rootDict.SetString("NSMicrophoneUsageDescription", "音频通话需要使用麦克风设备");
            File.WriteAllText(plistPath, plist.WriteToString());
        }
    }
}

#endif