//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CBViewController.h"

#import "AURefreshViewDelegate-Protocol.h"
#import "CBDataManagerObserver-Protocol.h"
#import "DTNavigationBarAppearanceProtocol-Protocol.h"
#import "HCElevatorViewDelegate-Protocol.h"
#import "HCHCLoadErroViewDelegate-Protocol.h"
#import "HCHeadViewDelegate-Protocol.h"
#import "HomeCardPageVC-Protocol.h"
#import "PromotionViewControllerDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"

@class CCUglyClickChecker, HCCardLoadingView, HCCardMonitor, HCElevatorView, HCHeadView, HCHomeEventHandler, HCRecView, NSDictionary, NSString, UITableView, UITableViewCell, UIView;
@protocol RemindInfoChangeDelegate, UIScrollViewDelegate;

@interface HCHomeCardViewController : CBViewController <DTNavigationBarAppearanceProtocol, AURefreshViewDelegate, CBDataManagerObserver, HCHCLoadErroViewDelegate, HCHeadViewDelegate, UITableViewDataSource, HCElevatorViewDelegate, PromotionViewControllerDelegate, HomeCardPageVC>
{
    struct CGPoint _originOffsetPoint;
    struct UIEdgeInsets _originEdgeInset;
    HCCardLoadingView *_loadingView;
    unsigned long long _bgTask;
    NSString *_lastRecSlogon;
    _Bool _REMOVE_CONFIG_PIC_TIMEOUT_FINISH;
    NSDictionary *_homeLanuchPicConfig;
    _Bool _isSettingTableViewBgColor;
    _Bool _isPlacePicShowned;
    _Bool _hc_lanuchPic;
    _Bool _SETUP_FINISH_END;
    _Bool _SNAP_IMAGEWITHDATA_ASYNC_PRELOAD_END;
    _Bool _isShowingPlaceHolderPic;
    _Bool _shouldRemovePicAfterScrolling;
    _Bool _loadingOnRegionChanged;
    HCCardMonitor *_logMonitor;
    id <RemindInfoChangeDelegate> _remindInfoDelegate;
    id <UIScrollViewDelegate> _scrollDelegate;
    HCHeadView *_musicHeaderView;
    UIView *_spaceHeaderView;
    NSDictionary *_templateSpaceDict;
    CCUglyClickChecker *_clickChecker;
    HCHomeEventHandler *_homeEventHandler;
    HCRecView *_keywordRecView;
    UIView *_placeHolderImageView;
    UITableViewCell *_placeHolderCell;
    HCElevatorView *_elevatorView;
}

