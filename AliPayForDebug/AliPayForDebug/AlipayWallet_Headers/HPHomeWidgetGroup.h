//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTLauncherWidgetGroupBase.h"

#import "AUDialogDelegate-Protocol.h"
#import "BadgeSdkServiceProtocol-Protocol.h"
#import "HGridViewDelegate-Protocol.h"
#import "HTopAppsViewDelegate-Protocol.h"
#import "PromotionCenterDelegate-Protocol.h"
#import "RemindInfoChangeDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"

@class ACAppManager, CDPSpaceInfo, CDPSpaceView, HActionsPopTipView, HGridView, HMoreAppTimeLimitInfo, NSArray, NSString, UIView, UIViewController;
@protocol HMenuGroundViewProtocol, HomeCardPageVC;

@interface HPHomeWidgetGroup : DTLauncherWidgetGroupBase <UIScrollViewDelegate, UIGestureRecognizerDelegate, PromotionCenterDelegate, HGridViewDelegate, RemindInfoChangeDelegate, BadgeSdkServiceProtocol, HTopAppsViewDelegate, AUDialogDelegate>
{
    UIView<HMenuGroundViewProtocol> *_menuGroundView;
    HGridView *_gridView;
    UIViewController<HomeCardPageVC> *_feedViewController;
    ACAppManager *_appManager;
    _Bool _viewInAppear;
    _Bool _firstAppear;
    NSArray *_lastApps;
    NSArray *_lastTopApps;
    NSString *_lastTimeLimitAppId;
    double _lastOffset;
    double _zeroInsetValue;
    _Bool _appDataHolded;
    NSString *_festivalSpaceCode;
    long long _festivalViewState;
    CDPSpaceView *_holdedFestivalView;
    CDPSpaceInfo *_festivalSpaceInfo;
    long long _noticeViewState;
    CDPSpaceView *_holdedNoticeView;
    CDPSpaceInfo *_noticeSpaceInfo;
    NSArray *_cachedTopAppList;
    NSArray *_cachedAppList;
    HMoreAppTimeLimitInfo *_cachedMoreAppTimeLimitInfo;
    _Bool _updateMoreMarkWhenAppear;
    _Bool _updateTimeLimitGuideWhenAppear;
    _Bool _isBatchExposureRollback;
    NSString *_lastGridCityCode;
    _Bool _animatingNewHome;
    HActionsPopTipView *_actionPopTipView;
}

@property(nonatomic, getter=isAnimatingNewHome) _Bool animatingNewHome; // @synthesize animatingNewHome=_animatingNewHome;
@property(nonatomic) __weak HActionsPopTipView *actionPopTipView; // @synthesize actionPopTipView=_actionPopTipView;
- (void).cxx_destruct;
- (long long)customStatusBarStytle;
- (id)opaqueNavigationBarColor;
- (_Bool)autohideNavigationBar;
- (void)addAllObservers;
- (_Bool)disableCdpForInternational;
- (void)appCenterNewStyle:(id)arg1;
- (void)internationalSwitchSuccess:(id)arg1;
- (void)timeLimitAppDidClicked:(id)arg1;
- (void)textFontSizeLevelDidChange:(id)arg1;
- (void)doAppDataChangeByUser:(id)arg1;
- (void)doAppDataChanged:(id)arg1;
- (void)doLanguageChanged:(id)arg1;
- (void)doLoginUserChanged:(id)arg1;
- (void)doEnterForeGround:(id)arg1;
- (void)doEnterBackGround:(id)arg1;
- (void)dialogView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)badgeSpaceInfoUpdate:(id)arg1 spaceCode:(id)arg2;
- (void)longPressed:(id)arg1;
- (id)bizMarkForAppModel:(id)arg1;
- (void)reportBizMark;
- (void)promotionDataDidFinishLoading:(id)arg1 spaceCode:(id)arg2;
- (void)dismissFestivalView;
- (void)showFestivalView:(id)arg1;
- (void)dismissNoticeView;
- (void)showNoticeView:(id)arg1;
- (void)promotionViewDidFinishLoading:(id)arg1 spaceCode:(id)arg2;
- (_Bool)promotionViewShouldBeIgnored:(id)arg1;
- (void)clearMoreAppTimeLimitInfoCache:(id)arg1;
- (id)showedTimeLimitAppId;
- (void)resetInset;
- (void)updateMoreBizMark:(_Bool)arg1;
- (_Bool)needHoldChange;
- (id)pageMonitorExtInfo;
- (void)exposureGridView;
- (void)removeAppGuide;
- (void)addAppGuideForAppId:(id)arg1 isSameWithLast:(_Bool)arg2;
- (void)resetAppGuideIfNecessary;
- (void)addAppGuide:(id)arg1;
- (void)mergeRecentAddedToHomeTag:(id)arg1;
- (id)handleTimeLimitWithHomeApps:(id)arg1 timeLimitAppId:(id)arg2;
- (void)refreshApps:(_Bool)arg1 coldLaunch:(_Bool)arg2;
- (void)refreshApps;
- (void)doHoldingChange;
- (void)setupAppsWithCacheAppList:(id)arg1 topAppList:(id)arg2 moreAppTimeLimitInfo:(id)arg3 isHomeNewVersion:(_Bool)arg4;
- (void)cacheAppListWithDataModels:(id)arg1 topAppListWithDataModels:(id)arg2 moreAppTimeLimitInfo:(id)arg3;
- (void)checkCachedAppList:(id)arg1 cachedMoreAppTimeLimitInfo:(id)arg2;
- (void)refreshWhenAppear;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)dismissPopTipView:(id)arg1 appId:(id)arg2;
- (id)showTypeForGridView;
- (void)cellViewDidClicked:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (double)fixContentOffset:(double)arg1 contentInset:(double)arg2;
- (void)doCheckScrollOffset:(_Bool)arg1;
- (void)doCheckScrollOffset;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (_Bool)shouldBeginRefreshAnimation;
- (void)reloadTableView:(id)arg1;
- (void)fixsScrollViewWithAnimated:(_Bool)arg1;
- (void)smileRefreshScrollViewDataSourceDidFinishedLoading;
- (void)tabBarBadgeDidChange:(id)arg1;
- (void)widgetDidStartWithOptions:(id)arg1 fromLaunch:(_Bool)arg2;
- (void)viewWillLayoutSubviews;
- (void)setupFeedViewController;
- (void)viewDidLoad;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
