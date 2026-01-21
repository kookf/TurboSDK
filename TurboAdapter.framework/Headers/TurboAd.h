//
//  TurboAd.h
//  GromoreCustomAdapter
//
//  Created by turbo on 2025/5/8.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface TurboAd : NSObject

+ (instancetype)sharedInstance;

//获取版本号
+ (NSString *)getSDKVerson;

//初始化
- (void)init:(NSString *)appID;

@end

NS_ASSUME_NONNULL_END
