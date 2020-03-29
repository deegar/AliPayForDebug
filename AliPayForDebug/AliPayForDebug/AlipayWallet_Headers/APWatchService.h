//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "DTService-Protocol.h"
#import "WCSessionDelegate-Protocol.h"

@class APWatchCmdHandler, NSLock, NSMapTable, NSString, NSURL;

@interface APWatchService : NSObject <WCSessionDelegate, DTService>
{
    NSMapTable *_observerMap;
    NSLock *_observerMapLock;
    APWatchCmdHandler *_cmdHandler;
}

@property(retain, nonatomic) APWatchCmdHandler *cmdHandler; // @synthesize cmdHandler=_cmdHandler;
@property(retain, nonatomic) NSLock *observerMapLock; // @synthesize observerMapLock=_observerMapLock;
@property(retain, nonatomic) NSMapTable *observerMap; // @synthesize observerMap=_observerMap;
- (void).cxx_destruct;
- (void)session:(id)arg1 didReceiveFile:(id)arg2;
- (void)session:(id)arg1 didFinishFileTransfer:(id)arg2 error:(id)arg3;
- (void)session:(id)arg1 didReceiveUserInfo:(id)arg2;
- (void)session:(id)arg1 didFinishUserInfoTransfer:(id)arg2 error:(id)arg3;
- (void)session:(id)arg1 didReceiveApplicationContext:(id)arg2;
- (void)session:(id)arg1 didReceiveMessageData:(id)arg2 replyHandler:(CDUnknownBlockType)arg3;
- (void)session:(id)arg1 didReceiveMessageData:(id)arg2;
- (void)session:(id)arg1 didReceiveMessage:(id)arg2 replyHandler:(CDUnknownBlockType)arg3;
- (void)session:(id)arg1 didReceiveMessage:(id)arg2;
- (void)sessionReachabilityDidChange:(id)arg1;
- (void)sessionWatchStateDidChange:(id)arg1;
- (void)sessionDidDeactivate:(id)arg1;
- (void)sessionDidBecomeInactive:(id)arg1;
- (void)session:(id)arg1 activationDidCompleteWithState:(long long)arg2 error:(id)arg3;
- (void)sendMessageData:(id)arg1 replyHandler:(CDUnknownBlockType)arg2 errorHandler:(CDUnknownBlockType)arg3;
- (void)sendMessage:(id)arg1 replyHandler:(CDUnknownBlockType)arg2 errorHandler:(CDUnknownBlockType)arg3;
- (void)removeObserver:(id)arg1;
- (id)transferUserInfo:(id)arg1;
- (void)addObserver:(id)arg1 forKey:(id)arg2;
- (void)addObserver:(id)arg1;
@property(readonly, nonatomic) NSURL *watchDirectoryURL;
@property(readonly, nonatomic) _Bool isComplicationEnabled;
@property(readonly, nonatomic) _Bool isWatchAppInstalled;
@property(readonly, nonatomic) _Bool isPaired;
@property(readonly, nonatomic) _Bool isReachable;
@property(readonly, nonatomic) NSString *watchDeviceModel;
@property(readonly, nonatomic) NSString *watchDeviceId;
- (void)setupSession;
- (void)connectToDevice;
- (void)willDestroy;
- (void)start;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

