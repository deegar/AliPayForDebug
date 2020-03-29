//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCTableViewBaseController.h"

#import "APContactViewControllerDelegate-Protocol.h"

@class APContactBaseViewController, APGroupInfo, DTRpcAsyncCaller, NSArray, NSDictionary, NSMutableArray, NSString, UITableView;

@interface SCGroupManageViewController : SCTableViewBaseController <APContactViewControllerDelegate>
{
    NSDictionary *_section_allowMemberInvite;
    NSDictionary *_section_settingGroupManager;
    APGroupInfo *_groupInfo;
    NSArray *_sections;
    NSArray *_validSections;
    APContactBaseViewController *_ownerTansferVc;
    DTRpcAsyncCaller *_rpcOfTransferOwner;
    UITableView *_tableView;
    NSMutableArray *_managerList;
    long long _maxManagersCount;
}

@property(nonatomic) long long maxManagersCount; // @synthesize maxManagersCount=_maxManagersCount;
@property(retain, nonatomic) NSMutableArray *managerList; // @synthesize managerList=_managerList;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) DTRpcAsyncCaller *rpcOfTransferOwner; // @synthesize rpcOfTransferOwner=_rpcOfTransferOwner;
@property(nonatomic) __weak APContactBaseViewController *ownerTansferVc; // @synthesize ownerTansferVc=_ownerTansferVc;
@property(retain, nonatomic) NSArray *validSections; // @synthesize validSections=_validSections;
@property(retain, nonatomic) NSArray *sections; // @synthesize sections=_sections;
@property(retain, nonatomic) APGroupInfo *groupInfo; // @synthesize groupInfo=_groupInfo;
- (void).cxx_destruct;
- (void)dealloc;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)back;
- (_Bool)shouldHideSettingGroupManagerEntry:(id)arg1;
- (_Bool)shouldHideAllowMemberToInviteEntry;
- (void)settingGroupManagers;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)sectionIndexTitlesForTableView:(id)arg1;
- (id)checkDisplayManagersWithGroupInfo:(id)arg1;
- (void)didSelectSettingManager;
- (void)onTapContact:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)getTableViewSectionRowsInfo:(id)arg1;
- (void)rpcCommonErrorHandler:(id)arg1;
- (void)onAllowMemberToInvite:(id)arg1;
- (void)onDoTransferOwnerWithContact:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (id)beforeGroupManageViewController;
- (void)didSelectAPContactInfos:(id)arg1 controller:(id)arg2;
- (void)onOwnerTransfer;
- (void)removeSectionWithTag:(id)arg1 fromArr:(id)arg2;
- (id)sectionOfTag:(id)arg1 inArr:(id)arg2;
- (id)getSelfUserId;
- (id)makeTableViewSections;
- (void)createSubviews;
- (void)viewDidLoad;
- (id)headInfoModelForUserId:(id)arg1;
- (void)onGroupInfoNotify:(id)arg1;
- (void)onContactNotify:(id)arg1;
- (void)commonInit;
- (id)initWithGroup:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

