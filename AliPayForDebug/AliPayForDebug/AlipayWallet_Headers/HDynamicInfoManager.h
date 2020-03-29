//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "APConfigObserverProtocol-Protocol.h"

@class NSArray, NSString;

@interface HDynamicInfoManager : NSObject <APConfigObserverProtocol>
{
    NSArray *_configAppList;
    NSArray *_dynamicInfoList;
    long long _lastRequestTime;
    long long _rpcIntervalTime;
}

+ (id)sharedManager;
@property(nonatomic) long long rpcIntervalTime; // @synthesize rpcIntervalTime=_rpcIntervalTime;
@property(nonatomic) long long lastRequestTime; // @synthesize lastRequestTime=_lastRequestTime;
@property(retain, nonatomic) NSArray *dynamicInfoList; // @synthesize dynamicInfoList=_dynamicInfoList;
@property(retain, nonatomic) NSArray *configAppList; // @synthesize configAppList=_configAppList;
- (void).cxx_destruct;
- (void)uploadClickEvent:(id)arg1;
- (void)uploadRPClimitEvent:(long long)arg1;
- (void)uploadLottieExposureEvent:(id)arg1;
- (void)configChangedForKey:(id)arg1 value:(id)arg2;
- (id)fetchApplistFromValueOrService:(id)arg1;
- (long long)fetchRPCLimitIntervalTime;
- (long long)fetchRPCIntervalTimeFromValueOrService:(id)arg1;
- (void)userDidLoginFinished:(id)arg1;
- (void)clearArchiveDynamicInfoList;
- (id)arrayWithFilterExpired:(id)arg1;
- (id)unarchiveDynamicInfoList;
- (void)archiveDynamicInfoList:(id)arg1 lastRequestTime:(long long)arg2;
- (void)archiveRPCLimitTimeStamp;
- (id)mergeCacheWithRemote:(id)arg1 cacheArray:(id)arg2;
- (id)removeCacheWithRemoveInfo:(id)arg1 inArray:(id)arg2;
- (id)dynamicInfoListFromResult:(id)arg1;
- (_Bool)checkRPCLimitIntervalTime;
- (_Bool)checkRpcIntervalTime;
- (_Bool)isDynamicInfoAvailable:(id)arg1;
- (id)dynamicInfoWithHighestPriority;
- (void)clickWithDynamicInfo:(id)arg1;
- (void)processRPCException:(id)arg1;
- (id)requestDynamicinfoWithSceneStage:(int)arg1 appIds:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

