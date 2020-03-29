//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSTimer, UIViewController;

@interface ASTimer : NSObject
{
    NSTimer *_timer;
    long long _time;
    UIViewController *_vc;
    CDUnknownBlockType _callBack;
    CDUnknownBlockType _cutDown;
}

@property(copy, nonatomic) CDUnknownBlockType cutDown; // @synthesize cutDown=_cutDown;
@property(copy, nonatomic) CDUnknownBlockType callBack; // @synthesize callBack=_callBack;
@property(nonatomic) __weak UIViewController *vc; // @synthesize vc=_vc;
@property(nonatomic) long long time; // @synthesize time=_time;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
- (void).cxx_destruct;
- (void)cancel;
- (void)resume;
- (void)pause;
- (void)countDown;
- (void)setCutDownCallBack:(CDUnknownBlockType)arg1;
- (void)initTimer;
- (void)start:(long long)arg1 useIN:(id)arg2 callback:(CDUnknownBlockType)arg3;

@end
