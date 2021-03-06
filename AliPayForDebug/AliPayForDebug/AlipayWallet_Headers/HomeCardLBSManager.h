//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "CLLocationManagerDelegate-Protocol.h"

@class AUV2PopTipView, CLLocationManager, NSString, UIView;

@interface HomeCardLBSManager : NSObject <CLLocationManagerDelegate>
{
    _Bool _authOpen;
    _Bool _authShouldCheck;
    AUV2PopTipView *_guideView;
    CLLocationManager *_clManager;
    UIView *_displayView;
}

+ (void)listenLocationAuthChanges;
+ (void)detectGeoLocation;
+ (void)setDisplayView:(id)arg1;
+ (_Bool)lbsAuthOpen;
+ (id)sharedInstance;
+ (id)loadCityInfo;
+ (void)saveCityInfo:(id)arg1;
@property(retain, nonatomic) UIView *displayView; // @synthesize displayView=_displayView;
@property(nonatomic) _Bool authShouldCheck; // @synthesize authShouldCheck=_authShouldCheck;
@property(nonatomic) _Bool authOpen; // @synthesize authOpen=_authOpen;
@property(retain, nonatomic) CLLocationManager *clManager; // @synthesize clManager=_clManager;
@property(retain, nonatomic) AUV2PopTipView *guideView; // @synthesize guideView=_guideView;
- (void).cxx_destruct;
- (id)fetchCacheLocationInfo;
- (void)saveLocationInfo:(id)arg1 addressInfo:(id)arg2;
- (long long)timeoutForSource:(id)arg1;
- (long long)cacheValidTimeForSource:(id)arg1;
- (_Bool)applicationIsForeground;
- (void)updateLocationAuth:(_Bool)arg1;
- (void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2;
- (void)startMonitorAuthStatus;
- (void)tabbarSwitched;
- (void)applicationEnterBackground;
- (void)applicationDidBecomeActive;
- (void)selectedCityHasChanged:(id)arg1;
- (void)registerNotifications;
- (void)dismissCityChangedGuidance;
- (void)displayCityChangedGuidance:(id)arg1;
- (_Bool)shouldGuideCityChanged:(id)arg1;
- (void)readCacheGeoLocation:(id *)arg1 guideTime:(id *)arg2;
- (void)saveGuideTimeToCache:(id)arg1;
- (void)saveGeoLocationToCache:(id)arg1;
- (void)setGeoLocationCity:(id)arg1 isManual:(_Bool)arg2;
- (void)updateGeoLocationIfNeeded:(id)arg1;
- (void)requestGeoLocation:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)requestLocation:(id)arg1 onFinish:(CDUnknownBlockType)arg2 onGeoFinish:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

