//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSOperationQueue;

@interface APThreadPool : NSObject
{
    NSOperationQueue *_queue;
    _Bool _paused;
}

+ (id)homeShowThreadPool;
+ (id)coreProcessThreadPool;
+ (id)loginRPCProcessThreadPool;
+ (id)networkProcessThreadPool;
+ (id)preloadThreadPoolForLogin;
+ (id)defaultThreadPool;
@property(getter=isPaused) _Bool paused; // @synthesize paused=_paused;
- (void).cxx_destruct;
- (void)checkPauseOperationState;
- (void)addTaskIfSuspended:(id)arg1 priority:(long long)arg2 block:(CDUnknownBlockType)arg3;
- (void)addTask:(id)arg1 priority:(long long)arg2 block:(CDUnknownBlockType)arg3;
- (void)cancelAllOperations;
@property(getter=isSuspended) _Bool suspended; // @dynamic suspended;
@property long long maxConcurrentTaskCount; // @dynamic maxConcurrentTaskCount;
- (id)init;

@end

