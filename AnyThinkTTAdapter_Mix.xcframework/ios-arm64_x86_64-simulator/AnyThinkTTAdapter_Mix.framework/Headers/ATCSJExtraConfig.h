//
//  ATCSJExtraConfig.h
//  AnyThinkTTAdapter
//
//  Created by GUO PENG on 2022/8/25.
//  Copyright © 2022 AnyThink. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <BUAdSDK/BUAdSDK.h>

NS_ASSUME_NONNULL_BEGIN

@interface ATCSJExtraConfig : NSObject

+ (void)setExtraConfig:(void(^_Nullable)(BUAdSDKConfiguration * _Nullable configuration))extraConfigBlock;

@end

NS_ASSUME_NONNULL_END
