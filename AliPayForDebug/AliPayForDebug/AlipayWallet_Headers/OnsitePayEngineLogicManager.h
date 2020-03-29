//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "APConfigObserverProtocol-Protocol.h"

@class DTRpcAsyncCaller, NSMutableArray, NSString, OnsitePayEngineModelInfo;

@interface OnsitePayEngineLogicManager : NSObject <APConfigObserverProtocol>
{
    _Bool _hasListenConfigService;
    _Bool _cacheNeedLock;
    DTRpcAsyncCaller *_rpcCaller;
    DTRpcAsyncCaller *_codeRPCCaller;
    NSMutableArray *_codeReportRPCCallers;
    OnsitePayEngineModelInfo *_modelInfo;
    NSString *_model;
    double _cacheTime;
    double _reportCacheTime;
    double _kOSPEConcurrentCha;
}

+ (id)getInstance;
@property(nonatomic) _Bool cacheNeedLock; // @synthesize cacheNeedLock=_cacheNeedLock;
@property(nonatomic) double kOSPEConcurrentCha; // @synthesize kOSPEConcurrentCha=_kOSPEConcurrentCha;
@property(nonatomic) double reportCacheTime; // @synthesize reportCacheTime=_reportCacheTime;
@property(nonatomic) double cacheTime; // @synthesize cacheTime=_cacheTime;
@property(nonatomic) _Bool hasListenConfigService; // @synthesize hasListenConfigService=_hasListenConfigService;
@property(retain, nonatomic) NSString *model; // @synthesize model=_model;
@property(retain, nonatomic) OnsitePayEngineModelInfo *modelInfo; // @synthesize modelInfo=_modelInfo;
@property(retain, nonatomic) NSMutableArray *codeReportRPCCallers; // @synthesize codeReportRPCCallers=_codeReportRPCCallers;
@property(retain, nonatomic) DTRpcAsyncCaller *codeRPCCaller; // @synthesize codeRPCCaller=_codeRPCCaller;
@property(retain, nonatomic) DTRpcAsyncCaller *rpcCaller; // @synthesize rpcCaller=_rpcCaller;
- (void).cxx_destruct;
- (void)dealloc;
- (_Bool)needUseNewServerDate;
- (id)getFailReportCodes;
- (void)clearReportCodes;
- (void)clearWaitSendingCodes;
- (id)removeWaitSendingCodesByKey:(id)arg1;
- (void)changeWaitSendingToFail:(id)arg1;
- (id)changeFailToWaitSending:(id)arg1;
- (id)getWaitSendingCodes;
- (id)getWaitSendingCodeOriginStr;
- (_Bool)addToWaitSendingCodesByKey:(id)arg1 codes:(id)arg2;
- (void)addToFailReportCodes:(id)arg1;
- (void)checkWaitSendingQueue;
- (id)dictionaryWithJsonString:(id)arg1;
- (void)sendCodeCTUWithParam:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (_Bool)clearAllUserDataIfTidChanged;
- (void)onTidChanged:(id)arg1;
- (void)clearCacheTime;
- (void)handleLogoutNotification:(id)arg1;
- (void)loginDidFinish:(id)arg1;
- (_Bool)happenReportConcurrent;
- (_Bool)happenLoginConcurrent;
- (void)execOnsitePayInitPoint;
- (_Bool)configValueIsTrueWithKey:(id)arg1;
- (void)clearOtpIfNeedWithLoginParam:(id)arg1;
- (void)triggerOnsitePayInitPointFrom:(int)arg1 extraParams:(id)arg2;
- (id)getTid;
- (_Bool)storeTidIfTidIsNil;
- (_Bool)storeTid:(id)arg1;
- (_Bool)clearUseNewLinkMark;
- (id)getSMModelCache;
- (id)getModelCache;
- (_Bool)clearSM;
- (_Bool)setSM:(_Bool)arg1;
- (_Bool)isSM;
- (void)configChangedForKey:(id)arg1 value:(id)arg2;
- (void)logout:(id)arg1;
- (void)loginMark:(id)arg1;
- (void)loginMark;
- (_Bool)clearNewLinkAllUserOnsitePayInfo;
- (_Bool)sendModelInfoChangeNotification;
- (_Bool)initOtpInfoCompleteWithOldLink:(_Bool)arg1;
- (id)fetchChannelCodesWithChannel:(id)arg1;
- (void)clearModelInfoCache;
- (void)clearModelInfo;
- (id)getStoreModelInfo;
- (id)getCurrentModel;
- (_Bool)enableSMCache;
- (id)getModelCacheKeyWithUserId:(id)arg1;
- (id)getModelCacheKey;
- (id)getSMModelCacheKeyWithUserId:(id)arg1;
- (id)getSMModelCacheKey;
- (void)storeModelInfo:(id)arg1;
- (void)storeModelInfo:(id)arg1 fromInit:(_Bool)arg2;
- (_Bool)storeModelInfoFromInit:(id)arg1;
- (_Bool)needUpdateModel;
- (_Bool)clearUpdateModelMark;
- (id)getUpdateModel;
- (_Bool)storeUpdateModelMark:(id)arg1;
- (id)getCurrentUserId;
- (void)callInitToken:(id)arg1;
- (_Bool)isMyData:(id)arg1;
- (void)initNewOTPService:(CDUnknownBlockType)arg1;
- (void)updateModelActionManager:(id)arg1;
- (_Bool)isUseNew;
- (_Bool)isOldLink;
- (_Bool)isOldLinkConfigValue:(id)arg1;
- (_Bool)isConfigOldLink;
- (_Bool)syncDataIsMy:(id)arg1;
- (id)dictionaryFromString:(id)arg1 withPattern:(id)arg2;
- (void)doInitIfNeed;
- (void)safepayComplete:(id)arg1;
- (void)receiveFacePayOpen:(id)arg1;
- (void)handleReceiveLongLinkPush:(id)arg1;
- (void)onsitePayDestroy;
- (void)receiveLongLinkPush:(id)arg1;
- (void)addListener;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

