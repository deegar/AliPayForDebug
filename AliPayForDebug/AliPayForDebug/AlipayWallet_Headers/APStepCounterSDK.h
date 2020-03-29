//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class APStepCounter, NSDate;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface APStepCounterSDK : NSObject
{
    _Bool _isSyncing;
    _Bool _isSyncHistory;
    APStepCounter *_stepCounter;
    NSObject<OS_dispatch_queue> *_uploadQueue;
    NSObject<OS_dispatch_semaphore> *_syncSemaphore;
    CDUnknownBlockType _uploadHandler;
    NSDate *_queryDate;
    double _lastReadTime;
    double _lastSyncHistoryTime;
}

@property(nonatomic) double lastSyncHistoryTime; // @synthesize lastSyncHistoryTime=_lastSyncHistoryTime;
@property(nonatomic) _Bool isSyncHistory; // @synthesize isSyncHistory=_isSyncHistory;
@property(nonatomic) double lastReadTime; // @synthesize lastReadTime=_lastReadTime;
@property(retain, nonatomic) NSDate *queryDate; // @synthesize queryDate=_queryDate;
@property(copy, nonatomic) CDUnknownBlockType uploadHandler; // @synthesize uploadHandler=_uploadHandler;
@property(nonatomic) _Bool isSyncing; // @synthesize isSyncing=_isSyncing;
@property(retain, nonatomic) NSObject<OS_dispatch_semaphore> *syncSemaphore; // @synthesize syncSemaphore=_syncSemaphore;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *uploadQueue; // @synthesize uploadQueue=_uploadQueue;
@property(retain, nonatomic) APStepCounter *stepCounter; // @synthesize stepCounter=_stepCounter;
- (void).cxx_destruct;
- (unsigned long long)sourceOption;
- (void)logStepsSuccess;
- (void)syncHistorySteps:(id)arg1 readList:(id)arg2;
- (void)uploadHistorySteps:(long long)arg1 option:(unsigned long long)arg2;
- (void)startHistorySync;
- (void)setUploadStepsHandler:(CDUnknownBlockType)arg1;
- (void)syncSteps:(id)arg1 bizType:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (void)trySeqUploadStepCountWithBizType:(id)arg1;
- (void)tryUploadStepCountWithBizType:(id)arg1;
- (void)tryUploadStepCountWithAppId:(id)arg1;
- (void)uploadStepCountWithType:(id)arg1;
- (void)onLoginSuccess:(id)arg1;
- (void)onWillEnterForeground;
- (void)startService;
- (id)initWithStepCounter:(id)arg1;

@end

