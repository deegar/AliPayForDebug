//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "HCADBannerDelegate-Protocol.h"

@class CSCard, CSCardDB, CSWorkers, DTRpcAsyncCaller, HCADBannerManager, HCCardFooterWidget, HCElevatorInfo, HCLogReporter, HCRefreshDelegate, HCRpcReqExtMaker, HomeCardMainController, HomeCardRpc, NSArray, NSMutableArray, NSMutableDictionary, NSString, UITableView, membertangramUserRpc;
@protocol HomeCardPageDataTask, OS_dispatch_semaphore;

@interface HomeCardDataCenter : NSObject <HCADBannerDelegate>
{
    HomeCardMainController<HomeCardPageDataTask> *_page;
    HCRefreshDelegate *_refreshDelegate;
    UITableView *_tableView;
    HCCardFooterWidget *_footerWidget;
    HCRpcReqExtMaker *_rpcExtMaker;
    HCLogReporter *_logReporter;
    DTRpcAsyncCaller *_extraCardRpcCaller;
    NSObject<OS_dispatch_semaphore> *_cardlist_semaphore;
    NSObject<OS_dispatch_semaphore> *_hasmore_semaphore;
    NSObject<OS_dispatch_semaphore> *_msg_semaphore;
    NSObject<OS_dispatch_semaphore> *_ad_semaphore;
    NSObject<OS_dispatch_semaphore> *_cardFeeds_semaphore;
    NSObject<OS_dispatch_semaphore> *_templateInfos_semaphore;
    NSObject<OS_dispatch_semaphore> *_allCardFeed_semaphore;
    _Bool _pb_hasMore;
    NSMutableArray *_CardList;
    CSCard *_msg;
    CSCard *_ad;
    CSCard *_unionFeed;
    NSMutableArray *_cardFeeds;
    NSMutableArray *_templateInfos;
    NSMutableDictionary *_allCardFeeds;
    NSArray *_tabInfoList;
    HCElevatorInfo *_elevatorInfo;
    HCADBannerManager *_adManager;
    NSString *_latestExt;
    NSString *_nextExt;
    NSString *_backExt;
    HomeCardRpc *_rpcHandler;
    CSCardDB *_db;
    CSWorkers *_worker;
    NSMutableDictionary *_requestParamDict;
    membertangramUserRpc *_xiaohuarpc;
}

