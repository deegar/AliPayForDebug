//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol ARTVCTimerCenterDelegate;

@interface ARTVCTimerCenter : NSObject
{
    CriticalSection_e2a1dca8 selflock_;
    id <ARTVCTimerCenterDelegate> _delegate;
    NSMutableDictionary *_connectTimers;
}

@property(retain, nonatomic) NSMutableDictionary *connectTimers; // @synthesize connectTimers=_connectTimers;
@property(nonatomic) __weak id <ARTVCTimerCenterDelegate> delegate; // @synthesize delegate=_delegate;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)stopConnectTimerForFeed:(id)arg1;
- (void)startConnectTimer:(double)arg1 forFeed:(id)arg2;
- (id)init;

@end

