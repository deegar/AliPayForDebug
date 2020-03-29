//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTViewController.h"

#import "MBListViewDelegate-Protocol.h"

@class AUPopTipView, MBHomeGuideView, MBListView, MessageBoxHomeConfig, NSDictionary, NSString, UIImageView;

@interface MBHomeViewController : DTViewController <MBListViewDelegate>
{
    MBHomeGuideView *_guidePage;
    UIImageView *_noticeSettingImgView;
    AUPopTipView *_popTipView;
    NSDictionary *_param;
    MBListView *_messageBoxView;
    MessageBoxHomeConfig *_homeConfig;
    long long _unreadMsgCount;
}

@property(nonatomic) long long unreadMsgCount; // @synthesize unreadMsgCount=_unreadMsgCount;
@property(retain, nonatomic) MessageBoxHomeConfig *homeConfig; // @synthesize homeConfig=_homeConfig;
@property(retain, nonatomic) MBListView *messageBoxView; // @synthesize messageBoxView=_messageBoxView;
@property(retain, nonatomic) NSDictionary *param; // @synthesize param=_param;
- (void).cxx_destruct;
- (void)noticeBtnClicked:(id)arg1;
- (void)settingButtonPressed:(id)arg1;
- (id)getMonitorViewId;
- (id)getWKBuilder;
- (void)onEnterForeground:(id)arg1;
- (void)onEnterBackground:(id)arg1;
- (void)dealloc;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)removeNoticeGuideView:(_Bool)arg1;
- (void)addOpenNoticeGuideViewIfNeed;
- (void)viewDidAppear:(_Bool)arg1;
- (void)closeGuidePage;
- (_Bool)addGuidePageIfNeed;
- (void)gotoAssistPage:(id)arg1;
- (void)assistEntraceViewClickMonitor:(id)arg1 redPointType:(id)arg2 redPointDetail:(id)arg3 index:(unsigned long long)arg4;
- (void)assistEntraceViewExposureMonitor:(id)arg1;
- (void)assistViewInit:(id)arg1;
- (void)assistModuleLoad:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (_Bool)isDisplayNoticeSetting;
- (void)refreshNavigationBarRightBtns;
- (void)viewDidLoad;
- (id)initWithParam:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

