//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "APContactBaseViewController.h"

#import "APContactViewControllerDelegate-Protocol.h"

@class APGroupSelectCreateViewController, NSArray, NSDictionary, NSString;

@interface APContactSelectRecentViewController : APContactBaseViewController <APContactViewControllerDelegate>
{
    _Bool _enableCreateGroup;
    _Bool _groupCTAlert;
    _Bool _singleSelect;
    _Bool _notCreateGroup;
    _Bool _multiContacts;
    _Bool _showRightButton;
    _Bool _multiSelectModel;
    _Bool _enableMultiSelect;
    _Bool _enableSelectNone;
    NSString *_optionTitle;
    NSArray *_optionGroups;
    NSString *_groupSPAction;
    NSString *_groupSourceChannel;
    NSDictionary *_dict;
    NSString *_rightButtonTitle;
    NSString *_confirmBtnTitle;
    APGroupSelectCreateViewController *_createGroup;
}

@property(retain, nonatomic) APGroupSelectCreateViewController *createGroup; // @synthesize createGroup=_createGroup;
@property(nonatomic) _Bool enableSelectNone; // @synthesize enableSelectNone=_enableSelectNone;
@property(retain, nonatomic) NSString *confirmBtnTitle; // @synthesize confirmBtnTitle=_confirmBtnTitle;
@property(nonatomic) _Bool enableMultiSelect; // @synthesize enableMultiSelect=_enableMultiSelect;
@property(nonatomic) _Bool multiSelectModel; // @synthesize multiSelectModel=_multiSelectModel;
@property(retain, nonatomic) NSString *rightButtonTitle; // @synthesize rightButtonTitle=_rightButtonTitle;
@property(nonatomic) _Bool showRightButton; // @synthesize showRightButton=_showRightButton;
@property(retain, nonatomic) NSDictionary *dict; // @synthesize dict=_dict;
@property(nonatomic) _Bool multiContacts; // @synthesize multiContacts=_multiContacts;
@property(nonatomic) _Bool notCreateGroup; // @synthesize notCreateGroup=_notCreateGroup;
@property(nonatomic) _Bool singleSelect; // @synthesize singleSelect=_singleSelect;
@property(retain, nonatomic) NSString *groupSourceChannel; // @synthesize groupSourceChannel=_groupSourceChannel;
@property(nonatomic) _Bool groupCTAlert; // @synthesize groupCTAlert=_groupCTAlert;
@property(retain, nonatomic) NSString *groupSPAction; // @synthesize groupSPAction=_groupSPAction;
@property(retain, nonatomic) NSArray *optionGroups; // @synthesize optionGroups=_optionGroups;
@property(retain, nonatomic) NSString *optionTitle; // @synthesize optionTitle=_optionTitle;
@property(nonatomic) _Bool enableCreateGroup; // @synthesize enableCreateGroup=_enableCreateGroup;
- (void).cxx_destruct;
- (id)getCommonLogArray;
- (id)getSearchSPMID;
- (id)getSelectSPMID;
- (id)getCancelSPMID;
- (id)getSPMID;
- (id)formatStringWithArray:(id)arg1;
- (void)logSelectSPMIDWithSelects:(id)arg1;
- (void)selectionDidChangeInCommonView:(id)arg1;
- (void)didSelectContactInfo:(id)arg1;
- (void)didSelectGroup:(id)arg1 stranger:(id)arg2;
- (void)didSelectItems:(id)arg1 commonView:(id)arg2;
- (_Bool)doNewAASelectLogic:(id)arg1 modelKey:(id)arg2;
- (void)commonView:(id)arg1 configCell:(id)arg2 item:(id)arg3;
- (id)cellClassNameInCommonView:(id)arg1 item:(id)arg2;
- (id)secondaryDataTitlesInCommonView:(id)arg1;
- (id)secondaryDataInCommonView:(id)arg1;
- (id)mainDataIndexCharInCommonView:(id)arg1;
- (id)mainDataInCommonView:(id)arg1;
- (int)displayModeForCommonView:(id)arg1 item:(id)arg2 indexPath:(id)arg3;
- (void)dealCreateCallback:(id)arg1 stranger:(id)arg2;
- (void)createGroupWithAddFriend:(id)arg1;
- (id)generateGroupSelectCreateVC;
- (id)generateCombinedMultiSelectVC;
- (void)generateCombinedMultiSelectVCDict:(id)arg1;
- (id)generateMultiFriendSelectVC;
- (void)deSelectItems:(id)arg1 commonView:(id)arg2 indexPath:(id)arg3;
- (void)commonView:(id)arg1 didSelectCustomRowAtIndexPath:(id)arg2;
- (id)commonView:(id)arg1 cellForCustomRowAtIndexPath:(id)arg2;
- (long long)commonView:(id)arg1 heightForRowInCustomIndexPath:(id)arg2;
- (long long)commonView:(id)arg1 numberOfRowInCustomSection:(long long)arg2;
- (long long)numberOfCustomSectionInCommonView:(id)arg1;
- (void)didClickHeaderIconWithContactInfo:(id)arg1;
- (void)searchBarTextDidBeginEditing:(id)arg1;
- (void)responseToSelectContact:(id)arg1;
- (id)convertSelectedToContactOrGroup:(id)arg1;
- (void)responseToSelectContactList:(id)arg1;
- (void)errorViewShow:(_Bool)arg1 error:(id)arg2;
- (void)reloadContacts;
- (void)reloadRecentContactsWithNoti:(id)arg1;
- (void)reloadRecentContact;
- (void)loadContact;
- (void)transferToSingleSelectModel;
- (void)setupMultiSelectView;
- (void)transferToMultiSelectModel;
- (void)tapRightButtonItem:(id)arg1;
- (void)back;
- (void)selectContactLog;
- (void)setupRightBarBtnItem;
- (void)adjustFrames;
- (void)setupSelectView;
- (void)setupUI;
- (void)didSelectAPContactInfos:(id)arg1 controller:(id)arg2;
- (void)didClickBackBtnWithController:(id)arg1;
- (void)judgeToShowDismissBtn;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)configWithDict:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

