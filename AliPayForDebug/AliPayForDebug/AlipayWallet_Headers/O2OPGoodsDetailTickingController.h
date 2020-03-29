//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "O2OTemplateController.h"

#import "UIAlertViewDelegate-Protocol.h"

@class NSDictionary, NSString, NSTimer, O2OPGoodsDetailFollowModel, O2OPGoodsGroupTickManager;

@interface O2OPGoodsDetailTickingController : O2OTemplateController <UIAlertViewDelegate>
{
    _Bool _isActive;
    _Bool _isVisible;
    _Bool _isNeedsCountdown;
    _Bool _doCountDown;
    NSTimer *_timer;
    O2OPGoodsDetailFollowModel *_followModel;
    NSDictionary *_countdown;
    long long _tickShowThreshold;
    double _endTime;
    O2OPGoodsGroupTickManager *_groupTickManager;
    NSTimer *_groupTimer;
}

@property(retain, nonatomic) NSTimer *groupTimer; // @synthesize groupTimer=_groupTimer;
@property(retain, nonatomic) O2OPGoodsGroupTickManager *groupTickManager; // @synthesize groupTickManager=_groupTickManager;
@property(nonatomic) double endTime; // @synthesize endTime=_endTime;
@property(nonatomic) long long tickShowThreshold; // @synthesize tickShowThreshold=_tickShowThreshold;
@property(retain, nonatomic) NSDictionary *countdown; // @synthesize countdown=_countdown;
@property(retain, nonatomic) O2OPGoodsDetailFollowModel *followModel; // @synthesize followModel=_followModel;
@property(nonatomic) _Bool doCountDown; // @synthesize doCountDown=_doCountDown;
@property(nonatomic, setter=setNeedsCountdown:) _Bool isNeedsCountdown; // @synthesize isNeedsCountdown=_isNeedsCountdown;
@property(nonatomic, setter=setVisible:) _Bool isVisible; // @synthesize isVisible=_isVisible;
@property(nonatomic, setter=setActive:) _Bool isActive; // @synthesize isActive=_isActive;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
- (void).cxx_destruct;
- (void)groupTimerEnd;
- (void)showToast:(id)arg1;
- (void)followItem;
- (void)notifyTickingEnd;
- (void)tick;
- (void)didAppear:(id)arg1;
- (void)willDisappear:(id)arg1;
- (void)didBecomeActive;
- (void)willResignActive;
- (_Bool)isGroupEnd:(double)arg1;
- (void)stopTimer;
- (void)updateTimer;
- (void)startTimer;
- (id)state:(id)arg1;
- (void)didLoadTemplate;
- (id)initialState;
- (id)initWithItem:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

