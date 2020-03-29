//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AFWStockDetailBaseCell.h"

#import "AFCGestureDelegate-Protocol.h"

@class AFCGestureUtil, DTRpcAsyncCaller, NSObject, NSString, NSTimer, SDChartHeadTipView, SDFiveDayMinuteTrendView, UIView;
@protocol OS_dispatch_source;

@interface SDStockFiveDayMinuteChartCell : AFWStockDetailBaseCell <AFCGestureDelegate>
{
    _Bool _isBreathing;
    _Bool _isNextDay;
    UIView *_graphicsBgView;
    SDChartHeadTipView *_headTipView;
    DTRpcAsyncCaller *_minuteDataCaller;
    SDFiveDayMinuteTrendView *_minuteTrendView;
    AFCGestureUtil *_gestureManager;
    NSObject<OS_dispatch_source> *_timeLoop;
    NSTimer *_timer;
    long long _marketState;
    NSString *_lastDate;
}

@property(retain, nonatomic) NSString *lastDate; // @synthesize lastDate=_lastDate;
@property(nonatomic) _Bool isNextDay; // @synthesize isNextDay=_isNextDay;
@property(nonatomic) long long marketState; // @synthesize marketState=_marketState;
@property(nonatomic) _Bool isBreathing; // @synthesize isBreathing=_isBreathing;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *timeLoop; // @synthesize timeLoop=_timeLoop;
@property(retain, nonatomic) AFCGestureUtil *gestureManager; // @synthesize gestureManager=_gestureManager;
@property(retain, nonatomic) SDFiveDayMinuteTrendView *minuteTrendView; // @synthesize minuteTrendView=_minuteTrendView;
@property(retain, nonatomic) DTRpcAsyncCaller *minuteDataCaller; // @synthesize minuteDataCaller=_minuteDataCaller;
@property(retain, nonatomic) SDChartHeadTipView *headTipView; // @synthesize headTipView=_headTipView;
@property(retain, nonatomic) UIView *graphicsBgView; // @synthesize graphicsBgView=_graphicsBgView;
- (void).cxx_destruct;
- (void)onPluginEvent:(id)arg1;
- (void)refreshMinuteGraph;
- (void)queryFiveDayMinuteData:(_Bool)arg1;
- (void)queryData;
- (void)addGestures;
- (void)removeAllGestures;
- (void)hideHeadTip:(id)arg1;
- (void)handleLongPressGesture:(id)arg1;
- (void)handleDoubleTapGesture:(id)arg1;
- (void)changeTabCellToTag:(id)arg1;
- (void)handleTapGesture:(id)arg1;
- (void)setupHeadTipView;
- (void)createGraphicsView;
- (void)setupMinuteTrendView;
- (void)setupGraphicsBgView;
- (void)stopUpdateMinuteDataJob;
- (void)startUpdateMinuteDataJob;
- (void)appWillEnterForeground;
- (void)appDidEnterBackground;
- (void)cellExpoFrame:(struct CGRect)arg1;
- (_Bool)isShowEmpty;
- (void)cellEndDisplay;
- (void)cellWillDisplay;
- (void)viewDidDisappear;
- (void)viewDidAppear;
- (void)cellDidLoad;
- (void)viewDidLoad;
- (void)viewFirstLoadInTab;
- (void)dealloc;
- (id)timeSharingData;
- (_Bool)isDefaultStyle;
- (id)stockContext;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
