//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CCardBaseViewController.h"

#import "AURefreshViewDelegate-Protocol.h"
#import "CBFeedsListLoadErroViewDelegate-Protocol.h"
#import "CBResendRemindManagerDelegate-Protocol.h"
#import "NTLCardEmptyViewDelegate-Protocol.h"
#import "NTLHeadViewDelegate-Protocol.h"
#import "NTLPopMenuRouteManagerDelegate-Protocol.h"
#import "SocialRemindHeadViewDelegate-Protocol.h"

@class AURefreshView, CBCardMonitor, CBFeedsListLoadErroView, CCUglyClickChecker, CSPublishFeed, CSTableViewDelegate, CardSDK, NSDate, NSString, NTLCardEmptyView, NTLCardLoadingView, NTLDataManager, NTLDeleteEmptyView, NTLHeadView, NTLPopMenuRouteManager;

@interface NTLFeedsCardViewController : CCardBaseViewController <SocialRemindHeadViewDelegate, NTLPopMenuRouteManagerDelegate, CBResendRemindManagerDelegate, CBFeedsListLoadErroViewDelegate, NTLHeadViewDelegate, NTLCardEmptyViewDelegate, AURefreshViewDelegate>
{
    CSTableViewDelegate *_tproxy;
    _Bool _viewInAppear;
    _Bool _dataDirty;
    _Bool _hasBackupCards;
    _Bool _canDelayRefresh;
    _Bool _isRefreshing;
    _Bool _hasRefreshed;
    _Bool _firstLauch;
    CardSDK *_cardsdk;
    NTLPopMenuRouteManager *_popMenuRouteManager;
    NSDate *_lastUpdateDate;
    NTLHeadView *_tableHeadView;
    NSDate *_lastCacheDate;
    NSString *_mode;
    NTLDataManager *_cardDataManager;
    CBFeedsListLoadErroView *_loadErroView;
    NTLCardEmptyView *_emptyView;
    NTLDeleteEmptyView *_deleteEmptyView;
    NTLCardLoadingView *_cardLoadingView;
    CSPublishFeed *_publishFeedActionSheet;
    CBCardMonitor *_cardMonitor;
    CCUglyClickChecker *_clickChecker;
    AURefreshView *_auRefreshView;
}

