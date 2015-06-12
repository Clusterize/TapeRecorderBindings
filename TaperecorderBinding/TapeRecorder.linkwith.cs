using ObjCRuntime;

[assembly: LinkWith ("TapeRecorder.a", LinkTarget.ArmV7 | LinkTarget.ArmV7s | LinkTarget.Simulator | LinkTarget.Arm64, ForceLoad = true, Frameworks = "QuartzCore AVFoundation SystemConfiguration CoreMedia CoreVideo OpenGLES Accelerate")]