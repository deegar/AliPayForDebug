//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSTimer, UIButton, UIImageView, UILabel, UIScrollView;
@protocol O2OCommonIndexLocationViewDelegate;

@interface O2OCommonIndexLocationView : UIView
{
    id <O2OCommonIndexLocationViewDelegate> _delegate;
    UIScrollView *_scrollView;
    UIView *_contentView;
    UIView *_imageContainer;
    UIImageView *_locationImageView;
    UIImageView *_noLocationRightImageView;
    UILabel *_topLabel;
    UILabel *_bottomLabel;
    UIButton *_button;
    unsigned long long _state;
    NSTimer *_timer;
    UIImageView *_guideImageView;
    UIImageView *_tagImage;
    UIImageView *_locationBg0;
    UIImageView *_locationBg1;
}

@property(retain, nonatomic) UIImageView *locationBg1; // @synthesize locationBg1=_locationBg1;
@property(retain, nonatomic) UIImageView *locationBg0; // @synthesize locationBg0=_locationBg0;
@property(retain, nonatomic) UIImageView *tagImage; // @synthesize tagImage=_tagImage;
@property(retain, nonatomic) UIImageView *guideImageView; // @synthesize guideImageView=_guideImageView;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(retain, nonatomic) UIButton *button; // @synthesize button=_button;
@property(retain, nonatomic) UILabel *bottomLabel; // @synthesize bottomLabel=_bottomLabel;
@property(retain, nonatomic) UILabel *topLabel; // @synthesize topLabel=_topLabel;
@property(retain, nonatomic) UIImageView *noLocationRightImageView; // @synthesize noLocationRightImageView=_noLocationRightImageView;
@property(retain, nonatomic) UIImageView *locationImageView; // @synthesize locationImageView=_locationImageView;
@property(retain, nonatomic) UIView *imageContainer; // @synthesize imageContainer=_imageContainer;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(nonatomic) __weak id <O2OCommonIndexLocationViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)gotoLocationSetting;
- (void)dealloc;
- (void)removeFromSuperview;
- (void)changeState:(unsigned long long)arg1;
- (void)layoutSubviews;
- (void)startLocation;
- (void)pauseTimer;
- (void)startTimer;
- (id)tagAnimationWithDuration:(double)arg1;
- (id)bgAnimationWithDurationOne:(double)arg1 center:(double)arg2;
- (id)bgAnimationWithDurationZero:(double)arg1 center:(double)arg2;
- (void)teardownAnimation;
- (void)setupAnimation;
- (id)initWithFrame:(struct CGRect)arg1;

@end

