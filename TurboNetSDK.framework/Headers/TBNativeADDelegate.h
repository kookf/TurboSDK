//
//  TBNativeADDelegate.h
//  TurboNetSDK


#import <Foundation/Foundation.h>
#import "TBAdLoadingDelegate.h"

@class TBNativeADView;


@protocol TBNativeADDelegate<TBAdLoadingDelegate>


/// Native ads displayed successfully
- (void)didShowNativeAdInAdView:(TBNativeADView *)adView
                    placementID:(NSString *)placementID
                          extra:(NSDictionary *)extra;

/// Native ad click
- (void)didClickNativeAdInAdView:(TBNativeADView *)adView
                     placementID:(NSString *)placementID
                           extra:(NSDictionary *)extra;

@optional

/// Native video ad starts playing
- (void)didStartPlayingVideoInAdView:(TBNativeADView *)adView
                         placementID:(NSString *)placementID
                               extra:(NSDictionary *)extra;

/// Native video ad ends playing
- (void)didEndPlayingVideoInAdView:(TBNativeADView *)adView
                       placementID:(NSString *)placementID
                             extra:(NSDictionary *)extra;

/// Native ad close button cliecked
- (void)didTapCloseButtonInAdView:(TBNativeADView *)adView
                      placementID:(NSString *)placementID
                            extra:(NSDictionary *)extra;

/// Native ads click to close the details page
/// v5.7.47+
- (void)didCloseDetailInAdView:(TBNativeADView *)adView
                   placementID:(NSString *)placementID
                         extra:(NSDictionary *)extra;

/// Whether the click jump of Native ads is in the form of Deeplink
/// currently only returns for TopOn Adx ads
- (void)didDeepLinkOrJumpInAdView:(TBNativeADView *)adView
                      placementID:(NSString *)placementID
                            extra:(NSDictionary *)extra
                           result:(BOOL)success;

/// Native enters full screen video ads, only for Nend
- (void)didEnterFullScreenVideoInAdView:(TBNativeADView *)adView
                            placementID:(NSString *)placementID
                                  extra:(NSDictionary *)extra;

/// Native exit full screen video ad, only for Nend
- (void)didExitFullScreenVideoInAdView:(TBNativeADView *)adView
                           placementID:(NSString *)placementID
                                 extra:(NSDictionary *)extra;

@end