+ (id)getSingleCardPage;
@property(nonatomic) _Bool loadingOnRegionChanged; // @synthesize loadingOnRegionChanged=_loadingOnRegionChanged;
@property(retain, nonatomic) HCElevatorView *elevatorView; // @synthesize elevatorView=_elevatorView;
@property(nonatomic) _Bool shouldRemovePicAfterScrolling; // @synthesize shouldRemovePicAfterScrolling=_shouldRemovePicAfterScrolling;
@property(retain, nonatomic) UITableViewCell *placeHolderCell; // @synthesize placeHolderCell=_placeHolderCell;
@property(retain, nonatomic) UIView *placeHolderImageView; // @synthesize placeHolderImageView=_placeHolderImageView;
@property(nonatomic) _Bool isShowingPlaceHolderPic; // @synthesize isShowingPlaceHolderPic=_isShowingPlaceHolderPic;
@property(retain, nonatomic) HCRecView *keywordRecView; // @synthesize keywordRecView=_keywordRecView;
@property(retain, nonatomic) HCHomeEventHandler *homeEventHandler; // @synthesize homeEventHandler=_homeEventHandler;
@property(retain, nonatomic) CCUglyClickChecker *clickChecker; // @synthesize clickChecker=_clickChecker;
@property(copy, nonatomic) NSDictionary *templateSpaceDict; // @synthesize templateSpaceDict=_templateSpaceDict;
@property(retain, nonatomic) UIView *spaceHeaderView; // @synthesize spaceHeaderView=_spaceHeaderView;
@property(retain, nonatomic) HCHeadView *musicHeaderView; // @synthesize musicHeaderView=_musicHeaderView;
@property(nonatomic) __weak id <UIScrollViewDelegate> scrollDelegate; // @synthesize scrollDelegate=_scrollDelegate;
@property(nonatomic) __weak id <RemindInfoChangeDelegate> remindInfoDelegate; // @synthesize remindInfoDelegate=_remindInfoDelegate;
@property(retain, nonatomic) HCCardMonitor *logMonitor; // @synthesize logMonitor=_logMonitor;
- (void).cxx_destruct;
- (void)didHomeHeightChange:(double)arg1 source:(id)arg2;
- (void)setHomeContentOffset:(id)arg1 source:(id)arg2;
- (void)whenLoadWidgets;
- (void)performanceLogOnFirstLaunch:(_Bool)arg1;
- (id)loadingViewWithType:(unsigned long long)arg1;
- (id)loadMoreView;
- (id)emptyView;
- (id)errorView;
- (id)homeDataManager;
- (id)dataManager;
- (long long)autoRefeshDuration;
- (void)kAPCommonConfigChanged:(id)arg1;
- (void)resetRefreshView;
- (id)configRefreshView;
- (id)readHomeCardSnapConfig:(id)arg1;
- (id)HomeCardSnapFilePath:(id)arg1;
- (id)HomeCardSnapConfigFilePath:(id)arg1;
- (void)cubeBizLanguageSettingDidChangeNotification:(id)arg1;
- (void)cubeBizApplicationDidEnterBackgroundNotification:(id)arg1;
- (void)endBgTask;
- (_Bool)beginBgTask;
- (void)cubeBizApplicationDidBecomeActiveNotification:(id)arg1;
- (long long)customStatusBarStytle;
- (_Bool)autohideNavigationBar;
- (void)didChangeFrame:(struct CGRect)arg1 originFrame:(struct CGRect)arg2;
- (void)handleMFWidgetEvent:(id)arg1;
- (void)cubeBizAccountDidExitNotification:(id)arg1;
- (void)cubeBizLoginControllerDidFinishNotification:(id)arg1;
- (void)updateHCLbsCache:(id)arg1;
- (_Bool)isHCLbsInfoChanged:(id)arg1;
- (void)lbsChangedListener:(id)arg1;
- (void)tabBarDidDoubleClick:(id)arg1;
- (void)setHomeAppMenuHeight:(double)arg1;
- (void)setHomeAppPageId:(id)arg1;
- (void)setFontAdaptive:(_Bool)arg1;
- (_Bool)isSafeChangeContentInset;
- (void)setTableViewContentOffset:(id)arg1 source:(id)arg2;
- (void)setTableViewContentInset:(id)arg1 source:(id)arg2;
- (void)homeDidStartWithOptions:(id)arg1 fromLaunch:(_Bool)arg2;
- (void)elevatorViewTouched:(id)arg1;
- (_Bool)canShowCDPBannerAttachView;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)retryRefreshCard;
- (void)accessibilityDidClickPopMenu:(id)arg1;
- (void)ontapPlacePic:(id)arg1;
- (void)snapshotView;
- (_Bool)ifneedsnap;
- (void)clearHomeCardSnap;
- (_Bool)ifneedShowSnap;
- (void)removePlacHolderPicture;
- (void)showPlaceHolderPicture;
- (void)setup;
- (void)setTableViewBackgroundColor;
- (void)regionDidChange:(id)arg1;
- (void)fontLevelDidChange:(id)arg1;
- (_Bool)elevatorViewScrollAnimated;
- (void)doKeywordRecInfo;
- (void)endPerformanceLog;
- (void)refreshHeaderView;
- (void)refreshFooterViewStyle;
- (void)afterFetchIndexRpcCallerBack;
- (void)dataManager:(id)arg1 loadDataError:(id)arg2 errorFrom:(id)arg3;
- (void)dataChangedWithType:(unsigned long long)arg1 atIndex:(long long)arg2 changeFrom:(id)arg3;
- (void)didTriggerRefresh:(_Bool)arg1;
- (void)refreshAnimationDidFinished;
- (void)refreshElevatorView;
- (void)refreshTableFooter;
- (void)showRefreshView:(_Bool)arg1;
- (void)showPlaceHolderDataRequest:(id)arg1 onRpcCallBack:(CDUnknownBlockType)arg2;
- (void)reloadTableViewData;
- (void)loadCardList:(id)arg1 loadType:(long long)arg2 insertIndex:(long long)arg3 sync:(_Bool)arg4 footer:(id)arg5 callback:(CDUnknownBlockType)arg6;
- (void)didTriggerLoadMore;
- (void)toggleHideCard:(id)arg1;
- (id)cellBackgroundColor;
- (_Bool)handleNativeEvent:(id)arg1 target:(id)arg2;
- (void)onHomeCardPageAppear:(_Bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)readConfigValue;
- (void)listenConfigValue;
- (void)viewDidLoad;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly) UITableView *tableView;

@end

