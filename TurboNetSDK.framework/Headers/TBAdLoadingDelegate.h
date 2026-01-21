//
//  TBAdLoadingDelegate.h
//  TurboNetSDK
//

#import <Foundation/Foundation.h>


@protocol TBAdLoadingDelegate<NSObject>

/// Callback when the successful loading of the ad
- (void)didFinishLoadingADWithPlacementID:(NSString *)placementID;

/// Callback of ad loading failure
- (void)didFailToLoadADWithPlacementID:(NSString*)placementID
                                 error:(NSError*)error;

@optional

/// Ad start load
- (void)didStartLoadingADSourceWithPlacementID:(NSString *)placementID
                                         extra:(NSDictionary*)extra;
/// Ad load success
- (void)didFinishLoadingADSourceWithPlacementID:(NSString *)placementID
                                          extra:(NSDictionary*)extra;
/// Ad load fail
- (void)didFailToLoadADSourceWithPlacementID:(NSString*)placementID
                                       extra:(NSDictionary*)extra
                                       error:(NSError*)error;

/// Ad start bidding
- (void)didStartBiddingADSourceWithPlacementID:(NSString *)placementID
                                         extra:(NSDictionary*)extra;

/// Ad bidding success
- (void)didFinishBiddingADSourceWithPlacementID:(NSString *)placementID
                                          extra:(NSDictionary*)extra;

/// Ad bidding fail
- (void)didFailBiddingADSourceWithPlacementID:(NSString*)placementID
                                        extra:(NSDictionary*)extra
                                        error:(NSError*)error;

@end
