//
//  TBIntertitialDelegate.h
//  TurboNetSDK
//


#import <Foundation/Foundation.h>

#import "TBAdLoadingDelegate.h"


@protocol TBInterstitialDelegate<TBAdLoadingDelegate>

/// Interstitial ad displayed successfully
- (void)interstitialDidShowForPlacementID:(NSString *)placementID
                                    extra:(NSDictionary *)extra;

/// Interstitial ad clicked
- (void)interstitialDidClickForPlacementID:(NSString *)placementID
                                     extra:(NSDictionary *)extra;

/// Interstitial ad closed
- (void)interstitialDidCloseForPlacementID:(NSString *)placementID
                                     extra:(NSDictionary *)extra;

@optional

/// Interstitial ad display failed
- (void)interstitialFailedToShowForPlacementID:(NSString *)placementID
                                         error:(NSError *)error
                                         extra:(NSDictionary *)extra;

/// Interstitial video ad playback start
- (void)interstitialDidStartPlayingVideoForPlacementID:(NSString *)placementID
                                                 extra:(NSDictionary *)extra;

/// Interstitial playback end
- (void)interstitialDidEndPlayingVideoForPlacementID:(NSString *)placementID
                                               extra:(NSDictionary *)extra;

/// Interstitial playback fail
- (void)interstitialDidFailToPlayVideoForPlacementID:(NSString *)placementID
                                               error:(NSError *)error
                                               extra:(NSDictionary *)extra;

/// Whether the click jump on the interstitial advertisement is in the form of Deeplink
/// currently only returns for TopOn Adx advertisements
- (void)interstitialDeepLinkOrJumpForPlacementID:(NSString *)placementID
                                           extra:(NSDictionary *)extra
                                          result:(BOOL)success;

/// Interstitial ad landing page closed
/// support network: [Baidu][GDT][KS][CSJ]
- (void)interstitialDidLPCloseForPlacementID:(NSString *)placementID
                                       extra:(NSDictionary *)extra;

@end
