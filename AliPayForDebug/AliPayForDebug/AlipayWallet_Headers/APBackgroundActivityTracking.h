//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface APBackgroundActivityTracking : NSObject
{
    unsigned long long _backgroundFetchState;
    unsigned long long _hotspotHelperState;
    unsigned long long _healthKitStepCountState;
    unsigned long long _pushState;
    unsigned long long _voipState;
    unsigned long long _watchState;
    unsigned long long _hotspotHelperCounter;
    unsigned long long _healthKitStepCountCounter;
}

+ (id)isBackgroundActivityBeginState;
+ (id)voipState;
+ (id)watchState;
+ (id)pushState;
+ (id)healthKitStepCountCounter;
+ (id)healthKitStepCountState;
+ (id)hotspotHelperCounter;
+ (id)hotspotHelperState;
+ (id)backgroundFetchCounter;
+ (id)backgroundFetchState;
+ (id)shared;
@property(nonatomic) unsigned long long healthKitStepCountCounter; // @synthesize healthKitStepCountCounter=_healthKitStepCountCounter;
@property(nonatomic) unsigned long long hotspotHelperCounter; // @synthesize hotspotHelperCounter=_hotspotHelperCounter;
@property(nonatomic) unsigned long long watchState; // @synthesize watchState=_watchState;
@property(nonatomic) unsigned long long voipState; // @synthesize voipState=_voipState;
@property(nonatomic) unsigned long long pushState; // @synthesize pushState=_pushState;
@property(nonatomic) unsigned long long healthKitStepCountState; // @synthesize healthKitStepCountState=_healthKitStepCountState;
@property(nonatomic) unsigned long long hotspotHelperState; // @synthesize hotspotHelperState=_hotspotHelperState;
@property(nonatomic) unsigned long long backgroundFetchState; // @synthesize backgroundFetchState=_backgroundFetchState;
- (void)encreaseHealthKitStepCountCounter;
- (void)encreaseHotspotHelperCounter;
- (id)init;

@end

