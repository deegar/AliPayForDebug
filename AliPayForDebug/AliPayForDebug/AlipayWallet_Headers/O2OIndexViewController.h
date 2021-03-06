//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "O2OListViewController.h"

#import "APCustomNavigationBarProtocol-Protocol.h"
#import "MYPromotionDisplayControllerProtocol-Protocol.h"
#import "O2OCDPAdapterPromotionProtocol-Protocol.h"
#import "O2OCommonIndexLocationViewDelegate-Protocol.h"
#import "O2OIndexCacheDelegate-Protocol.h"
#import "O2OIndexInvalidCityViewDelegate-Protocol.h"
#import "O2OSyncManagerDelegate-Protocol.h"

@class AUNavItemView, AUNetErrorView, NSArray, NSDictionary, NSMutableArray, NSString, O2OCommentProtocolHelper, O2OCommonIndexLocationView, O2OIndexDataSource, O2OIndexDelegate, O2OIndexInvalidCityView, O2OIndexListItem, O2OIndexModel, O2OIndexRefreshControl, O2OIndexShopListModel, O2OLocationCityInfo, O2OModelManager, O2ONaviBarCenterView, O2ONaviBarMyIconView, O2ONaviOrderView, UIActivityIndicatorView, UIButton, UIColor, UITableView;

@interface O2OIndexViewController : O2OListViewController <O2OCDPAdapterPromotionProtocol, O2OCommonIndexLocationViewDelegate, O2OIndexInvalidCityViewDelegate, O2OIndexCacheDelegate, APCustomNavigationBarProtocol, O2OSyncManagerDelegate, MYPromotionDisplayControllerProtocol>
{
    long long _refreshOnceToken;
    _Bool _needLogForCache;
    NSString *_redPointMemo;
    NSString *_redPointParam;
    CDUnknownBlockType _cacheCompletion;
    UIColor *_envColor;
    NSDictionary *_tools;
    NSArray *_hotwords;
    NSString *_pageVersion;
    O2OIndexListItem *_categoryItem;
    _Bool _isTravel;
    _Bool _isSubTableScroll;
    _Bool _isLiftClicked;
    _Bool _canAutoSwitch;
    _Bool _needRefresh;
    _Bool _needGotoCityList;
    _Bool _personalConfig;
    _Bool _hasCacheData;
    UITableView *_tableView;
    O2OIndexRefreshControl *_refreshControl;
    long long _asyncSwitch;
    unsigned long long _style;
    O2OIndexModel *_indexModel;
    NSString *_channelSpaceCode;
    NSMutableArray *_channelIds;
    AUNetErrorView *_netErrorView;
    AUNetErrorView *_netLimitView;
    AUNetErrorView *_emptyErrorView;
    O2OCommonIndexLocationView *_locationView;
    O2OCommentProtocolHelper *_protocolHelper;
    O2OIndexInvalidCityView *_invalidCityView;
    UIActivityIndicatorView *_indicatorView;
    UIButton *_travelSwitchButton;
    O2OIndexDelegate *_dl;
    O2OIndexDataSource *_ds;
    O2OLocationCityInfo *_nearbyInfo;
    O2OIndexShopListModel *_shopModel;
    O2OModelManager *_modelManager;
    O2ONaviBarMyIconView *_me;
    O2ONaviOrderView *_checkInItemView;
    AUNavItemView *_selectCity;
    O2ONaviBarCenterView *_middleTitleView;
    NSMutableArray *_templateControllerProviders;
    NSString *_bucketId;
}

