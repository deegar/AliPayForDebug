//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "DTStartApplicationHandler-Protocol.h"

@class NSDictionary, NSMutableDictionary, NSString;
@protocol NebulaStartHandlerProtocol, OS_dispatch_semaphore;

@interface TinyAppStartApplicationHandler : NSObject <DTStartApplicationHandler>
{
    id <NebulaStartHandlerProtocol> _handler;
    NSDictionary *_templateConfig;
    NSMutableDictionary *_dicPreLog;
    NSObject<OS_dispatch_semaphore> *_templateConfigSema;
}

@property(retain, nonatomic) NSObject<OS_dispatch_semaphore> *templateConfigSema; // @synthesize templateConfigSema=_templateConfigSema;
@property(retain, nonatomic) NSMutableDictionary *dicPreLog; // @synthesize dicPreLog=_dicPreLog;
@property(retain, nonatomic) NSDictionary *templateConfig; // @synthesize templateConfig=_templateConfig;
@property(retain, nonatomic) id <NebulaStartHandlerProtocol> handler; // @synthesize handler=_handler;
- (void).cxx_destruct;
- (void)recordCurrentTime:(id)arg1 forKey:(id)arg2;
- (void)preLoadTaobaoAccout;
- (_Bool)subPackageFallBack:(id)arg1;
- (_Bool)needForceUpdate:(id)arg1 params:(id)arg2;
- (void)prepareAppxApp:(long long)arg1 offlineType:(long long)arg2 minSDKVersion:(id)arg3 finsh:(CDUnknownBlockType)arg4;
- (void)forwardPrepareApp:(id)arg1;
- (void)dealFlowControlWithApp:(id)arg1;
- (_Bool)canHandleStartApplication:(id)arg1 params:(id)arg2;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

