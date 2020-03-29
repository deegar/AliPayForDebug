//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTViewController.h"

#import "ALTDataManagerDelegate-Protocol.h"
#import "APCustomNavigationBarProtocol-Protocol.h"
#import "FHTemplateClickDelegate-Protocol.h"
#import "FHTemplateDataDelegate-Protocol.h"
#import "FHTemplateHeaderAssetDataDelegate-Protocol.h"

@class ALTDataManager, AUPopBar, AURefreshView, FHFloatTipView, FHHomeViewDataSource, FHHomeViewDelegate, FHNavigationView, FHScrollWidget, FHTableView, FHTemplateDataProvider, FortuneHomeNavItemView, NSArray, NSDictionary, NSOperationQueue, NSString, UILabel, UIView, UIViewController;
@protocol AFHAssetHeaderViewDelegate;

@interface FHRootViewController : DTViewController <FHTemplateClickDelegate, FHTemplateDataDelegate, FHTemplateHeaderAssetDataDelegate, ALTDataManagerDelegate, APCustomNavigationBarProtocol>
{
    NSOperationQueue *_queue;
    FortuneHomeNavItemView *_rightBarButton;
    NSString *_templetType;
    NSString *_templateAbtest;
    AURefreshView *_pullDownLoadingView;
    UIView<AFHAssetHeaderViewDelegate> *_headerView;
    NSString *_toastToPresent;
    _Bool _scrollToTop;
    _Bool _invokeDataRpc;
    NSDictionary *_jumpInParams;
    NSArray *_lastCards;
    _Bool _fortuneHomeStartupOptimizeSwitch;
    _Bool _isLaunchFinished;
    _Bool _isServiceStarted;
    _Bool _reloadDataHold;
    _Bool _customNavigationViewRollBack;
    AUPopBar *_upgradeGuideBar;
    UILabel *_welcomeTipBar;
    double _firstAlertSDKStartTime;
    FHFloatTipView *_downScrollTipView;
    FHFloatTipView *_fullScreenTipView;
    _Bool _didScroll;
    FHScrollWidget *_scrollWidget;
    NSString *_toptTagFromLauncher;
    UIViewController *_container;
    FHHomeViewDataSource *_homeDataSource;
    FHHomeViewDelegate *_homeDelegate;
    FHTemplateDataProvider *_dataProvider;
    FHTableView *_tableView;
    FHNavigationView *_customNavigationView;
    NSArray *_serviceArray;
    ALTDataManager *_dataManager;
}