+ (id)getPassInfo:(id)arg1;
+ (_Bool)isNG:(id)arg1;
@property(retain, nonatomic) NSString *bucketId; // @synthesize bucketId=_bucketId;
@property(retain, nonatomic) NSMutableArray *templateControllerProviders; // @synthesize templateControllerProviders=_templateControllerProviders;
@property(retain, nonatomic) O2ONaviBarCenterView *middleTitleView; // @synthesize middleTitleView=_middleTitleView;
@property(retain, nonatomic) AUNavItemView *selectCity; // @synthesize selectCity=_selectCity;
@property(retain, nonatomic) O2ONaviOrderView *checkInItemView; // @synthesize checkInItemView=_checkInItemView;
@property(retain, nonatomic) O2ONaviBarMyIconView *me; // @synthesize me=_me;
@property(nonatomic) _Bool hasCacheData; // @synthesize hasCacheData=_hasCacheData;
@property(retain, nonatomic) O2OModelManager *modelManager; // @synthesize modelManager=_modelManager;
@property(retain, nonatomic) O2OIndexShopListModel *shopModel; // @synthesize shopModel=_shopModel;
@property(retain, nonatomic) O2OLocationCityInfo *nearbyInfo; // @synthesize nearbyInfo=_nearbyInfo;
@property(retain, nonatomic) O2OIndexDataSource *ds; // @synthesize ds=_ds;
@property(retain, nonatomic) O2OIndexDelegate *dl; // @synthesize dl=_dl;
@property(retain, nonatomic) UIButton *travelSwitchButton; // @synthesize travelSwitchButton=_travelSwitchButton;
@property(retain, nonatomic) UIActivityIndicatorView *indicatorView; // @synthesize indicatorView=_indicatorView;
@property(retain, nonatomic) O2OIndexInvalidCityView *invalidCityView; // @synthesize invalidCityView=_invalidCityView;
@property(retain, nonatomic) O2OCommentProtocolHelper *protocolHelper; // @synthesize protocolHelper=_protocolHelper;
@property(retain, nonatomic) O2OCommonIndexLocationView *locationView; // @synthesize locationView=_locationView;
@property(retain, nonatomic) AUNetErrorView *emptyErrorView; // @synthesize emptyErrorView=_emptyErrorView;
@property(retain, nonatomic) AUNetErrorView *netLimitView; // @synthesize netLimitView=_netLimitView;
@property(retain, nonatomic) AUNetErrorView *netErrorView; // @synthesize netErrorView=_netErrorView;
@property(nonatomic) _Bool personalConfig; // @synthesize personalConfig=_personalConfig;
@property(nonatomic) _Bool needGotoCityList; // @synthesize needGotoCityList=_needGotoCityList;
@property(nonatomic) _Bool needRefresh; // @synthesize needRefresh=_needRefresh;
@property(nonatomic) _Bool canAutoSwitch; // @synthesize canAutoSwitch=_canAutoSwitch;
@property(retain, nonatomic) NSMutableArray *channelIds; // @synthesize channelIds=_channelIds;
@property(nonatomic) _Bool isLiftClicked; // @synthesize isLiftClicked=_isLiftClicked;
@property(retain, nonatomic) NSString *channelSpaceCode; // @synthesize channelSpaceCode=_channelSpaceCode;
@property(nonatomic) _Bool isSubTableScroll; // @synthesize isSubTableScroll=_isSubTableScroll;
@property(retain, nonatomic) O2OIndexModel *indexModel; // @synthesize indexModel=_indexModel;
@property(nonatomic) unsigned long long style; // @synthesize style=_style;
@property(nonatomic) _Bool isTravel; // @synthesize isTravel=_isTravel;
@property(nonatomic) long long asyncSwitch; // @synthesize asyncSwitch=_asyncSwitch;
@property(retain, nonatomic) O2OIndexRefreshControl *refreshControl; // @synthesize refreshControl=_refreshControl;
- (void)setTableView:(id)arg1;
- (void).cxx_destruct;
- (void)scrollToYouMayLike;
- (void)syncEnd;
- (void)syncStart;
- (void)syncMessage:(id)arg1 syncCode:(id)arg2;
- (void)indexPageMonitorEnd;
- (void)indexPageMonitorStart;
- (id)pageSPMParams;
- (void)gotoCitiesList;
- (void)saveSelectedCityInfo:(id)arg1;
- (void)gotoNearby;
- (void)buttonDidPressedWithState:(unsigned long long)arg1;
- (void)refreshAndSelectCity:(id)arg1;
- (void)didSelectCity:(id)arg1;
- (void)pullToRefresh;
- (void)renderWithModel:(id)arg1;
- (void)showLoading:(id)arg1;
- (void)stopLoadingAnimation;
- (void)updateTitleView;
- (void)showModel:(id)arg1;
- (void)updatePageStyle;
- (void)updateStyleProperty:(id)arg1;
- (id)navigationBar;
- (void)updateRefreshControl;
- (void)updatePageAtmosphere;
- (void)updateRefreshConfig:(id)arg1;
- (void)checkCacheCompletion;
- (void)removeErrorViews;
- (_Bool)canShowModel:(id)arg1;
- (void)showError:(id)arg1 withModel:(id)arg2;
- (void)showEmpty:(id)arg1;
- (_Bool)hasLocationGuideShowing;
- (void)checkAndShowLocationGuide;
- (void)load;
- (id)cityForLoad;
- (void)loadCategoryData;
- (void)preloadCategory;
- (_Bool)loadCacheDataWithCompletion:(CDUnknownBlockType)arg1;
- (id)dataFromCache;
- (void)setCityLabelWithCityName:(id)arg1;
- (_Bool)useClientReverse;
- (void)startLocating;
- (void)refreshNeedLocation:(_Bool)arg1;
- (void)updateNavibarCity:(id)arg1;
- (void)updateCanAutoSwitch;
- (void)travelSwitchDidTap;
- (id)getColorFrom:(id)arg1 to:(id)arg2 percent:(double)arg3;
- (void)updateNavigationBarProgressForced:(_Bool)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewEndScroll:(id)arg1;
- (void)scrollViewStartScroll:(id)arg1;
- (void)removeTemplateControllerProvider:(id)arg1;
- (void)addTemplateControllerProvider:(id)arg1;
- (id)footerViewNormal;
- (double)tabContentHeight;
- (double)contentBottom;
- (double)contentTop;
- (_Bool)hasListCacheData;
- (void)stopTravelSwitchLoading;
- (void)startTravelSwitchLoading;
- (void)showTravelSwitchButton:(_Bool)arg1;
- (void)hideTravelSwitchButton;
- (id)tableView;
- (_Bool)shouldShowMask;
- (void)hideMaskView;
- (void)showMaskIfNeed;
- (void)doubleTapMerchantTab:(id)arg1;
- (void)applicationDidEnterBackground;
- (void)applicationDidBecomeActive;
- (void)userDidLogin:(id)arg1;
- (void)resetViewsAndCaches;
- (void)needRefreshWhenAppear;
- (void)dealloc;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)enableSelectCity;
- (void)disableSelectCity;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)checkCDPMask;
- (void)cancleTabBarRedPoint;
- (_Bool)personalConfigStateChanged;
- (void)viewDidAppear:(_Bool)arg1;
- (void)addPageMonitorObserver;
- (void)viewDidLoad;
- (void)preloadView;
- (void)homeSelectedCityChanged:(id)arg1;
- (void)setOptions:(id)arg1;
- (void)reloadWithPageName:(id)arg1;
- (id)init;
- (void)promotionEnd;
- (void)promotionStart;
- (void)promotionControllerDidDismiss:(id)arg1;
- (void)promotionControllerDidShow:(id)arg1;
- (id)maya_webControllerLaunchOptions;
- (_Bool)maya_adpat_autoShowPromotion;
- (void)showLoadMoreFooterView;
- (id)rightCustomNavigationBarButtonItem;
- (id)middleCustomNavigationItemTitleView;
- (id)leftCustomNavigationBarButtonItem;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

