//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, RVKSession, RVTraceDataReporter;

@protocol RVTraceDebugProtocol <NSObject>
- (void)exitTinyAppWithSession:(RVKSession *)arg1;
- (long long)baseTime;
- (void)onStop;
- (void)onStart:(RVTraceDataReporter *)arg1 session:(RVKSession *)arg2;

@optional
- (NSString *)forceSetWebSocketAddr;
- (_Bool)disableDefaultNativePerfCollector;
- (_Bool)disableTraceDebug;
@end

