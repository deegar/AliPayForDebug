//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "APBinAopBlockLifeDelegate-Protocol.h"
#import "APBinAopDelegate-Protocol.h"
#import "APBinAopSelectorLifeDelegate-Protocol.h"

@class NSMutableArray, NSRecursiveLock, NSString;

@interface APTaskDiagnoser : NSObject <APBinAopDelegate, APBinAopBlockLifeDelegate, APBinAopSelectorLifeDelegate>
{
    NSMutableArray *_taskArr;
    NSRecursiveLock *_lock;
    _Bool _requireMonitor;
}

+ (id)getAopDelegater;
+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)sel_commitWithWrapper:(id)arg1;
- (_Bool)sel_canExcuteWithWrapper:(id)arg1;
- (void)block_commitWithWrapper:(id)arg1;
- (_Bool)block_canExcuteWithWrapper:(id)arg1;
- (void)sel_endWithWrapper:(id)arg1;
- (void)sel_startWithWrapper:(id)arg1;
- (void)block_endWithWrapper:(id)arg1;
- (void)block_startWithWrapper:(id)arg1;
- (id)getDataList;
- (void)addTaskObject:(id)arg1;
- (void)resetDataList;
- (id)getStackDesc:(id)arg1 phase:(_Bool)arg2;
- (void)_endWithWrapper:(id)arg1;
- (void)_startWithWrapper:(id)arg1;
- (id)endMonitor;
- (void)startMonitor;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

