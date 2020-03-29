//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableArray, NSTimer;

@interface RVTraceDebugDataCenter : NSObject
{
    NSDictionary *_deviceinfo;
    NSMutableArray *_performanceData;
    NSMutableArray *_sendData;
    long long _dataSize;
    NSTimer *_timer;
}

+ (void)destroyInstance;
+ (id)shareInstance;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(nonatomic) long long dataSize; // @synthesize dataSize=_dataSize;
@property(retain, nonatomic) NSMutableArray *sendData; // @synthesize sendData=_sendData;
@property(retain, nonatomic) NSMutableArray *performanceData; // @synthesize performanceData=_performanceData;
@property(retain, nonatomic) NSDictionary *deviceinfo; // @synthesize deviceinfo=_deviceinfo;
- (void).cxx_destruct;
- (void)forceSend;
- (void)clearTraceData;
- (void)sendTraceDataWithWS;
- (id)getClientTag:(id)arg1;
- (id)assembleTraceData:(id)arg1;
- (void)cacheAssembledTraceData:(id)arg1;
- (void)cacheTraceData:(id)arg1;
- (void)loopTraceData;
- (void)stopLooper;
- (void)startLooper;
- (void)dealloc;

@end

