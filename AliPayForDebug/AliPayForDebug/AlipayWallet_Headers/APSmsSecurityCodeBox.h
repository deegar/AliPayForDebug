//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "APSecurityCodeBox.h"

@interface APSmsSecurityCodeBox : APSecurityCodeBox
{
    double _interval;
    CDUnknownBlockType _completeBlock;
    double _startTime;
}

@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(copy, nonatomic) CDUnknownBlockType completeBlock; // @synthesize completeBlock=_completeBlock;
@property(nonatomic) double interval; // @synthesize interval=_interval;
- (void).cxx_destruct;
- (void)updateButtonTitleWithTimeRemain:(double)arg1;
- (void)onTimer:(id)arg1;
- (void)setCountdownDidCompleteBlock:(CDUnknownBlockType)arg1;
- (void)stopCountdown;
- (void)startCountdown;
- (id)initWithFrame:(struct CGRect)arg1 Interval:(double)arg2;
- (id)initWithOriginY:(double)arg1 Interval:(double)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

@end

