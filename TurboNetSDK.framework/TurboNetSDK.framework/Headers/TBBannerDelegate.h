//
//  TBBannerDelegate.h
//  TurboNetSDK
//


#import <Foundation/Foundation.h>
#import "TBAdLoadingDelegate.h"


@class TBBannerView;


@protocol TBBannerDelegate<TBAdLoadingDelegate>

/// BannerView display results
- (void)bannerView:(TBBannerView *)bannerView didShowAdWithPlacementID:(NSString *)placementID extra:(NSDictionary *)extra;

/// bannerView click
- (void)bannerView:(TBBannerView *)bannerView didClickWithPlacementID:(NSString *)placementID extra:(NSDictionary *)extra;

@optional

/// bannerView auto refresh
- (void)bannerView:(TBBannerView *)bannerView didAutoRefreshWithPlacement:(NSString *)placementID extra:(NSDictionary *)extra;

/// BannerView auto refresh failed
- (void)bannerView:(TBBannerView *)bannerView failedToAutoRefreshWithPlacementID:(NSString *)placementID error:(NSError *)error;

/// bannerView click the close button
- (void)bannerView:(TBBannerView *)bannerView didTapCloseButtonWithPlacementID:(NSString *)placementID extra:(NSDictionary *)extra;

/// bannerView ad landing page closed
/// support network: [GDT][CSJ]
- (void)bannerView:(TBBannerView *)bannerView didLPCloseForPlacementID:(NSString *)placementID extra:(NSDictionary *)extra;

/// Whether the bannerView click jump is in the form of Deeplink
/// currently only returns for TopOn Adx advertisements
- (void)bannerView:(TBBannerView *)bannerView didDeepLinkOrJumpForPlacementID:(NSString *)placementID extra:(NSDictionary *)extra result:(BOOL)success;

@end
