//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface SAMemoryMonitor : NSObject
{
}

+ (_Bool)isBelowiOS10;
+ (double)deviceMemory;
+ (int)memoryAvailableLevel;
+ (id)taskInfo;
+ (id)getStatisticsInfo;
+ (id)getMemoryInfo;
+ (void)cleanData;
+ (void)resetDataAndSwitch;
+ (void)submitData;
+ (_Bool)checkMemoryAndDowngradeIfNeed:(id)arg1;
+ (void)stub:(id)arg1 args:(id)arg2;
+ (void)checkIfNeedCameraDowngrade;
+ (_Bool)isNeedCameraDowngrade;
+ (void)setSendOldMemoryParams:(_Bool)arg1;
+ (void)setSwitcher:(_Bool)arg1;
+ (void)setDowngradeSceneArray:(id)arg1;
+ (void)setNeedDowngrade:(_Bool)arg1;
+ (void)setDowngradeSystemMemoryLevel:(int)arg1;
+ (void)setDowngradePhysFootprint:(int)arg1;
+ (id)linkArray;

@end

