//
//  AlexGromoreExtraConfig.h
//  AnyThinkGromoreAdapter
//
//  Created by Alex on 2022/8/26.
//  Copyright © 2022 . All rights reserved.
//

#import <Foundation/Foundation.h>
#import <BUAdSDK/BUAdSDK.h>

NS_ASSUME_NONNULL_BEGIN

@interface AlexGromoreExtraConfig : NSObject
+ (void)setExtraConfig:(void(^_Nullable)(BUAdSDKConfiguration * _Nullable configuration))extraConfigBlock;
@end

NS_ASSUME_NONNULL_END
