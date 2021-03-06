//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "APContactBaseViewController.h"

#import "APSocialPeekPopDelegate-Protocol.h"
#import "UIActionSheetDelegate-Protocol.h"

@class APCommonSelectTableViewCell, APCommonSelectView, APSocialPeekPop, AUActionSheet, NSString;
@protocol APCommonItemProtocol;

@interface APContactStrangerViewController : APContactBaseViewController <UIActionSheetDelegate, APSocialPeekPopDelegate>
{
    APCommonSelectView *_deleteSelectView;
    id <APCommonItemProtocol> _deleteItem;
    APCommonSelectTableViewCell *_deleteCell;
    AUActionSheet *_actionSheetDelete;
    APSocialPeekPop *_peekPopManager;
}

@property(retain, nonatomic) APSocialPeekPop *peekPopManager; // @synthesize peekPopManager=_peekPopManager;
@property(retain, nonatomic) AUActionSheet *actionSheetDelete; // @synthesize actionSheetDelete=_actionSheetDelete;
@property(retain, nonatomic) APCommonSelectTableViewCell *deleteCell; // @synthesize deleteCell=_deleteCell;
@property(retain, nonatomic) id <APCommonItemProtocol> deleteItem; // @synthesize deleteItem=_deleteItem;
@property(retain, nonatomic) APCommonSelectView *deleteSelectView; // @synthesize deleteSelectView=_deleteSelectView;
- (void).cxx_destruct;
- (id)previewActionItemsForTargetViewController:(id)arg1 sourceView:(id)arg2;
- (void)report3DTouch;
- (id)previewingConfigurationWithCell:(id)arg1;
- (_Bool)supportPopPeekForCell:(id)arg1 item:(id)arg2;
- (void)addPeekPopForCell:(id)arg1 item:(id)arg2;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)registerReloadNotification;
- (void)deleteRecentContactWithAPRecentContact:(id)arg1;
- (void)addToBlackListWithRecentContact:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)deleteStranger:(id)arg1 forItem:(id)arg2 cell:(id)arg3;
- (void)didDeleteCell:(id)arg1 didClickRightMenuBtnForItem:(id)arg2 cell:(id)arg3;
- (void)addBlackList:(id)arg1 forItem:(id)arg2 cell:(id)arg3;
- (void)showDeleteAlertView;
- (void)commonView:(id)arg1 didClickSlideMenuBtnForItem:(id)arg2 atIndex:(long long)arg3 cell:(id)arg4;
- (id)manageSlideMenusInCommonView:(id)arg1 item:(id)arg2 cell:(id)arg3;
- (void)didSelectContactInfo:(id)arg1;
- (id)chatViewControllerParameters:(id)arg1;
- (void)didSelectRecentContactInfo:(id)arg1;
- (void)commonView:(id)arg1 configCell:(id)arg2 atIndexPath:(id)arg3 item:(id)arg4;
- (void)commonView:(id)arg1 configCell:(id)arg2 item:(id)arg3;
- (id)cellClassNameInCommonView:(id)arg1 item:(id)arg2;
- (id)mainDataIndexCharInCommonView:(id)arg1;
- (id)mainDataInCommonView:(id)arg1;
- (void)orgizeRecentContact:(id)arg1;
- (void)reloadRecentContact:(id)arg1;
- (int)displayModeForCommonView:(id)arg1 item:(id)arg2 indexPath:(id)arg3;
- (void)setupSelectView;
- (void)loadContact;
- (void)selectContactLog;
- (void)viewWillDestroy;
- (void)judgeToShowDismissBtn;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)configWithDict:(id)arg1;
- (void)configTitles;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