@property(retain, nonatomic) ALTDataManager *dataManager; // @synthesize dataManager=_dataManager;
@property(retain, nonatomic) NSArray *serviceArray; // @synthesize serviceArray=_serviceArray;
@property(retain, nonatomic) FHNavigationView *customNavigationView; // @synthesize customNavigationView=_customNavigationView;
@property(retain, nonatomic) FHTableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) FHTemplateDataProvider *dataProvider; // @synthesize dataProvider=_dataProvider;
@property(retain, nonatomic) FHHomeViewDelegate *homeDelegate; // @synthesize homeDelegate=_homeDelegate;
@property(retain, nonatomic) FHHomeViewDataSource *homeDataSource; // @synthesize homeDataSource=_homeDataSource;
@property(nonatomic) __weak UIViewController *container; // @synthesize container=_container;
- (void).cxx_destruct;
- (void)homeViewWillBeginDragging:(id)arg1;
- (void)showDownScrollTip;
- (void)hideUpgradeWelcomeTip;
- (void)showUpgradeWelcomeTip;
- (void)sendRPCForRookieUpgrade;
- (void)showRookieUpgradeBar;
- (void)startFortuneHomeServiceIfNeeded;
- (void)markPipeLineDidBecomeToStart:(id)arg1;
- (void)pipeLineDidBecomeToStart:(id)arg1;
- (void)loginDidFinished:(id)arg1;
- (id)subControllerNeedToExecutingTopView;
- (void)tabBarDidDoubleClicked:(id)arg1;
- (void)languageSettingDidChanged:(id)arg1;
- (id)promotionContainer;
- (id)promotionBizInfo;
- (void)didJumpInTab:(id)arg1;
- (void)updateAssetCardCategory:(id)arg1;
- (id)bee_contentView;
- (void)dealloc;
- (void)appearedFromGesture:(id)arg1;
- (void)refresh;
- (void)enterBackground;
- (void)enterForeground;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)showFullScreenFLoatTip;
- (void)scrollToCard:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)birdnestJsException:(id)arg1;
- (void)tabRedpointDidTaped:(id)arg1;
- (void)consumeRedpoint:(id)arg1 each:(CDUnknownBlockType)arg2;
- (void)tabRedpointDidChanged:(id)arg1;
- (void)showRedPointOnTabWithData:(id)arg1 extInfo:(id)arg2;
- (void)setTabBarValue:(id)arg1;
- (void)markTabClicked:(id)arg1;
- (_Bool)isTabClickedBefore:(id)arg1;
- (void)didReciveTabInfoUpdated:(id)arg1;
- (_Bool)viewControllerIsShowing;
- (void)setupNavigationStyle;
- (void)auRefreshViewDidFinishAnimation:(id)arg1;
- (void)auRefreshViewDidTriggerloading:(id)arg1;
- (void)loadPullDown;
- (void)setEdgesForExtendedLayout:(unsigned long long)arg1;
- (id)init;
- (void)assetViewDidFinishLoading:(id)arg1;
- (void)didFinishLoadSpaceView:(id)arg1 sectionNumber:(unsigned long long)arg2;
- (void)dataProviderDidFinishLoading;
- (void)tableViewCellEvaluateExposure:(id)arg1;
- (void)tableViewEvaluateExposureViewAppeared;
- (void)tableViewEvaluateExposure;
- (void)cardNeedsUpdate:(id)arg1;
- (void)workbenchNeedsUpdate:(id)arg1;
- (void)reportExposure;
- (void)reportClick:(id)arg1;
- (void)reloadTableForCardsReady;
- (void)firstCardInSecondScreenDidExposured:(id)arg1;
- (void)contentView:(id)arg1 didClickedFollowAction:(id)arg2 log:(id)arg3 extInfo:(id)arg4;
- (id)rightBarButton;
- (id)appIdNeedExecutingTopView;
- (_Bool)autohideNavigationBar;
- (id)rightCustomNavigationBarButtonItem;
- (unsigned long long)refreshType:(id)arg1;
- (unsigned long long)refreshScene:(id)arg1;
- (id)dataManager:(id)arg1 visibleCardTypeIdsWithContext:(id)arg2;
- (void)dataManager:(id)arg1 didReceiveSyncPayloads:(id)arg2 context:(id)arg3;
- (void)dataManager:(id)arg1 didTriggerEvent:(unsigned long long)arg2 context:(id)arg3;
- (void)dataManager:(id)arg1 didCompleteTask:(unsigned long long)arg2 error:(id)arg3 context:(id)arg4;
- (void)dataManager:(id)arg1 didChangeCards:(id)arg2 ext:(id)arg3 atIndexPaths:(id)arg4 forChangeType:(unsigned long long)arg5 fromTask:(unsigned long long)arg6 context:(id)arg7;
- (CDUnknownBlockType)findChangeType:(id)arg1;
- (_Bool)dataManager:(id)arg1 shouldSendRequest:(id)arg2 context:(id)arg3;
- (id)dataManager:(id)arg1 responseFromRequest:(id)arg2 operationType:(id)arg3 async:(_Bool)arg4 context:(id)arg5;
- (void)dataManager:(id)arg1 didReceiveResponse:(id)arg2 request:(id)arg3 context:(id)arg4;
- (id)dataManager:(id)arg1 responseFromRequest:(id)arg2 context:(id)arg3;
- (void)createRPCRequest:(id)arg1 containerId:(id)arg2 ext:(id)arg3 callBack:(CDUnknownBlockType)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

