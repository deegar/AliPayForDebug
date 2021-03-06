//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class APThreadPool;

@interface APThreadPoolManager : NSObject
{
    APThreadPool *_defaultThreadPool;
    APThreadPool *_preloadThreadPoolForLogin;
    APThreadPool *_networkProcessThreadPool;
    APThreadPool *_loginRPCProcessThreadPool;
    APThreadPool *_coreProcessThreadPool;
    APThreadPool *_homeShowThreadPool;
}

+ (long long)maxConcurrentTaskCount;
+ (id)threadTasksDetail;
+ (id)sharedThreadPoolManager;
- (void).cxx_destruct;
- (void)receivePipelineCoreProcessEnd:(id)arg1;
- (void)receivePipelineCoreProcessStart:(id)arg1;
- (id)allThreadPoolsInUse;
@property(readonly, nonatomic) APThreadPool *homeShowThreadPool;
@property(readonly, nonatomic) APThreadPool *coreProcessThreadPool;
@property(readonly, nonatomic) APThreadPool *loginRPCProcessThreadPool;
@property(readonly, nonatomic) APThreadPool *networkProcessThreadPool;
@property(readonly, nonatomic) APThreadPool *preloadThreadPoolForLogin;
@property(readonly, nonatomic) APThreadPool *defaultThreadPool;
- (id)init;

@end

