//
//  TapeRecorder.h
//  TapeRecorder
//
//  Created by Damir Bandalo on 28.07.2014.
//  Copyright (c) 2014. TapeRecorder. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

/*!
 @brief Enum for setting up log output level.
 */
typedef NS_ENUM(NSInteger, TapeRecorderLogLevel) {
    TapeRecorderLogLevelNone,
    TapeRecorderLogLevelCritical,
    TapeRecorderLogLevelDebug,
    TapeRecorderLogLevelAll
};

@interface TapeRecorder : NSObject

/*!
 @brief Starts the TapeRecorder session for the app denoted by @c apiKey.
 
 @discussion This method should be called only once at the top of @c application:didFinishLaunchingWithOptions. 
 It start recording the video of the session. The video is automatically stopped and uploaded 10 seconds after the app is minimized to the background.
 
 @param apiKey The API key for this project.
 */
+ (void)startRecordingWithKey:(NSString *)apiKey;

/*!
 @brief Records a custom event specified by @c eventName.
 
 @discussion This method allows you to specify custom events within your app. This is in addition to the events that are collect automatically from third party analytics platforms.
 
 @param eventName Name of the event.
 */
+ (void)recordEvent:(NSString *)eventName;

/*!
 @brief Hide view that contains sensitive information.
 
 @discussion This method allows you to hide a view that contains sensitive information by pixelating it in the recording. UITextFileds with isSecureTextEntry set to YES are occluded automatically.
 
 @param view The View to hide.
 */
+ (void)occludeView:(UIView *)view;

/*!
 @brief Enable automatic collection of event data from analytics platforms.
 
 @discussion Use this method to control if events data from third party analytics platforms are automatically collected. Currently supported Flurry, Google Analytics, Mixpanel, KISSMetrics, Localytics, Keen.io 
 
 Default value is @c YES.
 
 @param collectEventData NO to stop automatically collecting event data.
 */
+ (void)setShouldCollectAnalyticsEventData:(BOOL)collectEventData;

/*!
 @brief Generates debug logs to console.
 
 @discussion This is a method that allows you to tune the amount of debug information related to TapeRecorder SDK.
 
 Default value is @c TapeRecorderLogLevelCritical.
 
 @param logLevel Log level.
 */
+ (void)setLogLevel:(TapeRecorderLogLevel)logLevel;

/*!
 @brief Assign a unique id for a user in your app.
 
 @discussion Be sure not to pass any confidential information about the user.
 
 @param userID The app id for a user
 */
+ (void)setUserID:(NSString *)userID;

@end