+ (id)datacenter;
@property(retain, nonatomic) membertangramUserRpc *xiaohuarpc; // @synthesize xiaohuarpc=_xiaohuarpc;
@property(retain, nonatomic) NSMutableDictionary *requestParamDict; // @synthesize requestParamDict=_requestParamDict;
@property(retain, nonatomic) CSWorkers *worker; // @synthesize worker=_worker;
@property(retain, nonatomic) CSCardDB *db; // @synthesize db=_db;
@property(retain, nonatomic) HomeCardRpc *rpcHandler; // @synthesize rpcHandler=_rpcHandler;
@property(copy, nonatomic) NSString *backExt; // @synthesize backExt=_backExt;
@property(copy, nonatomic) NSString *nextExt; // @synthesize nextExt=_nextExt;
@property(copy, nonatomic) NSString *latestExt; // @synthesize latestExt=_latestExt;
@property(retain, nonatomic) HCADBannerManager *adManager; // @synthesize adManager=_adManager;
@property(retain, nonatomic) HCElevatorInfo *elevatorInfo; // @synthesize elevatorInfo=_elevatorInfo;
@property(retain, nonatomic) NSArray *tabInfoList; // @synthesize tabInfoList=_tabInfoList;
- (void).cxx_destruct;
- (void)removeCard:(id)arg1 cleadDB:(_Bool)arg2 clearMemory:(_Bool)arg3;
- (void)removeCard:(id)arg1 tabTag:(id)arg2;
- (void)clearCardFeedForTabTag:(id)arg1;
- (id)removeDupCardInList:(id)arg1;
- (id)removeDupTemplateInfoInList:(id)arg1;
- (void)cleanMemoryAndDBThenLoading;
- (void)cleanMemoryThenLoading;
- (void)cleanAndReloadUI:(_Bool)arg1;
- (void)addAsyncTask:(CDUnknownBlockType)arg1 onFinish:(CDUnknownBlockType)arg2;
- (void)addTask:(CDUnknownBlockType)arg1 isLanuch:(_Bool)arg2;
- (void)postHomeCard:(id)arg1 source:(id)arg2 index:(long long)arg3 changeType:(unsigned long long)arg4;
- (id)mergeDataList:(int)arg1;
- (void)bannerManager:(id)arg1 didChangeBannerView:(id)arg2;
- (void)onReceiveMessageBoxInfo:(id)arg1;
- (void)requestloadDb:(id)arg1 onResponse:(CDUnknownBlockType)arg2;
- (void)requestExtraCardRpc:(id)arg1 onResponse:(CDUnknownBlockType)arg2;
- (void)requestloadMoreRpc:(id)arg1 onResponse:(CDUnknownBlockType)arg2;
- (void)requestRefreshRpc:(id)arg1 onResponse:(CDUnknownBlockType)arg2;
- (void)loadDataRequest:(id)arg1 onResponse:(CDUnknownBlockType)arg2;
- (void)callExtraCardRpc:(int)arg1 cardId:(id)arg2;
- (void)callChangeRpc:(int)arg1 params:(id)arg2 changeCard:(id)arg3;
- (void)callloadMoreRpc:(int)arg1 params:(id)arg2;
- (void)sendRpc:(id)arg1 refreshMode:(id)arg2;
- (void)loaddb:(id)arg1 onEnd:(CDUnknownBlockType)arg2;
- (id)loadCachedTabInfoList;
- (void)callRefreshRpc:(int)arg1 params:(id)arg2;
- (void)loadAD:(int)arg1;
- (void)loadMsgBox:(int)arg1;
- (void)buildRpcExtMap:(int)arg1 params:(id)arg2 onFinish:(CDUnknownBlockType)arg3;
- (id)buildrefreshModeWithCallMode:(int)arg1;
- (int)buildRefreshOpWithCallMode:(int)arg1;
- (id)bannerManager;
- (void)setRefreshExtParams:(id)arg1 forTab:(id)arg2;
- (id)getRefreshExtParamsForTab:(id)arg1;
- (_Bool)isLoadingMoreForTab:(id)arg1;
- (void)setIsLoadingMore:(_Bool)arg1 forTab:(id)arg2;
- (_Bool)isRefreshingForTab:(id)arg1;
- (void)setIsRefreshing:(_Bool)arg1 forTab:(id)arg2;
@property(retain, nonatomic) NSMutableArray *templateInfos; // @synthesize templateInfos=_templateInfos;
@property(retain, nonatomic) NSMutableArray *cardFeeds; // @synthesize cardFeeds=_cardFeeds;
@property(retain, nonatomic) CSCard *unionFeed; // @synthesize unionFeed=_unionFeed;
@property(retain, nonatomic) CSCard *ad; // @synthesize ad=_ad;
@property(retain, nonatomic) CSCard *msg; // @synthesize msg=_msg;
@property(nonatomic) _Bool pb_hasMore; // @synthesize pb_hasMore=_pb_hasMore;
@property(retain, nonatomic) NSMutableArray *CardList; // @synthesize CardList=_CardList;
@property(retain, nonatomic) NSMutableDictionary *allCardFeeds; // @synthesize allCardFeeds=_allCardFeeds;
- (id)init;
- (void)setLogReporter:(id)arg1;
- (void)setFooterWidget:(id)arg1;
- (void)setTableView:(id)arg1;
- (void)setRefreshDelegate:(id)arg1;
- (void)setDataChangeTaskPage:(id)arg1;
- (void)setRpcExtMaker:(id)arg1;
- (void)onPageDidDisappear;
- (void)onPageDidAppear;
- (void)recordOrRefreshUserTag;
- (void)closeNewbieTagThenRefresh:(CDUnknownBlockType)arg1;
- (void)closeNewbieTag:(CDUnknownBlockType)arg1;
- (void)showDialogWithInfo:(id)arg1;
- (void)callRefreshRpcAndLoading:(int)arg1 params:(id)arg2;
- (id)remakeChangeCard:(id)arg1 withLoading:(_Bool)arg2 forTabTag:(id)arg3;
- (long long)numberOfCardsInContentType:(id)arg1 forTabTag:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

