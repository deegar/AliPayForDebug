//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView;

@interface GO2OBeginnerGuideView : UIView
{
    double _overseasTabCenterX;
    double _transparentCircleRadius;
    CDUnknownBlockType _onDismiss;
    long long _phase;
    UIImageView *_imageView;
    struct CGPoint _transparentCircleCenter;
}

@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(nonatomic) long long phase; // @synthesize phase=_phase;
@property(copy, nonatomic) CDUnknownBlockType onDismiss; // @synthesize onDismiss=_onDismiss;
@property(nonatomic) double transparentCircleRadius; // @synthesize transparentCircleRadius=_transparentCircleRadius;
@property(nonatomic) struct CGPoint transparentCircleCenter; // @synthesize transparentCircleCenter=_transparentCircleCenter;
@property(nonatomic) double overseasTabCenterX; // @synthesize overseasTabCenterX=_overseasTabCenterX;
- (void).cxx_destruct;
- (void)handleTap:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)showPhase2;
- (void)showPhase1;
- (void)dismiss;
- (void)show;
- (id)init;

@end

