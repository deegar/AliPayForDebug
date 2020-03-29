//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDateFormatter, NSMutableDictionary, NSOperationQueue;

@interface ARFlowLog : NSObject
{
    long long _timeout;
    NSOperationQueue *_logQueue;
    NSMutableDictionary *_logMap;
    NSMutableDictionary *_timeMap;
    NSMutableDictionary *_beginTimeMap;
    NSDateFormatter *_dateFormatter;
}

@property(retain, nonatomic) NSDateFormatter *dateFormatter; // @synthesize dateFormatter=_dateFormatter;
@property(retain, nonatomic) NSMutableDictionary *beginTimeMap; // @synthesize beginTimeMap=_beginTimeMap;
@property(retain, nonatomic) NSMutableDictionary *timeMap; // @synthesize timeMap=_timeMap;
@property(retain, nonatomic) NSMutableDictionary *logMap; // @synthesize logMap=_logMap;
@property(retain, nonatomic) NSOperationQueue *logQueue; // @synthesize logQueue=_logQueue;
@property(nonatomic) long long timeout; // @synthesize timeout=_timeout;
- (void).cxx_destruct;
- (void)cancelMarkLogs:(id)arg1;
- (void)cleanWithNowTime:(double)arg1;
- (void)markLogsIdentifer:(id)arg1 appendLog:(id)arg2 isTime:(_Bool)arg3 down:(_Bool)arg4;
- (void)markLogsIdentifer:(id)arg1 appendLog:(id)arg2 down:(_Bool)arg3;
- (id)init;

@end

