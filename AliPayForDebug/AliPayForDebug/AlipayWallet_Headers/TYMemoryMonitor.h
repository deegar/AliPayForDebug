//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSTimer;

@interface TYMemoryMonitor : NSObject
{
    float maxMem;
    NSMutableArray *rateArr;
    NSTimer *_clearMemTimer;
    float _memoryLaunch;
    float _memoryMax;
}

+ (id)shareMemMonitor;
@property(nonatomic) float memoryMax; // @synthesize memoryMax=_memoryMax;
@property(nonatomic) float memoryLaunch; // @synthesize memoryLaunch=_memoryLaunch;
- (void).cxx_destruct;
- (id)convertToLogFromDic:(id)arg1;
- (id)loadRateArr;
- (void)saveRateArr:(id)arg1;
- (void)postMemWarn;
- (void)appDidEnterBg;
- (void)appWillEnterFg;
- (void)refreshMemoryInfo;
- (void)initRateArr;
- (id)memoryInfoWithKey:(id)arg1;
- (id)caculateHealthRate;
- (void)checkCurrentMemory;
- (void)memHeartbeat;
- (void)checkClientLaunchMemory;
- (void)getMemUsage;
- (void)startMonitor;
- (id)init;

@end

