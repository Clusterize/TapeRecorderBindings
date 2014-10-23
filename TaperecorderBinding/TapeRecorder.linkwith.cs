using MonoTouch.ObjCRuntime;

[assembly: LinkWith ("TapeRecorder.a", LinkTarget.ArmV7 | LinkTarget.ArmV7s | LinkTarget.Simulator, ForceLoad = true, Frameworks = "QuartzCore AVFoundation SystemConfiguration CoreMedia CoreVideo OpenGLES Accelerate")]