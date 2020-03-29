//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "APConfigService-Protocol.h"

@class NSDate, NSDictionary, NSLock, NSMutableDictionary, NSString;

@interface APConfigCenter : NSObject <APConfigService>
{
    NSDate *_lastSyncDate;
    _Bool _startFlag;
    _Bool _waitingToFetchLmacFlag;
    NSString *_sLoad_Config_Interval;
    long long _nLoad_Config_Interval;
    NSDate *_lastSLSWITCHDate;
    _Bool _receiveInitedNotificationFlag;
    NSDictionary *_config;
    unsigned long long _netRetryCount;
    unsigned long long _noNetRetryCount;
    long long _rpcRetryStatus;
    NSMutableDictionary *_abTestInfoDic;
    NSLock *_abTestLock;
    NSString *_currentProductId;
}

+ (void)postNotificationName:(id)arg1 forUserInfo:(id)arg2;
@property(retain, nonatomic) NSString *currentProductId; // @synthesize currentProductId=_currentProductId;
@property(retain, nonatomic) NSLock *abTestLock; // @synthesize abTestLock=_abTestLock;
@property(retain, nonatomic) NSMutableDictionary *abTestInfoDic; // @synthesize abTestInfoDic=_abTestInfoDic;
@property long long rpcRetryStatus; // @synthesize rpcRetryStatus=_rpcRetryStatus;
@property(nonatomic) unsigned long long noNetRetryCount; // @synthesize noNetRetryCount=_noNetRetryCount;
@property(nonatomic) unsigned long long netRetryCount; // @synthesize netRetryCount=_netRetryCount;
@property(nonatomic) _Bool receiveInitedNotificationFlag; // @synthesize receiveInitedNotificationFlag=_receiveInitedNotificationFlag;
@property(retain, nonatomic) NSDictionary *config; // @synthesize config=_config;
@property(nonatomic) _Bool waitingToFetchLmacFlag; // @synthesize waitingToFetchLmacFlag=_waitingToFetchLmacFlag;
- (void).cxx_destruct;
- (void)monitorConfigWithKey:(id)arg1 value:(id)arg2;
- (_Bool)retryConfigForKey:(id)arg1;
- (_Bool)checkBackgroundFetchStatus;
- (_Bool)checkRpcOverFlow:(id)arg1;
- (void)rmMonitorForNetTypeChanges;
- (void)addMonitorForNetTypeChanges;
- (void)resetRetryAction;
- (void)reachabilityChanged:(id)arg1;
- (void)retryAction:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)removeObserver:(id)arg1 key:(id)arg2;
- (_Bool)addConfigChangedObserver:(id)arg1 key:(id)arg2;
- (void)setConfigData:(id)arg1 updateTime:(id)arg2 forKey:(id)arg3;
- (id)getSyncDataWithKey:(id)arg1;
- (id)getBatchSyncDataWithKeys:(id)arg1;
- (void)repairValuesForKeys:(id)arg1;
- (void)monitorEnterForeground;
- (void)checkDrillConfig:(id)arg1;
- (id)stringValueForKey:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (id)getABTestValues:(id)arg1;
- (id)getABTestInfo;
- (id)stringValueForKey:(id)arg1 spmId:(id)arg2;
- (id)stringValueForKey:(id)arg1;
- (void)cleanup;
- (id)_fetchReqPb;
- (id)doForceSyncFetch;
- (void)doFetchConfigPB:(_Bool)arg1;
- (void)remoteConfigDictionary:(id)arg1 resp:(id)arg2 force:(_Bool)arg3;
- (_Bool)checkConfigDataValid;
- (_Bool)needRefetchFullConfig;
- (_Bool)checkAppAndSysVersion;
- (id)userID;
- (void)fetchConfig:(_Bool)arg1;
- (void)fetchBandageAfterRandomTime:(id)arg1;
- (void)fetchConfigAfterRandomTime:(id)arg1;
- (void)fetchLmac:(id)arg1;
- (void)fetchConfigEx:(id)arg1;
- (void)fetchConfigdata:(id)arg1;
- (void)fetchMessage:(id)arg1;
- (void)receiveInitedNotification;
- (void)fetchConfigAtStart;
- (void)checkPrivacyAuthShow;
- (void)registerRemoteLoggingMessage;
- (void)startAddObserver;
- (void)willDestroy;
- (void)handleRegionChange:(id)arg1;
- (_Bool)serviceShouldTerminate:(id)arg1;
- (void)_updateProductId;
- (void)start;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

