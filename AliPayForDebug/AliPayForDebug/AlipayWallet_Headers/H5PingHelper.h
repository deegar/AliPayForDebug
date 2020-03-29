//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SimplePingDelegate-Protocol.h"

@class H5PingResult, NSString, SimplePing;

@interface H5PingHelper : NSObject <SimplePingDelegate>
{
    _Bool _useCached;
    int _leftTimes;
    int _pingtimes;
    SimplePing *simplePing;
    CDUnknownBlockType _callback;
    long long _timeStamp;
    H5PingResult *_pingResult;
    double _beginTime;
    NSString *_host;
}

+ (void)pingWithHost:(id)arg1 times:(int)arg2 useCashed:(_Bool)arg3 callback:(CDUnknownBlockType)arg4;
@property(nonatomic) _Bool useCached; // @synthesize useCached=_useCached;
@property(retain, nonatomic) NSString *host; // @synthesize host=_host;
@property(nonatomic) double beginTime; // @synthesize beginTime=_beginTime;
@property(retain, nonatomic) H5PingResult *pingResult; // @synthesize pingResult=_pingResult;
@property(nonatomic) long long timeStamp; // @synthesize timeStamp=_timeStamp;
@property(nonatomic) int pingtimes; // @synthesize pingtimes=_pingtimes;
@property(nonatomic) int leftTimes; // @synthesize leftTimes=_leftTimes;
@property(copy, nonatomic) CDUnknownBlockType callback; // @synthesize callback=_callback;
@property(retain, nonatomic) SimplePing *simplePing; // @synthesize simplePing;
- (void).cxx_destruct;
- (void)simplePing:(id)arg1 didReceiveUnexpectedPacket:(id)arg2;
- (void)simplePing:(id)arg1 didFailToSendPacket:(id)arg2 sequenceNumber:(unsigned short)arg3 error:(id)arg4;
- (void)simplePing:(id)arg1 didReceivePingResponsePacket:(id)arg2 sequenceNumber:(unsigned short)arg3;
- (void)simplePing:(id)arg1 didFailWithError:(id)arg2;
- (void)simplePing:(id)arg1 didStartWithAddress:(id)arg2;
- (void)endTime;
- (void)killPing;
- (void)createPingResult;
- (void)doAfterPingEnd:(_Bool)arg1;
- (void)doPing;
- (void)savePingResult:(id)arg1 host:(id)arg2;
- (id)findPingResultWithHost:(id)arg1;
- (id)initWithHost:(id)arg1 times:(int)arg2 useCashed:(_Bool)arg3 callback:(CDUnknownBlockType)arg4;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

