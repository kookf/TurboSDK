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

//初始化短视频sdk
-(void)initWithCompletionHandler:(ShortVideoCompletionHandler _Nullable)completionHandler;

//获取展示短视频的ViewController
-(nullable UIViewController *)shortVideoViewController;

- (instancetype)init NS_UNAVAILABLE;
@end

NS_ASSUME_NONNULL_END
