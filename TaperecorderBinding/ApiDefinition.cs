using MonoTouch.Foundation;
using MonoTouch.UIKit;

namespace TaperecorderBinding
{
	[BaseType (typeof (NSObject))]
	public partial interface TapeRecorder 
	{
		[Static, Export ("startRecordingWithKey:")]
		void StartRecording (string apiKey);

		[Static, Export ("recordEvent:")]
		void RecordEvent (string eventName);

		[Static, Export ("occludeView:")]
		void OccludeView (UIView view);

		[Static, Export ("setShouldCollectAnalyticsEventData:")]
		void SetShouldCollectAnalyticsEventData (bool collectEventData);

		[Static, Export ("setLogLevel:")]
		void SetLogLevel (bool collectEventData);

		[Static, Export ("setUserID:")]
		void SetUserID (string userId);
	}
}