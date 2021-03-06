//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class BeeVideoSlider, CADisplayLink, UIButton, UIImageView, UILabel;
@protocol BeeVideoPlayerToolBarDelegate;

@interface BeeVideoPlayerToolBar : UIView
{
    _Bool _isSeeking;
    id <BeeVideoPlayerToolBarDelegate> _delegate;
    UIImageView *_backgroundImageView;
    UILabel *_currentTimeLabel;
    UILabel *_totalTimeLabel;
    BeeVideoSlider *_progressView;
    UIButton *_playerButton;
    UIButton *_assetButton;
    double _marginRight;
    double _totalTime;
    double _playedTime;
    CADisplayLink *_displayLink;
    double _progressTime;
    long long _currentState;
}

@property(nonatomic) _Bool isSeeking; // @synthesize isSeeking=_isSeeking;
@property(nonatomic) long long currentState; // @synthesize currentState=_currentState;
@property(nonatomic) double progressTime; // @synthesize progressTime=_progressTime;
@property(retain, nonatomic) CADisplayLink *displayLink; // @synthesize displayLink=_displayLink;
@property(nonatomic) double playedTime; // @synthesize playedTime=_playedTime;
@property(nonatomic) double totalTime; // @synthesize totalTime=_totalTime;
@property(nonatomic) double marginRight; // @synthesize marginRight=_marginRight;
@property(retain, nonatomic) UIButton *assetButton; // @synthesize assetButton=_assetButton;
@property(retain, nonatomic) UIButton *playerButton; // @synthesize playerButton=_playerButton;
@property(retain, nonatomic) BeeVideoSlider *progressView; // @synthesize progressView=_progressView;
@property(retain, nonatomic) UILabel *totalTimeLabel; // @synthesize totalTimeLabel=_totalTimeLabel;
@property(retain, nonatomic) UILabel *currentTimeLabel; // @synthesize currentTimeLabel=_currentTimeLabel;
@property(retain, nonatomic) UIImageView *backgroundImageView; // @synthesize backgroundImageView=_backgroundImageView;
@property(nonatomic) __weak id <BeeVideoPlayerToolBarDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)resetUI;
- (void)layoutSubviews;
- (id)setTimeFormat:(double)arg1;
- (void)endSlider:(id)arg1;
- (void)changeSlider:(id)arg1;
- (void)btnClicked:(id)arg1;
- (void)seekToTime:(double)arg1;
- (void)showCustomBtn:(_Bool)arg1 withTag:(long long)arg2;
- (void)setPlayerState:(long long)arg1;
- (void)setCachedTime:(double)arg1;
- (void)handleDisplayLink:(id)arg1;
- (void)stopDisplayLink;
- (void)startDisplayLink;
- (void)resetProgress;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

