//
//  TurboSDK.h


#import <Foundation/Foundation.h>
#import "TBHeader.h"

@class UIViewController, UIWindow,TBNativeADView,TBBannerView;

NS_ASSUME_NONNULL_BEGIN

@interface TurboSDK : NSObject

+ (instancetype)sharedInstance;

+ (NSString *)getSDKVerson;

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
/// @params viewController 展示广告的ViewController
/// @params extra 本地参数
- (void)showSplash:(NSString *)placementId
       withWindows:(UIWindow *)mainWindow
  inViewController:(UIViewController *)viewController
         withExtra:(NSDictionary *)extra;


/// 检查当前是否存在可展示的广告
/// @params placementId 广告id
///
+ (BOOL) checkSplash:(NSString *)placementId;


/// 加载插屏
/// @params placementId 广告id
/// @params extra 本地参数
/// @params delegate 代理
/// 
- (void)loadInterstitial:(NSString *)placementId withExtra:(NSDictionary *)extra withDelegate:(id<TBInterstitialDelegate>)delegate;


/// 显示插屏
/// @params placementId 广告id
/// @params viewController 展示广告的ViewController
- (void)showInterstitial:(NSString *)placementId inViewController:(UIViewController *)viewController;


/// 检查当前是否存在可展示的广告
/// @params placementId 广告id
+ (BOOL)checkInterstitial:(NSString *)placementId;


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
/// @params viewController 展示广告的ViewController
///
- (void)showReward:(NSString *)placementId inViewController:(UIViewController *)viewController;

/// 检查当前是否存在可展示的广告
/// @params placementId 广告id
///
+ (BOOL)checkReward:(NSString *)placementId;



/// 加载原生广告
/// @params placementId 广告id
/// @params delegate 代理
/// @params extra 本地配置参数,
- (void)loadNative:(NSString *)placementId withDelegate:(id<TBNativeADDelegate>)delegate withExtra:(NSDictionary *)extra;


/// 展示原生广告
/// @params placementId 广告id
/// @params viewController 展示广告的ViewController
/// @params adViewFrame 原生广告视图坐标
- (TBNativeADView *)showNative:(NSString *)placementId inViewController:(UIViewController *)viewController withAdViewFrame:(CGRect)adViewFrame;


/// 检查当前是否存在可展示的广告
/// @params placementId 广告id
+(BOOL)checkNative:(NSString *)placementId;


/// 加载draw信息流
/// @params placementId 广告id
/// @params extra 本地参数
/// @params delegate 代理

- (void)loadDrawNative:(NSString *)placementId withExtra:(NSDictionary *)extra withDelegate:(id<TBNativeADDelegate>)delegate;


/// 展示draw信息流
/// @params placementId 广告id
/// @params viewController 展示广告的ViewController
/// @params adViewFrame 广告视图坐标
/// @return 广告对象

- (TBNativeADView *)showDrawNative:(NSString *)placementId inViewController:(UIViewController *)viewController WithAdViewFrame:(CGRect)adViewFrame;

@property (nonatomic,strong)UIView *selfRenderView;



/// 检查当前是否存在可展示的广告
/// @params placementId 广告id
+ (BOOL)checkDrawNative:(NSString *)placementId;



/// 加载广告
/// @params placementId 广告id
/// @params delegate 代理
/// @params extra 本地参数配置
- (void)loadBanner:(NSString *)placementId withDelegate:(id<TBBannerDelegate>)delegate withExtra:(NSDictionary *)extra;



/// 显示广告
/// @params placementId  广告id
/// @params viewController 展示广告的ViewController

- (TBBannerView *)showBanner:(NSString *)placementId inViewController:(UIViewController *)viewController;

/// 检查当前是否存在可展示的广告
/// @params placementId 广告id

+ (BOOL)checkBanner:(NSString *)placementId;



- (NSString *)DrawId:(NSString *)placementId;



@end

NS_ASSUME_NONNULL_END

