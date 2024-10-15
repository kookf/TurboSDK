//
//  TBBannerDelegate.h
//  TurboNetSDK
//


#import <Foundation/Foundation.h>
#import "TBAdLoadingDelegate.h"


@class ATBannerView;


@protocol TBBannerDelegate<TBAdLoadingDelegate>

/// BannerView display results
- (void)bannerView:(ATBannerView *)bannerView didShowAdWithPlacementID:(NSString *)placementID extra:(NSDictionary *)extra;

/// bannerView click
- (void)bannerView:(ATBannerView *)bannerView didClickWithPlacementID:(NSString *)placementID extra:(NSDictionary *)extra;

@optional

/// bannerView auto refresh
- (void)bannerView:(ATBannerView *)bannerView didAutoRefreshWithPlacement:(NSString *)placementID extra:(NSDictionary *)extra;

/// BannerView auto refresh failed
- (void)bannerView:(ATBannerView *)bannerView failedToAutoRefreshWithPlacementID:(NSString *)placementID error:(NSError *)error;

/// bannerView click the close button
- (void)bannerView:(ATBannerView *)bannerView didTapCloseButtonWithPlacementID:(NSString *)placementID extra:(NSDictionary *)extra;

/// bannerView ad landing page closed
/// support network: [GDT][CSJ]
- (void)bannerView:(ATBannerView *)bannerView didLPCloseForPlacementID:(NSString *)placementID extra:(NSDictionary *)extra;

/// Whether the bannerView click jump is in the form of Deeplink
/// currently only returns for TopOn Adx advertisements
- (void)bannerView:(ATBannerView *)bannerView didDeepLinkOrJumpForPlacementID:(NSString *)placementID extra:(NSDictionary *)extra result:(BOOL)success;

@end
