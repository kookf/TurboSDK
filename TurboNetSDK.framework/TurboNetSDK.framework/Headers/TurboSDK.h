//
//  TurboSDK.h


#import <Foundation/Foundation.h>
#import "TBHeader.h"

@class UIViewController, UIWindow,TBNativeADView,TBBannerView;

NS_ASSUME_NONNULL_BEGIN

@interface TurboSDK : NSObject

+ (instancetype)sharedInstance;

@property(nonatomic,strong)UIViewController *nativeRootViewController;
@property(nonatomic,strong)UIViewController *bannerRootViewController;
@property(nonatomic,strong)UIViewController *drawRootViewController;
@property(nonatomic,strong)UIViewController *rewardRootViewController;
@property(nonatomic,strong)UIViewController *splashRootViewController;
@property(nonatomic,strong)UIViewController *interstitialRootViewController;

+ (void)getSDKVerson;

/// 初始化sdk
/// @params appId 应用id
+ (void)initSDK:(NSString *)appId;

/// 加载开屏广告
/// @param placementId - 广告id
/// @param delegate 代理
/// @params extra 本地参数
/// @param bottomView 开屏广告底部视图，不传即是全屏

- (void)loadSplash:(NSString *)placementId withDelegate:(id<TBSplashDelegate>)delegate withExtra:(NSDictionary *)extra withBottomView:(UIView * _Nullable)bottomView;


/// 展示开屏广告
/// @param placementId 广告id
/// @param mainWindow 根视图
/// @params extra 本地参数
/// @params delegate 代理
- (void)showSplash:(NSString *)placementId withWindows:(UIWindow *)mainWindow withExtra:(NSDictionary *)extra withDelegate:(id<TBSplashDelegate>)delegate;


/// 检测广告
/// @params placementId 广告id
///
+ (bool) checkSplash:(NSString *)placementId;


/// 加载插屏
/// @params placementId 广告id
/// @params extra 本地参数
/// @params delegate 代理
/// 
- (void)loadInterstitial:(NSString *)placementId withExtra:(NSDictionary *)extra withDelegate:(id<TBInterstitialDelegate>)delegate;


/// 显示插屏
/// @params placementId 广告id
/// @parmas delegate 代理
- (void)showInterstitial:(NSString *)placementId withDelegate:(id<TBInterstitialDelegate>)delegate;


/// 检测广告
/// @params placementId 广告id
+ (bool)checkInterstitial:(NSString *)placementId;


/// 加载激励广告
/// @params placementId 广告id
/// @params extra 本地参数
/// @params delegate 代理

// 如果开启服务器回调,需要回传userId和userData

//NSDictionary *extra = @{
//       kATAdLoadingExtraUserIDKey:@"userId",
//       kATAdLoadingExtraMediaExtraKey:@"userData",
//       kATAdLoadingExtraRewardNameKey:@"奖励名称",
//       kATAdLoadingExtraRewardAmountKey:@(3)
// };

- (void)loadReward:(NSString *)placementId withExtra:(NSDictionary *)extra withDelegate:(id<TBRewardedVideoDelegate>)delegate;


/// 展示激励广告
/// @params placementId 广告id
/// @params delegate 代理
///
- (void)showReward:(NSString *)placementId withDelegate:(id<TBRewardedVideoDelegate>)delegate;

/// 检测广告
/// @params placementId 广告id
///
+ (bool)checkReward:(NSString *)placementId;



/// 加载原生广告
/// @params placementId 广告id
/// @params delegate 代理
/// @params extra 本地配置参数,
- (void)loadNative:(NSString *)placementId withDelegate:(id<TBNativeADDelegate>)delegate withExtra:(NSDictionary *)extra;


/// 展示原生广告
/// @params placementId 广告id
/// @params adViewFrame 原生广告视图坐标
- (TBNativeADView *)showNative:(NSString *)placementId withDelegate:(id<TBNativeADDelegate>)delegate withAdViewFrame:(CGRect)adViewFrame;


/// 检测广告是否加载成功
/// @params placementId 广告id
+(bool)checkNative:(NSString *)placementId;


/// 加载draw信息流
/// @params placementId 广告id
/// @params extra 本地参数
/// @params delegate 代理

- (void)loadDrawNative:(NSString *)placementId withExtra:(NSDictionary *)extra withDelegate:(id<TBNativeADDelegate>)delegate;


/// 展示draw信息流
/// @params placementId 广告id
/// @params delegate 代理
/// @params adViewFrame 广告视图坐标
/// @return 广告对象

- (TBNativeADView *)showDrawNative:(NSString *)placementId withDelegate:(id<TBNativeADDelegate>) delegate WithAdViewFrame:(CGRect)adViewFrame WithSelfRenderView:(UIView *)selfRenderView;

/// 获取广告素材
/// @params placementId 广告id
/// @return 广告素材
- (ATNativeAdOffer *)getOffer:(NSString *)placementId;


/// 检测广告
/// @params placementId 广告id
+ (bool)checkDrawNative:(NSString *)placementId;



/// 加载广告
/// @params placementId 广告id
/// @params delegate 代理
/// @params extra 本地参数配置
- (void)loadBanner:(NSString *)placementId withDelegate:(id<TBBannerDelegate>)delegate withExtra:(NSDictionary *)extra;



/// 显示广告
/// @params placementId  广告id
/// @params delegate 代理

- (TBBannerView *)showBanner:(NSString *)placementId withDelegate:(id<TBBannerDelegate>)delegate;

/// 检测广告
/// @params placementId 广告id

+ (bool)checkBanner:(NSString *)placementId;





@end

NS_ASSUME_NONNULL_END

