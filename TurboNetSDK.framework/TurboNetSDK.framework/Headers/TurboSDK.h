//
//  TurboSDK.h


#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "AnyThinkNative/AnyThinkNative.h"
#import "AnyThinkSplash/AnyThinkSplash.h"
#import "AnyThinkInterstitial/AnyThinkInterstitial.h"
#import "AnyThinkRewardedVideo/AnyThinkRewardedVideo.h"
#import "AnyThinkBanner/AnyThinkBanner.h"


NS_ASSUME_NONNULL_BEGIN

@interface TurboSDK : NSObject

+ (instancetype)sharedInstance;

@property(nonatomic,strong)UIViewController *nativeRootViewController;
@property(nonatomic,strong)UIViewController *bannerRootViewController;
@property(nonatomic,strong)UIViewController *drawRootViewController;
@property(nonatomic,strong)UIViewController *rewardRootViewController;
@property(nonatomic,strong)UIViewController *splashRootViewController;
@property(nonatomic,strong)UIViewController *interstitialRootViewController;
@property(nonatomic,strong)ATNativeAdOffer *offer;
@property(nonatomic,strong)ATNativeADConfiguration *config;



/// 初始化sdl
/// @params appid 应用id
/// @params logEnabled 日志开关
+ (void)initSDK:(NSString *)appid withSetLogEnable:(BOOL)logEnabled;

/// 加载开屏广告
/// @param placementId - 广告id
/// @param delegate 代理
/// @param bottomView 开屏广告底部视图，不传即是全屏

- (void)loadSplash:(NSString *)placementId withDelegate:(id<ATSplashDelegate>)delegate withBottomView:(UIView * _Nullable)bottomView;

/// 展示开屏广告
/// @param placementId 广告id
/// @params delegate 代理
- (void)showSplash:(NSString *)placementId withDelegate:(id<ATSplashDelegate>)delegate;

/// 检测广告
/// @params placementId 广告id
///
+ (bool) checkSplash:(NSString *)placementId;


/// 加载插屏
/// @params placementId 广告id
/// @params delegate 代理
/// 
- (void)loadInterstitial:(NSString *)placementId withDelegate:(id<ATInterstitialDelegate>)delegate;

/// 显示插屏
/// @params placementId 广告id
/// @parmas delegate 代理
- (void)showInterstitial:(NSString *)placementId withDelegate:(id<ATInterstitialDelegate>)delegate;


/// 检测广告
/// @params placementId 广告id
+ (bool)checkInterstitial:(NSString *)placementId;


/// 加载激励广告
/// @params placementId 广告id
/// @params delegate 代理
/// @params extra 本地参数
///
- (void)loadReward:(NSString *)placementId withDelegate:(id<ATRewardedVideoDelegate>)delegate withExtra:(nonnull NSDictionary *)extra;

/// 展示激励广告
/// @params placementId 广告id
/// @params delegate 代理
///
- (void)showReward:(NSString *)placementId withDelegate:(id<ATRewardedVideoDelegate>)delegate;

/// 检测广告
/// @params placementId 广告id
///
+ (bool)checkReward:(NSString *)placementId;



/// 加载原生广告
/// @params placementId 广告id
/// @params delegate 代理
/// @params extra 本地配置参数,
- (void)loadNative:(NSString *)placementId withDelegate:(id<ATNativeADDelegate>)delegate withExtra:(NSDictionary *)extra;


/// 展示原生广告
/// @params placementId 广告id
/// @params adViewFrame 原生广告视图坐标
- (ATNativeADView *)showNative:(NSString *)placementId withDelegate:(id<ATNativeADDelegate>)delegate withAdViewFrame:(CGRect)adViewFrame;


/// 检测广告是否加载成功
/// @params placementId 广告id
+(bool)checkNative:(NSString *)placementId;


/// 加载draw信息流
/// @params placementId 广告id
/// @params delegate 代理
/// @params adSize 透传给广告平台，广告平台会返回相近尺寸的最优模板广告

- (void)loadDrawNative:(NSString *)placementId withDelegate:(id<ATNativeADDelegate>)delegate withAdSize:(CGSize)adSize;


/// 展示draw信息流
/// @params placementId 广告id
/// @params delegate 代理
/// @params adViewFrame 广告视图坐标
/// @return 广告对象

- (UIView *)showDrawNative:(NSString *)placementId withDelegate:(id<ATNativeADDelegate>) delegate WithAdViewFrame:(CGRect)adViewFrame WithSelfRenderView:(UIView *)selfRenderView;



/// 检测广告
/// @params placementId 广告id
+ (bool)checkDrawNative:(NSString *)placementId;



/// 加载广告
/// @params placementId 广告id
/// @params delegate 代理
/// @params adSize 广告视图大小
- (void)loadBanner:(NSString *)placementId withDelegate:(id<ATBannerDelegate>)delegate withAdSize:(CGSize)adSize;




/// 显示广告
/// @params placementId  广告id
/// @params delegate 代理

- (UIView *)showBanner:(NSString *)placementId withDelegate:(id<ATBannerDelegate>)delegate;

/// 检测广告
/// @params placementId 广告id

+ (bool)checkBanner:(NSString *)placementId;





@end

NS_ASSUME_NONNULL_END

