//
//  TurboShortVideo.h
//  TurboNetSDK
//
//  Created by turbo on 2026/5/19.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

typedef void (^ShortVideoCompletionHandler)(BOOL success, NSError * _Nullable error);

NS_ASSUME_NONNULL_BEGIN

@interface TurboShortVideo : NSObject

+ (instancetype)sharedInstance;

//初始化短视频sdk. ⚠️注意:请在广告sdk初始化成功后调用短视频sdk初始化方法
-(void)startWithCompletionHandler:(ShortVideoCompletionHandler _Nullable)completionHandler;

//获取展示短视频的ViewController
-(nullable UIViewController *)shortVideoViewController;


//为了视频的播放体验，必须在AppDelegate的applicationDidBecomeActive：和applicationWillResignActive：中调用startOpenGLES和stopOpenGLES方法
//这两个方法不耗时,不做这一步,可能带来未知的黑屏或者crash。示例如下
/*
- (void)applicationWillResignActive:(UIApplication *)application {
    [[TurboShortVideo sharedInstance] stopOpenGLES];
}

- (void)applicationDidBecomeActive:(UIApplication *)application {
 [[TurboShortVideo sharedInstance] startOpenGLES];
}
 */
-(void)startOpenGLES;
-(void)stopOpenGLES;

- (instancetype)init NS_UNAVAILABLE;
@end

NS_ASSUME_NONNULL_END
