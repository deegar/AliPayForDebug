//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "APTransExchangeBtnDelegate-Protocol.h"

@class APTransExchangeBtn, NSString, UIButton, UILabel;
@protocol APTransActionPanelDelegate;

@interface APTransActionPanel : UIView <APTransExchangeBtnDelegate>
{
    struct CGRect _tabFrame;
    double _uiRatio;
    double _tabBarHeight;
    _Bool _tabHide;
    _Bool _compareHighlight;
    double _stillTipHideTime;
    id <APTransActionPanelDelegate> _delegate;
    unsigned long long _state;
    UIView *_apScanTabBar;
    APTransExchangeBtn *_exchangeBtn;
    UIButton *_captureBtn;
    UIButton *_upDownBtn;
    UIButton *_compareBtn;
    UIButton *_saveBtn;
    UILabel *_tipView;
}

@property(retain, nonatomic) UILabel *tipView; // @synthesize tipView=_tipView;
@property(retain, nonatomic) UIButton *saveBtn; // @synthesize saveBtn=_saveBtn;
@property(retain, nonatomic) UIButton *compareBtn; // @synthesize compareBtn=_compareBtn;
@property(retain, nonatomic) UIButton *upDownBtn; // @synthesize upDownBtn=_upDownBtn;
@property(retain, nonatomic) UIButton *captureBtn; // @synthesize captureBtn=_captureBtn;
@property(retain, nonatomic) APTransExchangeBtn *exchangeBtn; // @synthesize exchangeBtn=_exchangeBtn;
@property(nonatomic) __weak UIView *apScanTabBar; // @synthesize apScanTabBar=_apScanTabBar;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(nonatomic) __weak id <APTransActionPanelDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)setMainBtnEnabled:(_Bool)arg1;
- (void)showTipNoResult:(id)arg1 message:(id)arg2 withDlg:(_Bool)arg3 confirmCallback:(CDUnknownBlockType)arg4;
- (void)showTipNetError:(_Bool)arg1 flowLimit:(_Bool)arg2 confirmCallback:(CDUnknownBlockType)arg3;
- (void)showTipStill;
- (void)showTip:(id)arg1;
- (void)tryHideTipView;
- (void)hideTipView;
- (void)showWithTabHide:(_Bool)arg1 withAnim:(_Bool)arg2;
- (void)onExchangeMainBtnClick;
- (void)saveBtnClick:(id)arg1;
- (void)compareBtnClick:(id)arg1;
- (void)updateCompareBtn;
- (void)upDownBtnClick:(id)arg1;
- (void)captureBtnClick:(id)arg1;
- (void)layoutSubviews;
- (void)setupViews;
- (id)initWithView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
