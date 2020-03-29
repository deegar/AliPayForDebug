//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NBLogConfigServiceDelegate-Protocol.h"

@class NSArray, NSDictionary, NSString;

@interface NBLogConfigService : NSObject <NBLogConfigServiceDelegate>
{
}

+ (id)logGroup;
+ (id)performceApiLogBlackList;
+ (float)stopLoadingWaitingTime;
+ (id)jsUrl4SPMLog;
+ (id)logNewBlankScreenConfig;
+ (_Bool)shouldCollectUnfinishedUrl;
+ (id)jsapiResultErrorLogBlackList;
+ (id)logWebAppWhitelist;
+ (_Bool)logNebulaTechEnable;
+ (int)reportAbnormalPageRenderWifiLimitSec;
+ (int)reportAbnormalPageRenderLimitSec;
+ (int)reportAbnormalResourceSizeWarn;
+ (int)reportAbnormalResourceSize;
+ (_Bool)isCurrentWifi;
+ (_Bool)useAsyncLogThread;
@property(readonly, nonatomic) NSString *logGroup;
@property(readonly, nonatomic) NSArray *performceApiLogBlackList;
@property(readonly, nonatomic) float stopLoadingWaitingTime;
@property(readonly, nonatomic) NSString *jsUrl4SPMLog;
@property(readonly, nonatomic) NSDictionary *logNewBlankScreenConfig;
@property(readonly, nonatomic) _Bool shouldCollectUnfinishedUrl;
@property(readonly, nonatomic) NSArray *jsapiResultErrorLogBlackList;
@property(readonly, nonatomic) NSArray *logWebAppWhitelist;
@property(readonly, nonatomic) _Bool logNebulaTechEnable;
@property(readonly, nonatomic) int reportAbnormalPageRenderWifiLimitSec;
@property(readonly, nonatomic) int reportAbnormalPageRenderLimitSec;
@property(readonly, nonatomic) int reportAbnormalResourceSizeWarn;
@property(readonly, nonatomic) int reportAbnormalResourceSize;
@property(readonly, nonatomic) _Bool isCurrentWifi;
@property(readonly, nonatomic) _Bool useAsyncLogThread;

@end

