//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "APContactBaseViewController.h"

#import "CTTitleViewDelegate-Protocol.h"
#import "UIActionSheetDelegate-Protocol.h"

@class APCommonSelectTableViewCell, APRecentContact, APSocialRecentFoldLogSPM, AUActionSheet, CTTitleView, NSArray, NSSet, NSString, SocialSessionLogManager, UIView;
@protocol APCommonItemProtocol;

@interface APContactRecentFoldViewController : APContactBaseViewController <UIActionSheetDelegate, CTTitleViewDelegate>
{
    _Bool _isLifeStyleCustomUI;
    _Bool _hasUnread;
    _Bool _isStartingApplication;
    NSString *_userType;
    NSArray *_foldedRecents;
    APRecentContact *_unfollowRecent;
    AUActionSheet *_actionSheetUnfollow;
    APRecentContact *_quiteRecent;
    AUActionSheet *_actionSheetQuite;
    APRecentContact *_hintRecent;
    AUActionSheet *_actionSheetHint;
    CTTitleView *_titleView;
    NSString *_rightBarItemTitle;
    NSString *_rightBarItemSchema;
    AUActionSheet *_actionSheetDelete;
    id <APCommonItemProtocol> _deleteItem;
    APCommonSelectTableViewCell *_deletecell;
    UIView *_emptyView;
    NSString *_emptyViewImageName;
    NSString *_emptyViewTitle;
    NSSet *_foldedItems;
    SocialSessionLogManager *_logSessionManager;
    SocialSessionLogManager *_friendTabllogSessionManager;
    APSocialRecentFoldLogSPM *_logRecentSpm;
}

