//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSLock, NSMutableDictionary;

@interface PPSyncService : NSObject
{
    NSMutableDictionary *_container;
    NSMutableDictionary *_syncMessageQueues;
    NSLock *_messagesLock;
    NSLock *_handMessageLock;
}

- (void).cxx_destruct;
- (void)showLog:(id)arg1 time:(long long)arg2 log:(id)arg3;
- (id)handerClassName:(id)arg1;
- (id)handMessageLock:(id)arg1;
- (id)messageQueueLock:(id)arg1;
- (id)messageQueue:(id)arg1;
- (id)createHandlerWithSyncBizName:(id)arg1;
- (void)handleMessage:(id)arg1 bizName:(id)arg2 finished:(_Bool)arg3;
- (void)handleMessageBizName:(id)arg1 message:(id)arg2;
- (void)tryHandleMessage:(id)arg1;
- (void)handleSyncMessageBizName:(id)arg1 syncData:(id)arg2;
- (void)handleMessagePluginSync:(id)arg1;
- (void)willDestroy;
- (void)start;
- (id)init;

@end

