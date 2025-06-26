//
//  ATGDTExtraConfig.h
//  AnyThinkGDTAdapter
//
//  Created by GUO PENG on 2022/8/25.
//  Copyright © 2022 AnyThink. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>


NS_ASSUME_NONNULL_BEGIN

@class GDTSDKConfig;

@interface ATGDTExtraConfig : NSObject
+ (void)setExtraConfig:(void(^_Nullable)(GDTSDKConfig* _Nullable configuration))extraConfigBlock;

@end

NS_ASSUME_NONNULL_END
