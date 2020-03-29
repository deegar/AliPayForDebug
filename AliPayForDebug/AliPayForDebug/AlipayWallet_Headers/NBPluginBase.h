//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PSDPluginProtocol-Protocol.h"

@class NSString, PSDKernel;

@interface NBPluginBase : NSObject <PSDPluginProtocol>
{
    long long _onceToken;
    PSDKernel *_target;
    NSString *_scope;
}

@property(copy, nonatomic) NSString *scope; // @synthesize scope=_scope;
@property(readonly, nonatomic) __weak PSDKernel *target; // @synthesize target=_target;
- (void).cxx_destruct;
- (void)addDelayJSApiCallWithName:(id)arg1 data:(id)arg2;
- (id)currentViewController;
- (_Bool)dispatchEvent:(id)arg1;
- (void)registerPlugin2Target:(id)arg1;
- (void)registerJsApi2Target:(id)arg1;
- (id)pluginConfigWithName:(id)arg1 scope:(id)arg2 eventNames:(id)arg3 useCapture:(_Bool)arg4;
- (void)addPlugins;
- (void)addJSApis;
- (void)pluginDidLoad;
- (void)handleEvent:(id)arg1;
- (void)associateWeakTarget:(id)arg1;
- (int)priority;
@property(readonly, copy, nonatomic) NSString *name;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

