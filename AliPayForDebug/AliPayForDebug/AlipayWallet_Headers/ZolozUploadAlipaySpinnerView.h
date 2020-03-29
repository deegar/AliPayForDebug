//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "CAAnimationDelegate-Protocol.h"

@class CAMediaTimingFunction, CAShapeLayer, NSString;

@interface ZolozUploadAlipaySpinnerView : UIView <CAAnimationDelegate>
{
    CAShapeLayer *_progressLayer;
    CAShapeLayer *_moveProgressLayer;
    _Bool _isAnimating;
    CAMediaTimingFunction *_timingFunction;
    double _totoalDuration;
}

- (void).cxx_destruct;
- (void)stopAnimating;
- (void)startAnimating;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

