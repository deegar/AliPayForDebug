//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MTUseTabMonitor, NSTimer;

@interface MTUseMonitor : NSObject
{
    double _totalFgTime;
    double _enterFgTime;
    double _enterBgTime;
    double _bgShortTime;
    NSTimer *_delayTimer;
    MTUseTabMonitor *_useTabMonitor;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (double)loadTotalTime;
- (void)saveTotalTime:(double)arg1;
- (id)tabMonitor;
- (void)doSimpleReport;
- (void)onDelayTimer;
- (void)onAppBecomeActive;
- (void)onAppResignActive;
- (void)onAppLaunch;
- (id)init;

@end