@property(nonatomic) _Bool isStartingApplication; // @synthesize isStartingApplication=_isStartingApplication;
@property(retain, nonatomic) APSocialRecentFoldLogSPM *logRecentSpm; // @synthesize logRecentSpm=_logRecentSpm;
@property(nonatomic) _Bool hasUnread; // @synthesize hasUnread=_hasUnread;
@property(retain, nonatomic) SocialSessionLogManager *friendTabllogSessionManager; // @synthesize friendTabllogSessionManager=_friendTabllogSessionManager;
@property(retain, nonatomic) SocialSessionLogManager *logSessionManager; // @synthesize logSessionManager=_logSessionManager;
@property(retain, nonatomic) NSSet *foldedItems; // @synthesize foldedItems=_foldedItems;
@property(retain, nonatomic) NSString *emptyViewTitle; // @synthesize emptyViewTitle=_emptyViewTitle;
@property(retain, nonatomic) NSString *emptyViewImageName; // @synthesize emptyViewImageName=_emptyViewImageName;
@property(retain, nonatomic) UIView *emptyView; // @synthesize emptyView=_emptyView;
@property(retain, nonatomic) APCommonSelectTableViewCell *deletecell; // @synthesize deletecell=_deletecell;
@property(retain, nonatomic) id <APCommonItemProtocol> deleteItem; // @synthesize deleteItem=_deleteItem;
@property(retain, nonatomic) AUActionSheet *actionSheetDelete; // @synthesize actionSheetDelete=_actionSheetDelete;
@property(retain, nonatomic) NSString *rightBarItemSchema; // @synthesize rightBarItemSchema=_rightBarItemSchema;
@property(retain, nonatomic) NSString *rightBarItemTitle; // @synthesize rightBarItemTitle=_rightBarItemTitle;
@property(retain, nonatomic) CTTitleView *titleView; // @synthesize titleView=_titleView;
@property(retain, nonatomic) AUActionSheet *actionSheetHint; // @synthesize actionSheetHint=_actionSheetHint;
@property(retain, nonatomic) APRecentContact *hintRecent; // @synthesize hintRecent=_hintRecent;
@property(retain, nonatomic) AUActionSheet *actionSheetQuite; // @synthesize actionSheetQuite=_actionSheetQuite;
@property(retain, nonatomic) APRecentContact *quiteRecent; // @synthesize quiteRecent=_quiteRecent;
@property(retain, nonatomic) AUActionSheet *actionSheetUnfollow; // @synthesize actionSheetUnfollow=_actionSheetUnfollow;
@property(retain, nonatomic) APRecentContact *unfollowRecent; // @synthesize unfollowRecent=_unfollowRecent;
@property(retain, nonatomic) NSArray *foldedRecents; // @synthesize foldedRecents=_foldedRecents;
@property(copy, nonatomic) NSString *userType; // @synthesize userType=_userType;
@property(nonatomic) _Bool isLifeStyleCustomUI; // @synthesize isLifeStyleCustomUI=_isLifeStyleCustomUI;
- (void).cxx_destruct;
- (void)titleView:(id)arg1 quickMenuTaped:(id)arg2;
- (id)getTextWithMarkAction:(unsigned long long)arg1 recent:(id)arg2;
- (double)getMenuBtnFont;
- (void)dealloc;
- (void)showEmptyView:(_Bool)arg1;
- (void)adjustFrames;
- (void)fireToRefreshStartingState;
- (void)deleteCellSuccessItem:(id)arg1 cell:(id)arg2;
- (void)didDeleteCell:(id)arg1 cell:(id)arg2;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (id)customNavigationBarBackButtonImage;
- (id)customNavigationBarBackButtonTitleColor;
- (id)customNavigationBarTitleColor;
- (id)opaqueNavigationBarColor;
- (long long)customStatusBarStytle;
- (void)updateUnread;
- (void)deleteRecentContactWithAPRecentContact:(id)arg1;
- (void)removeItemFromDataSource:(id)arg1;
- (void)didDeleteCell:(id)arg1 didClickRightMenuBtnForItem:(id)arg2 cell:(id)arg3;
- (void)showDeleteAlertView;
- (void)showHintAlertView:(id)arg1 isCommon:(_Bool)arg2;
- (void)handleClickLifeTipView:(id)arg1 commonView:(id)arg2 isCommon:(_Bool)arg3;
- (void)slideHandleRecentSpmLog:(id)arg1 slideClick:(id)arg2;
- (void)cellRecentQuiteOrHint:(id)arg1;
- (void)cellRecentUnReceive:(id)arg1;
- (void)cellRecentUnfollow:(id)arg1;
- (void)addToBlackListWithRecentContact:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)cellRecentAddBlackList:(id)arg1 cell:(id)arg2;
- (void)cellRecentPackUp:(id)arg1;
- (void)cellRecentUnPin:(id)arg1;
- (void)cellRecentPin:(id)arg1;
- (void)cellRecentPinFor3DTouch:(id)arg1;
- (void)cellRecentMarkUnRead:(id)arg1;
- (void)cellRecentMarkRead:(id)arg1;
- (void)cellRecentHandleComm:(id)arg1 handleStr:(id)arg2 cell:(id)arg3;
- (void)showDeleteAlertView:(id)arg1 withAlertTitle:(id)arg2;
- (_Bool)needShowDeleteAlertView:(id)arg1;
- (void)commonView:(id)arg1 didClickSlideMenuBtnForItem:(id)arg2 atIndex:(long long)arg3 cell:(id)arg4;
- (void)swipeTableCellSlideMenusDidOpenInCell:(id)arg1;
- (id)manageSlideMenusInCommonView:(id)arg1 item:(id)arg2 cell:(id)arg3;
- (id)getUrlParams:(id)arg1;
- (void)clickJumpUrlAppendSessionSwitch:(id)arg1;
- (void)cellRecentForceMarkReadNeedLog:(id)arg1;
- (void)cellRecentForceMarkReadNeedLog:(id)arg1 needLog:(_Bool)arg2;
- (void)enterTimeLine;
- (void)didSelectRecentContactInfo:(id)arg1;
- (void)didSelectItems:(id)arg1 commonView:(id)arg2;
- (double)cellHeightInCommonView:(id)arg1 item:(id)arg2 indexPath:(id)arg3;
- (void)commonView:(id)arg1 configCell:(id)arg2 atIndexPath:(id)arg3 item:(id)arg4;
- (id)unReadTipsWithRecentContact:(id)arg1;
- (void)commonView:(id)arg1 configCell:(id)arg2 item:(id)arg3;
- (id)cellClassNameInCommonView:(id)arg1 item:(id)arg2;
- (id)mainDataIndexCharInCommonView:(id)arg1;
- (id)mainDataInCommonView:(id)arg1;
- (id)commonView:(id)arg1 viewForHeaderInSection:(long long)arg2 headerTitle:(id)arg3 imageIcon:(id)arg4 useDefault:(_Bool *)arg5;
- (double)commonView:(id)arg1 heightForHeaderInSection:(long long)arg2 headerTitle:(id)arg3 useDefault:(_Bool *)arg4;
- (int)displayModeForCommonView:(id)arg1 item:(id)arg2 indexPath:(id)arg3;
- (void)setupSelectView;
- (void)reloadRecentContact:(id)arg1;
- (void)handleReloadData:(id)arg1 foldLifestyles:(id)arg2;
- (void)addStartClickRecentSpmLog:(id)arg1 userTypeStr:(id)arg2;
- (void)addEndClickRecentSpmLog:(id)arg1;
- (void)loadContact;
- (void)setupNotify;
- (void)tapRightButtonItem:(id)arg1;
- (void)setupRightBarButton;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)logMarkAllReadClick;
- (void)logMarkAllReadShow;
- (void)clickRecentLogWrite:(id)arg1 logType:(id)arg2 row:(long long)arg3;
- (void)logItemClick:(id)arg1;
- (void)logRecentContactList;
- (void)markAllAsRead;
- (void)updateHasUnread:(_Bool)arg1;
- (void)updateQuickMenu;
- (void)updateTitleView;
- (void)configTitleView;
- (void)reloadUI;
- (void)viewDidLoad;
- (void)configWithDict:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

