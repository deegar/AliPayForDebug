//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CALayer, MPVolumeView, NSTimer, UILabel, UILongPressGestureRecognizer;
@protocol BCMediaRecordBtnViewDelegate;

@interface BCMediaRecordBtnView : UIView
{
    NSTimer *_timer;
    _Bool _enable;
    int _recordSatus;
    id <BCMediaRecordBtnViewDelegate> _delegate;
    double _progress;
    CALayer *_outCircleLayer;
    CALayer *_inFillLayer;
    UILongPressGestureRecognizer *_longPressGesture;
    UILongPressGestureRecognizer *_tapGesture;
    UILabel *_tipsLabel;
    UILabel *_warningTipsLabel;
    UILabel *_failTipsLabel;
    MPVolumeView *_volume;
    struct CGPoint _gestureBeginPoint;
}

@property(retain, nonatomic) MPVolumeView *volume; // @synthesize volume=_volume;
@property(retain, nonatomic) UILabel *failTipsLabel; // @synthesize failTipsLabel=_failTipsLabel;
@property(retain, nonatomic) UILabel *warningTipsLabel; // @synthesize warningTipsLabel=_warningTipsLabel;
@property(retain, nonatomic) UILabel *tipsLabel; // @synthesize tipsLabel=_tipsLabel;
@property(nonatomic) struct CGPoint gestureBeginPoint; // @synthesize gestureBeginPoint=_gestureBeginPoint;
@property(retain, nonatomic) UILongPressGestureRecognizer *tapGesture; // @synthesize tapGesture=_tapGesture;
@property(retain, nonatomic) UILongPressGestureRecognizer *longPressGesture; // @synthesize longPressGesture=_longPressGesture;
@property(retain, nonatomic) CALayer *inFillLayer; // @synthesize inFillLayer=_inFillLayer;
@property(retain, nonatomic) CALayer *outCircleLayer; // @synthesize outCircleLayer=_outCircleLayer;
@property(nonatomic) _Bool enable; // @synthesize enable=_enable;
@property(nonatomic) int recordSatus; // @synthesize recordSatus=_recordSatus;
@property(nonatomic) double progress; // @synthesize progress=_progress;
@property(nonatomic) __weak id <BCMediaRecordBtnViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)dealloc;
- (void)showTips:(id)arg1;
- (void)hideWarningTips;
- (void)showWarningTips:(id)arg1 offsetY:(double)arg2;
- (void)showFailTips:(id)arg1;
- (void)removeAllTips;
- (void)notifyPhotoBtnPressed;
- (void)notifyMovieBeginRecording;
- (void)notifyRecordCanceld;
- (void)notifyRecordComplete;
- (void)notifyMovieBtnPressEnded;
- (void)notifyMovieBtnPressBegan;
- (void)tapGesture:(id)arg1;
- (void)handleLongPressChanged:(id)arg1;
- (void)handleLongPressEnded:(id)arg1;
- (void)longPressGesture:(id)arg1;
- (long long)touchArea;
- (void)volumeChanged:(id)arg1;
- (void)notifyVolumeChangedNotication;
- (void)removeVolumeChangedNotication;
- (_Bool)isMovieRecordingTooShort;
- (void)animationBeginVideoRecording;
- (struct CGRect)frameByCircleSize:(double)arg1;
- (_Bool)isRecording;
- (void)cancelRecording;
- (void)stopRecording;
- (void)startRecordTimer;
- (void)updateProgressCircle;
- (void)registerGesture;
- (void)setupLayer;
- (id)initWithFrame:(struct CGRect)arg1 delegate:(id)arg2;

@end

