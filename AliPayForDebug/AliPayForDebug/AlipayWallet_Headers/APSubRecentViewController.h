//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "APContactBaseViewController.h"

#import "UIActionSheetDelegate-Protocol.h"

@class APCommonSelectTableViewCell, AUActionSheet, NSMutableArray, NSString, UIView;
@protocol APCommonItemProtocol;

@interface APSubRecentViewController : APContactBaseViewController <UIActionSheetDelegate>
{
    _Bool _isShowTopView;
    int _notOverDueCount;
    NSString *_rightBarItemTitle;
    NSString *_rightBarItemSchema;
    NSString *_proxyName;
    long long _sectionTime;
    NSMutableArray *_overdueItems;
    NSString *_userType;
    AUActionSheet *_actionSheetDelete;
    id <APCommonItemProtocol> _deleteItem;
    APCommonSelectTableViewCell *_deletecell;
    NSString *_cellClassName;
    UIView *_subRecentTopView;
    NSString *_topViewText;
    NSString *_topViewSchema;
    UIView *_subRecentEmptyView;
    NSString *_emptyViewImageName;
    NSString *_emptyViewTitle;
    NSString *_emptyViewSubTitle;
    UIView *_customerGuideView;
}

@property(retain, nonatomic) UIView *customerGuideView; // @synthesize customerGuideView=_customerGuideView;
@property(retain, nonatomic) NSString *emptyViewSubTitle; // @synthesize emptyViewSubTitle=_emptyViewSubTitle;
@property(retain, nonatomic) NSString *emptyViewTitle; // @synthesize emptyViewTitle=_emptyViewTitle;
@property(retain, nonatomic) NSString *emptyViewImageName; // @synthesize emptyViewImageName=_emptyViewImageName;
@property(retain, nonatomic) UIView *subRecentEmptyView; // @synthesize subRecentEmptyView=_subRecentEmptyView;
@property(retain, nonatomic) NSString *topViewSchema; // @synthesize topViewSchema=_topViewSchema;
@property(retain, nonatomic) NSString *topViewText; // @synthesize topViewText=_topViewText;
@property(nonatomic) _Bool isShowTopView; // @synthesize isShowTopView=_isShowTopView;
@property(retain, nonatomic) UIView *subRecentTopView; // @synthesize subRecentTopView=_subRecentTopView;
@property(nonatomic) int notOverDueCount; // @synthesize notOverDueCount=_notOverDueCount;
@property(retain, nonatomic) NSString *cellClassName; // @synthesize cellClassName=_cellClassName;
@property(retain, nonatomic) APCommonSelectTableViewCell *deletecell; // @synthesize deletecell=_deletecell;
@property(retain, nonatomic) id <APCommonItemProtocol> deleteItem; // @synthesize deleteItem=_deleteItem;
@property(retain, nonatomic) AUActionSheet *actionSheetDelete; // @synthesize actionSheetDelete=_actionSheetDelete;
@property(retain, nonatomic) NSString *userType; // @synthesize userType=_userType;
@property(retain, nonatomic) NSMutableArray *overdueItems; // @synthesize overdueItems=_overdueItems;
@property(nonatomic) long long sectionTime; // @synthesize sectionTime=_sectionTime;
@property(retain, nonatomic) NSString *proxyName; // @synthesize proxyName=_proxyName;
@property(retain, nonatomic) NSString *rightBarItemSchema; // @synthesize rightBarItemSchema=_rightBarItemSchema;
@property(retain, nonatomic) NSString *rightBarItemTitle; // @synthesize rightBarItemTitle=_rightBarItemTitle;
- (void).cxx_destruct;
- (void)dealloc;
- (void)onClickedTopView:(id)arg1;
- (void)showSubRecentTopView:(_Bool)arg1;
- (void)showSubRecentEmptyView:(_Bool)arg1;
- (void)dismissCustomerGuideView:(id)arg1;
- (void)showCustomerGuideViewIsTopBox:(_Bool)arg1;
- (void)adjustFrames;
- (void)deleteCellSuccessItem:(id)arg1 cell:(id)arg2;
- (void)didDeleteCell:(id)arg1 cell:(id)arg2;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)showDeleteAlertView;
- (void)commonView:(id)arg1 didClickSlideMenuBtnForItem:(id)arg2 atIndex:(long long)arg3 cell:(id)arg4;
- (id)manageSlideMenusInCommonView:(id)arg1 item:(id)arg2 cell:(id)arg3;
- (id)getUrlParams:(id)arg1;
- (void)clickJumpUrlAppendSessionSwitch:(id)arg1;
- (void)didSelectRecentContactInfo:(id)arg1;
- (double)cellHeightInCommonView:(id)arg1 item:(id)arg2 indexPath:(id)arg3;
- (void)commonView:(id)arg1 configCell:(id)arg2 item:(id)arg3;
- (id)cellClassNameInCommonView:(id)arg1 item:(id)arg2;
- (id)mainDataIndexCharInCommonView:(id)arg1;
- (id)mainDataInCommonView:(id)arg1;
- (id)commonView:(id)arg1 viewForHeaderInSection:(long long)arg2 headerTitle:(id)arg3 imageIcon:(id)arg4 useDefault:(_Bool *)arg5;
- (double)commonView:(id)arg1 heightForHeaderInSection:(long long)arg2 headerTitle:(id)arg3 useDefault:(_Bool *)arg4;
- (int)displayModeForCommonView:(id)arg1 item:(id)arg2 indexPath:(id)arg3;
- (void)setupSelectView;
- (_Bool)checkTimeWithinSectionTime:(id)arg1;
- (id)sortAllTypeRecentsList:(id)arg1;
- (void)updateRecentBoxWith:(id)arg1;
- (void)reloadRecentContact:(id)arg1;
- (void)loadContact;
- (void)setupNotify;
- (void)tapRightButtonItem:(id)arg1;
- (void)setupRightBarButton;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)reloadUI;
- (void)viewDidLoad;
- (void)configWithDict:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

