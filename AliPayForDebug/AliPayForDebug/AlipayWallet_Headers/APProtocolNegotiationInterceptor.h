//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "DTRpcInterceptor-Protocol.h"

@class APSPDYSwitchConfig, NSLock, NSMutableDictionary, NSString;

@interface APProtocolNegotiationInterceptor : NSObject <DTRpcInterceptor>
{
    NSMutableDictionary *_history;
    NSMutableDictionary *_startTimeDictionary;
    NSLock *_lock;
    APSPDYSwitchConfig *_spdySwitchConfig;
}

+ (id)generateRandomStr:(unsigned long long)arg1;
@property(retain, nonatomic) APSPDYSwitchConfig *spdySwitchConfig; // @synthesize spdySwitchConfig=_spdySwitchConfig;
@property(retain, nonatomic) NSLock *lock; // @synthesize lock=_lock;
@property(retain, nonatomic) NSMutableDictionary *startTimeDictionary; // @synthesize startTimeDictionary=_startTimeDictionary;
@property(retain, nonatomic) NSMutableDictionary *history; // @synthesize history=_history;
- (void).cxx_destruct;
- (void)preHandleForShadow:(id)arg1;
- (_Bool)operationTypeInMDAPAPIList:(id)arg1;
- (_Bool)operationTypeRPCCanH2:(id)arg1;
- (_Bool)operationTypeRPCInBlackList:(id)arg1;
- (void)spdySessionOpenedNotification:(id)arg1;
- (_Bool)isOnline;
- (_Bool)isOnline:(id)arg1;
- (_Bool)negotiateForOperation:(id)arg1;
- (id)afterRpcOperation:(id)arg1;
- (_Bool)operationTypeInShortRPCList:(id)arg1;
- (_Bool)operationTypeInZstdRPCList:(id)arg1;
- (_Bool)negotiateForOperationAMRPC:(id)arg1;
- (id)beforeRpcOperation:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

