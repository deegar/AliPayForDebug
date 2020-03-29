//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TFViewController.h"

#import "AUSearchTitleViewDelegate-Protocol.h"
#import "PromotionCenterDelegate-Protocol.h"
#import "TFHomeHeaderViewDelegate-Protocol.h"
#import "TFHomeNewHeaderViewDelegate-Protocol.h"
#import "TFHomeToolListCellDelegate-Protocol.h"
#import "TFHomeTopBannerDelegate-Protocol.h"
#import "TFPromotionHelperDelegate-Protocol.h"
#import "TFPromotionMenuManagerDelegate-Protocol.h"
#import "TFTransferFormProtocol-Protocol.h"
#import "UIActionSheetDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class APContactBaseViewController, AUBarButtonItem, AUTableView, NSDictionary, NSMutableArray, NSMutableDictionary, NSSet, NSString, TFHomeAssistantCell, TFHomeCardDBManager, TFHomeEmptyFooterView, TFHomeHeaderModel, TFHomeHeaderView, TFHomeNewHeaderView, TFHomeToolDBManager, TFHomeToolItemMonitor, TFHomeTopBanner, TFHomeTransferRecordMonitor, TFPromotionHelper, TFPromotionMenuManager, TFReciverInfoChecker, UITableViewRowAction;

@interface TFMainHomeDispatchViewController : TFViewController <UITableViewDataSource, UITableViewDelegate, TFPromotionMenuManagerDelegate, UIActionSheetDelegate, AUSearchTitleViewDelegate, TFHomeHeaderViewDelegate, PromotionCenterDelegate, TFPromotionHelperDelegate, TFHomeToolListCellDelegate, TFHomeNewHeaderViewDelegate, TFHomeTopBannerDelegate, TFTransferFormProtocol>
{
    NSString *tfc_transferByVoiceAction;
    _Bool tfc_contactSelectRollback;
    _Bool tfc_transferCardSelectionSwitch;
    _Bool tfc_isUsePromotionMenuManager;
    _Bool _isLoadMore;
    _Bool _isRpcFinished;
    _Bool _isLoadDBFinished;
    _Bool _useHeaderV82;
    APContactBaseViewController *_contactViewController;
    TFReciverInfoChecker *_reciverInfoChecker;
    AUBarButtonItem *_moreBarButtonItem;
    AUTableView *_tableView;
    TFHomeHeaderView *_tableHeaderView;
    TFHomeHeaderModel *_tableHeaderData;
    TFHomeEmptyFooterView *_footerView;
    NSMutableArray *_historyRecords;
    NSDictionary *_historyReceiverInfos;
    NSMutableArray *_recommendFriends;
    NSMutableArray *_arrTools;
    NSMutableArray *_arrAssistantOriginal;
    NSMutableArray *_arrAssistantShowed;
    TFHomeToolItemMonitor *_toolItemMonitor;
    TFHomeTransferRecordMonitor *_transferRecordMonitor;
    TFHomeToolDBManager *_toolDBManager;
    TFHomeCardDBManager *_cardDBManager;
    NSSet *_supportedTemplates;
    TFHomeAssistantCell *_assistantCell;
    TFHomeNewHeaderView *_tableNewHeaderView;
    TFHomeTopBanner *_tableBannerView;
    UITableViewRowAction *_stickAction;
    UITableViewRowAction *_unStickAction;
    UITableViewRowAction *_deleteAction;
    TFPromotionMenuManager *_menuManager;
    NSMutableArray *_menuItems;
    TFPromotionHelper *_promotionHelper;
    NSMutableDictionary *_dicFundToolsRedPoint;
    long long _recentListMaxCount;
    NSDictionary *_headerIconConfig;
    NSDictionary *_headerBarConfig;
}

