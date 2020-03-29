//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GWRouterDelegate-Protocol.h"

@class DTRpcAsyncCaller, GWPopManager, NSDictionary, NSString, UINavigationController;

@interface GWOpenManager : NSObject <GWRouterDelegate>
{
    _Bool _unSafeHandle;
    NSDictionary *_launchOptions;
    UINavigationController *_navigationController111;
    GWPopManager *_popManager;
    DTRpcAsyncCaller *_rpcPreReceive;
    DTRpcAsyncCaller *_rpcUnpack;
}

+ (id)shareInstance;
+ (id)instanceWithLaunchOptions:(id)arg1;
+ (int)canHandleWithLaunchOptions:(id)arg1;
@property(nonatomic) _Bool unSafeHandle; // @synthesize unSafeHandle=_unSafeHandle;
@property(retain, nonatomic) DTRpcAsyncCaller *rpcUnpack; // @synthesize rpcUnpack=_rpcUnpack;
@property(retain, nonatomic) DTRpcAsyncCaller *rpcPreReceive; // @synthesize rpcPreReceive=_rpcPreReceive;
@property(retain, nonatomic) GWPopManager *popManager; // @synthesize popManager=_popManager;
@property(retain, nonatomic) UINavigationController *navigationController111; // @synthesize navigationController111=_navigationController111;
@property(retain, nonatomic) NSDictionary *launchOptions; // @synthesize launchOptions=_launchOptions;
- (void).cxx_destruct;
- (void)unpacketRpc;
- (void)requestPreReceiveRpc;
- (void)cancelAllRpc;
- (void)handleWithLaunchOptions:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

