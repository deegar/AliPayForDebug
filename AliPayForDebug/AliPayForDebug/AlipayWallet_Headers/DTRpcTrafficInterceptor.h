//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "DTRpcInterceptor-Protocol.h"

@class APThrottleFlowView, NSString, NSTimer;

@interface DTRpcTrafficInterceptor : NSObject <DTRpcInterceptor>
{
    _Bool _isOverflow;
    APThrottleFlowView *_throttleFlowView;
    NSTimer *_limitTimer;
}

@property(retain) NSTimer *limitTimer; // @synthesize limitTimer=_limitTimer;
@property(retain) APThrottleFlowView *throttleFlowView; // @synthesize throttleFlowView=_throttleFlowView;
@property _Bool isOverflow; // @synthesize isOverflow=_isOverflow;
- (void).cxx_destruct;
- (void)overFlowTimerFired:(id)arg1;
- (void)startTimer:(id)arg1;
- (id)afterRpcOperation:(id)arg1;
- (id)beforeRpcOperation:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

