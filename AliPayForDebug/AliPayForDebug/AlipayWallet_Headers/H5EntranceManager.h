//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "H5EntranceManagerDelegate-Protocol.h"

@class NSString;

@interface H5EntranceManager : NSObject <H5EntranceManagerDelegate>
{
    _Bool _isEnvironmentPreRelease;
}

+ (_Bool)enableDisclaimer;
+ (void)setCurrentClearCacheConfig:(id)arg1;
+ (_Bool)shouldClearCache;
+ (_Bool)isInWhiteList:(id)arg1;
+ (double)syncrpctimeout;
+ (id)exceptionApiList;
+ (_Bool)forbidNotRecord;
+ (_Bool)canIntercept;
+ (_Bool)canOmitScanApp;
+ (_Bool)canRpc;
+ (id)sharedInstance;
@property(nonatomic) _Bool isEnvironmentPreRelease; // @synthesize isEnvironmentPreRelease=_isEnvironmentPreRelease;
- (void)requestDataWithParams:(id)arg1 inViewController:(id)arg2 callback:(CDUnknownBlockType)arg3 timeout:(double)arg4;
- (_Bool)isPermissionAndRouterConfigValid:(id)arg1;
- (_Bool)shouldCheckPermissionAndDynamicWithConfig:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