+ (void)ntlFeedCardVCDealloc;
+ (id)shareNTLFeedCardVC;
@property(retain, nonatomic) AURefreshView *auRefreshView; // @synthesize auRefreshView=_auRefreshView;
@property(retain, nonatomic) CCUglyClickChecker *clickChecker; // @synthesize clickChecker=_clickChecker;
@property(nonatomic) _Bool firstLauch; // @synthesize firstLauch=_firstLauch;
@property(nonatomic) _Bool hasRefreshed; // @synthesize hasRefreshed=_hasRefreshed;
@property(retain, nonatomic) CBCardMonitor *cardMonitor; // @synthesize cardMonitor=_cardMonitor;
@property(retain, nonatomic) CSPublishFeed *publishFeedActionSheet; // @synthesize publishFeedActionSheet=_publishFeedActionSheet;
@property(retain, nonatomic) NTLCardLoadingView *cardLoadingView; // @synthesize cardLoadingView=_cardLoadingView;
@property(retain, nonatomic) NTLDeleteEmptyView *deleteEmptyView; // @synthesize deleteEmptyView=_deleteEmptyView;
@property(retain, nonatomic) NTLCardEmptyView *emptyView; // @synthesize emptyView=_emptyView;
@property(retain, nonatomic) CBFeedsListLoadErroView *loadErroView; // @synthesize loadErroView=_loadErroView;
@property(nonatomic) _Bool isRefreshing; // @synthesize isRefreshing=_isRefreshing;
@property(retain, nonatomic) NTLDataManager *cardDataManager; // @synthesize cardDataManager=_cardDataManager;
@property(copy, nonatomic) NSString *mode; // @synthesize mode=_mode;
@property(retain, nonatomic) NSDate *lastCacheDate; // @synthesize lastCacheDate=_lastCacheDate;
@property(retain, nonatomic) NTLHeadView *tableHeadView; // @synthesize tableHeadView=_tableHeadView;
@property(nonatomic) _Bool canDelayRefresh; // @synthesize canDelayRefresh=_canDelayRefresh;
@property(nonatomic) _Bool hasBackupCards; // @synthesize hasBackupCards=_hasBackupCards;
@property(nonatomic) _Bool dataDirty; // @synthesize dataDirty=_dataDirty;
@property(nonatomic) _Bool viewInAppear; // @synthesize viewInAppear=_viewInAppear;
@property(retain, nonatomic) NSDate *lastUpdateDate; // @synthesize lastUpdateDate=_lastUpdateDate;
@property(retain, nonatomic) NTLPopMenuRouteManager *popMenuRouteManager; // @synthesize popMenuRouteManager=_popMenuRouteManager;
@property(retain, nonatomic) CardSDK *cardsdk; // @synthesize cardsdk=_cardsdk;
- (void).cxx_destruct;
- (id)prepareCardList:(id)arg1;
- (_Bool)shouldReportABTestAction;
- (void)ntlCardEmptyViewPublishButtonClicked;
- (void)updateManager:(id)arg1 finishUpdateCards:(id)arg2 param:(id)arg3;
- (void)updateManager:(id)arg1 updatingCard:(id)arg2 param:(id)arg3;
- (_Bool)enableCardUpdateManager;
- (void)accessibilityDidClickPopMenu:(id)arg1;
- (void)popMenuRouteManager:(id)arg1 deleteDBAndUICardsWithClientIds:(id)arg2;
- (void)respondClick:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidScrollToTop:(id)arg1;
- (_Bool)scrollViewShouldScrollToTop:(id)arg1;
- (void)auRefreshViewDidTriggerloading:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)didChangeFrame:(struct CGRect)arg1 originFrame:(struct CGRect)arg2;
- (void)sendFailedCardCountChanged;
- (void)resendRemindViewDidClean;
- (void)resendRemindViewDidRetry;
- (void)retryRefreshCard;
- (void)btnSendTouchHandler:(id)arg1;
- (void)showDelete2LoadMoreView;
- (void)showRetryView;
- (void)showLoadMore;
- (void)addCardLoadingView;
- (void)addDeleteEmptyView;
- (void)addLoadErroView;
- (void)addEmptyView;
- (_Bool)checkAutoRefresh;
- (void)showActionSheetWithBiz:(id)arg1;
- (void)loadLocalMockData;
- (void)deleteCardsWithClientIds:(id)arg1;
- (void)deleteDBAndUICardsWithClientIds:(id)arg1;
- (void)updateSendFailWithFailCount:(long long)arg1;
- (void)checkAndChangeDisplayView:(id)arg1 isSuccessful:(_Bool)arg2 isSync:(_Bool)arg3 callback:(CDUnknownBlockType)arg4;
- (void)refreshLoadMoreView;
- (void)handleLoadMoreFinished:(id)arg1;
- (void)loadMoreCard;
- (void)refreshNTimeLineFeedsFromNetwork;
- (void)handleInitLocalCardData:(id)arg1 sync:(_Bool)arg2 callback:(CDUnknownBlockType)arg3;
- (id)getLastCardIdInCardList:(id)arg1;
- (void)initLocalCardDataWithSync:(_Bool)arg1 callback:(CDUnknownBlockType)arg2;
- (void)refreshTimeStamp;
- (void)resetResourceUI;
- (void)showEmptyView;
- (void)showLoadingView:(_Bool)arg1;
- (void)handleUserInfoChangeRefresh;
- (void)refreshSendingWithClientCardId:(id)arg1;
- (void)goToRemindList;
- (void)setTableViewContentOffset:(id)arg1 source:(id)arg2;
- (void)setTableViewContentInset:(id)arg1 source:(id)arg2;
- (void)updateWithCCards:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)updateTitle;
- (void)updateSendFail;
- (void)handleDataRefreshWithSync:(_Bool)arg1;
- (void)loadCardData:(id)arg1 loadType:(int)arg2 insertIndex:(long long)arg3 sync:(_Bool)arg4 callback:(CDUnknownBlockType)arg5;
- (_Bool)handleNativeEvent:(id)arg1 target:(id)arg2;
- (id)processLinkData:(id)arg1 originData:(id)arg2;
- (void)onClickMFLongAttributeLabel:(id)arg1 state:(int)arg2;
- (void)onClickMFLongAttributeLabel:(id)arg1 state:(int)arg2 card:(id)arg3 indexPath:(id)arg4;
- (void)checkLoadMoreCard;
- (void)dealloc;
- (void)setupUI;
- (void)viewDidLoad;
- (id)init;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadCardTemplates;
- (id)pageType;
- (id)logBizs;
- (void)whenLoadWidgets;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