@property(retain, nonatomic) NSDictionary *headerBarConfig; // @synthesize headerBarConfig=_headerBarConfig;
@property(retain, nonatomic) NSDictionary *headerIconConfig; // @synthesize headerIconConfig=_headerIconConfig;
@property(nonatomic) long long recentListMaxCount; // @synthesize recentListMaxCount=_recentListMaxCount;
@property(retain, nonatomic) NSMutableDictionary *dicFundToolsRedPoint; // @synthesize dicFundToolsRedPoint=_dicFundToolsRedPoint;
@property(retain, nonatomic) TFPromotionHelper *promotionHelper; // @synthesize promotionHelper=_promotionHelper;
@property(retain, nonatomic) NSMutableArray *menuItems; // @synthesize menuItems=_menuItems;
@property(retain, nonatomic) TFPromotionMenuManager *menuManager; // @synthesize menuManager=_menuManager;
@property(retain, nonatomic) UITableViewRowAction *deleteAction; // @synthesize deleteAction=_deleteAction;
@property(retain, nonatomic) UITableViewRowAction *unStickAction; // @synthesize unStickAction=_unStickAction;
@property(retain, nonatomic) UITableViewRowAction *stickAction; // @synthesize stickAction=_stickAction;
@property(nonatomic) _Bool useHeaderV82; // @synthesize useHeaderV82=_useHeaderV82;
@property(retain, nonatomic) TFHomeTopBanner *tableBannerView; // @synthesize tableBannerView=_tableBannerView;
@property(retain, nonatomic) TFHomeNewHeaderView *tableNewHeaderView; // @synthesize tableNewHeaderView=_tableNewHeaderView;
@property(retain, nonatomic) TFHomeAssistantCell *assistantCell; // @synthesize assistantCell=_assistantCell;
@property(retain, nonatomic) NSSet *supportedTemplates; // @synthesize supportedTemplates=_supportedTemplates;
@property(retain, nonatomic) TFHomeCardDBManager *cardDBManager; // @synthesize cardDBManager=_cardDBManager;
@property(retain, nonatomic) TFHomeToolDBManager *toolDBManager; // @synthesize toolDBManager=_toolDBManager;
@property(retain, nonatomic) TFHomeTransferRecordMonitor *transferRecordMonitor; // @synthesize transferRecordMonitor=_transferRecordMonitor;
@property(retain, nonatomic) TFHomeToolItemMonitor *toolItemMonitor; // @synthesize toolItemMonitor=_toolItemMonitor;
@property(nonatomic) _Bool isLoadDBFinished; // @synthesize isLoadDBFinished=_isLoadDBFinished;
@property(nonatomic) _Bool isRpcFinished; // @synthesize isRpcFinished=_isRpcFinished;
@property(retain, nonatomic) NSMutableArray *arrAssistantShowed; // @synthesize arrAssistantShowed=_arrAssistantShowed;
@property(retain, nonatomic) NSMutableArray *arrAssistantOriginal; // @synthesize arrAssistantOriginal=_arrAssistantOriginal;
@property(retain, nonatomic) NSMutableArray *arrTools; // @synthesize arrTools=_arrTools;
@property(retain, nonatomic) NSMutableArray *recommendFriends; // @synthesize recommendFriends=_recommendFriends;
@property(nonatomic) _Bool isLoadMore; // @synthesize isLoadMore=_isLoadMore;
@property(retain, nonatomic) NSDictionary *historyReceiverInfos; // @synthesize historyReceiverInfos=_historyReceiverInfos;
@property(retain, nonatomic) NSMutableArray *historyRecords; // @synthesize historyRecords=_historyRecords;
@property(retain, nonatomic) TFHomeEmptyFooterView *footerView; // @synthesize footerView=_footerView;
@property(retain, nonatomic) TFHomeHeaderModel *tableHeaderData; // @synthesize tableHeaderData=_tableHeaderData;
@property(retain, nonatomic) TFHomeHeaderView *tableHeaderView; // @synthesize tableHeaderView=_tableHeaderView;
@property(retain, nonatomic) AUTableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) AUBarButtonItem *moreBarButtonItem; // @synthesize moreBarButtonItem=_moreBarButtonItem;
@property(retain, nonatomic) TFReciverInfoChecker *reciverInfoChecker; // @synthesize reciverInfoChecker=_reciverInfoChecker;
@property(retain, nonatomic) APContactBaseViewController *contactViewController; // @synthesize contactViewController=_contactViewController;
- (void).cxx_destruct;
- (void)promotionDataDidFinishLoading:(id)arg1 spaceCode:(id)arg2;
- (void)promotionMenuManagerDidLoadMenu:(id)arg1 isCache:(_Bool)arg2;
- (void)showAssitantActionSheet:(id)arg1;
- (void)selectRecommedFriendCellWithContact:(id)arg1 atRow:(long long)arg2;
- (void)doSelectForRecentCellWithRecord:(id)arg1 atRow:(long long)arg2;
- (void)checkRecevierInfoWithAccount:(id)arg1 userId:(id)arg2 contactInfo:(id)arg3 historyIndex:(id)arg4;
- (void)doSelectToAccountContact:(id)arg1;
- (void)launchAPContactSelectContactViewController;
- (void)homeViewATStopAnimation;
- (void)homeViewATTriggerAnimation;
- (_Bool)enableShowRecentSectionFooterview;
- (long long)getRecentSectionHeaderViewStatus;
- (void)handleRecommendFriends;
- (void)showAssistantTips;
- (void)handleAssistantTips;
- (void)handleHomeRpcResultWithTransferRecordList:(id)arg1 toolList:(id)arg2 cardList:(id)arg3 templateInfos:(id)arg4;
- (void)onlyUpdateHistoryRecords:(id)arg1;
- (void)handleHistoryRecords:(id)arg1 complete:(CDUnknownBlockType)arg2;
- (void)stickWithHistoryRecord:(id)arg1 stick:(_Bool)arg2;
- (void)deleteHistoryRecord:(id)arg1;
- (void)loadHomeDataOnlyUpdateTransferRecords:(_Bool)arg1;
- (id)loadToolItemsDBData;
- (id)loadAssistantDBData;
- (id)loadTransferRecordsDBData;
- (void)loadHomeDBData:(CDUnknownBlockType)arg1;
- (id)genTemplateUpdateConfigsWithTemplateInfos:(id)arg1;
- (id)genShowedAssistantListWithOriginalList:(id)arg1;
- (id)genOriginalAssistantListWithHomeCardList:(id)arg1;
- (id)genHomeCardListWithCardList:(id)arg1;
- (long long)getNumberOfRowsInToolsSection;
- (id)genToolListWithtoolItemVOs:(id)arg1;
- (id)genHomeRecordsWithTransferRecordVOs:(id)arg1;
- (void)recommendFriendsAvatarDidTapped:(id)arg1;
- (void)transferRecordAvatarDidTapped:(id)arg1;
- (void)setupNavigationBar;
- (void)setupConfig;
- (void)handleApplicationDidEnterBackground:(id)arg1;
- (void)handleApplicationDidBecomeActive:(id)arg1;
- (void)updateTransferRecords:(id)arg1;
- (void)homeToolListCellBadgeViewExposure:(id)arg1;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 editActionsForRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)headerNameByLanguage;
- (void)adjustIconStyle:(id)arg1 titleStyle:(id)arg2 withItem:(id)arg3;
- (void)didClickHeaderItem:(id)arg1;
- (void)didPressedVoiceButton:(id)arg1;
- (void)didPressedTitleView:(id)arg1;
- (id)customNavigationBarBackButtonImage;
- (id)customNavigationBarBackButtonTitleColor;
- (id)opaqueNavigationBarColor;
- (id)initWithTransferRequest:(id)arg1;
- (void)dealloc;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

