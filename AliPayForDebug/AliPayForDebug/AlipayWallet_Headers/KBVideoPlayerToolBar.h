//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CADisplayLink, KBVideoSlider, UIButton, UILabel;
@protocol KBVideoPlayerToolBarDelegate;

@interface KBVideoPlayerToolBar : UIView
{
    _Bool _isSeeking;
    int _currentState;
    double _progress;
    id <KBVideoPlayerToolBarDelegate> _delegate;
    UILabel *_currentTimeLabel;
    UILabel *_totalTimeLabel;
    KBVideoSlider *_progressView;
    UIButton *_playerButton;
    double _marginRight;
    double _totalTime;
    double _playedTime;
    CADisplayLink *_displayLink;
    double _progressTime;
    double _playbackRefreshTimeInterval;
}

@property(nonatomic) double playbackRefreshTimeInterval; // @synthesize playbackRefreshTimeInterval=_playbackRefreshTimeInterval;
@property(nonatomic) _Bool isSeeking; // @synthesize isSeeking=_isSeeking;
@property(nonatomic) int currentState; // @synthesize currentState=_currentState;
@property(nonatomic) double progressTime; // @synthesize progressTime=_progressTime;
@property(retain, nonatomic) CADisplayLink *displayLink; // @synthesize displayLink=_displayLink;
@property(nonatomic) double playedTime; // @synthesize playedTime=_playedTime;
@property(nonatomic) double totalTime; // @synthesize totalTime=_totalTime;
@property(nonatomic) double marginRight; // @synthesize marginRight=_marginRight;
@property(retain, nonatomic) UIButton *playerButton; // @synthesize playerButton=_playerButton;
@property(retain, nonatomic) KBVideoSlider *progressView; // @synthesize progressView=_progressView;
@property(retain, nonatomic) UILabel *totalTimeLabel; // @synthesize totalTimeLabel=_totalTimeLabel;
@property(retain, nonatomic) UILabel *currentTimeLabel; // @synthesize currentTimeLabel=_currentTimeLabel;
@property(nonatomic) __weak id <KBVideoPlayerToolBarDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) double progress; // @synthesize progress=_progress;
- (void).cxx_destruct;
- (void)resetUI;
- (void)layoutSubviews;
- (id)setTimeFormat:(double)arg1;
- (void)endSlider:(id)arg1;
- (void)changeSlider:(id)arg1;
- (void)btnClicked:(id)arg1;
- (void)seekToTime:(double)arg1;
- (void)showCustomBtn:(_Bool)arg1 withTag:(long long)arg2;
- (void)setPlayerState:(int)arg1;
- (void)setCachedTime:(double)arg1;
- (void)handleDisplayLink:(id)arg1;
- (void)stopDisplayLink;
- (void)startDisplayLink;
- (void)resetProgress;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

