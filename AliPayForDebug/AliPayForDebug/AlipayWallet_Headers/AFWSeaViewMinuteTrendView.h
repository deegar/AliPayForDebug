//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "CAAnimationDelegate-Protocol.h"

@class AFWSeaViewBarometerStockTrendModel, CAGradientLayer, CAShapeLayer, NSString;

@interface AFWSeaViewMinuteTrendView : UIView <CAAnimationDelegate>
{
    float _min;
    float _max;
    float _radio;
    float _step;
    double _chartHeight;
    AFWSeaViewBarometerStockTrendModel *_model;
    struct CGPoint _lastPoint;
    _Bool _animationing;
    NSString *_type;
    _Bool _animation;
    _Bool _firtLoad;
    CAShapeLayer *_lineLayer;
    CAShapeLayer *_circleLayer;
    CAShapeLayer *_gradientShapeLayer;
    CAGradientLayer *_gradientColorLayer;
    CAShapeLayer *_bglayer;
}

@property(retain, nonatomic) CAShapeLayer *bglayer; // @synthesize bglayer=_bglayer;
@property(retain, nonatomic) CAGradientLayer *gradientColorLayer; // @synthesize gradientColorLayer=_gradientColorLayer;
@property(retain, nonatomic) CAShapeLayer *gradientShapeLayer; // @synthesize gradientShapeLayer=_gradientShapeLayer;
@property(retain, nonatomic) CAShapeLayer *circleLayer; // @synthesize circleLayer=_circleLayer;
@property(retain, nonatomic) CAShapeLayer *lineLayer; // @synthesize lineLayer=_lineLayer;
@property(nonatomic) _Bool firtLoad; // @synthesize firtLoad=_firtLoad;
@property(nonatomic) _Bool animation; // @synthesize animation=_animation;
- (void).cxx_destruct;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)drawCircle;
- (void)drawLinePath;
- (void)getMinAndMax;
- (void)lineDisAppear;
- (void)drawLineAnimation;
- (void)setTrendModel:(id)arg1 type:(id)arg2;
- (void)drawDashLine;
- (void)drawChartText;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

