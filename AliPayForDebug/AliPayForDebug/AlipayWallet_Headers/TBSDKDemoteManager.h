//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSOperationQueue.h>

@class NSMutableDictionary, NSObject, TBSDKThreadSafeMutableDictionary;
@protocol OS_dispatch_queue;

@interface TBSDKDemoteManager : NSOperationQueue
{
    NSMutableDictionary *_h5DemoteDic;
    TBSDKThreadSafeMutableDictionary *_demoteObjectDic;
    struct _opaque_pthread_rwlock_t s_pthread_rwlock_t;
    NSObject<OS_dispatch_queue> *myCustomQueue;
    _Bool _netWorkUTOnOff;
    _Bool _unitEnable;
    int _sslLimited;
    long long _postGzipOnoff;
    id _nwDemote;
}

+ (id)shareInstance;
@property(nonatomic) __weak id nwDemote; // @synthesize nwDemote=_nwDemote;
@property(nonatomic) _Bool unitEnable; // @synthesize unitEnable=_unitEnable;
@property(nonatomic) int sslLimited; // @synthesize sslLimited=_sslLimited;
@property(nonatomic) long long postGzipOnoff; // @synthesize postGzipOnoff=_postGzipOnoff;
@property(nonatomic) _Bool netWorkUTOnOff; // @synthesize netWorkUTOnOff=_netWorkUTOnOff;
- (void).cxx_destruct;
- (id)toArrayOrNSDictionary:(id)arg1;
- (void)setBizCache:(id)arg1;
- (id)customSystemErrorMsg:(id)arg1;
- (_Bool)isApiNeedDemoteBizErrorMapping:(id)arg1;
- (_Bool)disablePageUrlFlag;
- (int)sgUnifiedFeatureFlag;
- (int)securityFeatureFlag;
- (_Bool)isDemotePrefetch;
- (_Bool)isDemoteAsynCB;
- (_Bool)isDemoteMultiAccount;
- (_Bool)isDemoteBizErrorMapping;
- (_Bool)isSwitchOffMwua;
- (_Bool)isDemoteWua;
- (void)stopHttpDNS;
- (void)demoteDNS;
- (void)unDemoteDNS;
- (_Bool)isDemoteDNS;
- (void)demoteSPDY;
- (void)unDemoteSPDY;
- (_Bool)isDemoteSPDY;
- (void)unSSL;
- (_Bool)isDemoteSSL;
- (void)unDemoteCache;
- (void)demoteCache;
- (_Bool)isDemoteCache;
- (int)BizErrorMappingLimit;
- (void)initialSecurityAppkey:(id)arg1 withIncludeApis:(id)arg2;
- (void)initialNetworkQualityModule:(id)arg1;
- (void)networkDemote;
- (void)configDemote:(id)arg1;
- (_Bool)isNeedWSDemote:(id)arg1;
- (void)initialDefaultConfig;
- (void)initialCacheStorage:(id)arg1 withConfigCenter:(_Bool)arg2;
- (void)initialCacheConfig4CC:(id)arg1;
- (void)demoteConfigUpdate:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)initialSwitch;

@end

