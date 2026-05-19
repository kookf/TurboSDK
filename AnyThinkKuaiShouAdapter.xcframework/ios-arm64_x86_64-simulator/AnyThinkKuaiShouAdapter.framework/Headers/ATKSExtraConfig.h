//
//  ATKSExtraConfigura.h
//  AnyThinkKuaiShouAdapter
//
//  Created by GUO PENG on 2022/8/24.
//  Copyright © 2022 AnyThink. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <KSAdSDK/KSAdSDKManager.h>

NS_ASSUME_NONNULL_BEGIN

extern NSString *const ATKSNativeInteractionConfigKey;
extern NSString *const ATKSNativeAdIsClickableKey;
extern NSString *const ATKSNativeAdIsSlidableKey;
extern NSString *const ATKSNativeAdContainrIsSlidableKey;
extern NSString *const ATKSNativeAdContainrIsClickableKey;
extern NSString *const ATKSNativeAdSourceLogoTypeKey;


@interface ATKSExtraConfig : NSObject

+ (void)setExtraConfig:(void(^_Nullable)(KSAdSDKManager* _Nullable configuration))extraConfigBlock;


@end

NS_ASSUME_NONNULL_END
