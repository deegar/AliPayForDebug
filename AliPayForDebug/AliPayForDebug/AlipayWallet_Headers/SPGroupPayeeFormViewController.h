//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SPBaseViewController.h"

#import "SPGroupPayeeFormViewCellDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class AUButton, NSArray, NSString, SPDynamicToastView, SPGroupPayeeFormViewModel, SPGroupPayeeViewModel, SPKeyboardAvoidingTableView, TTTAttributedLabel, UIView;

@interface SPGroupPayeeFormViewController : SPBaseViewController <UITableViewDataSource, UITableViewDelegate, SPGroupPayeeFormViewCellDelegate>
{
    SPGroupPayeeFormViewModel *_payeeFormVM;
    SPGroupPayeeViewModel *_payeeViewModel;
    NSArray *_payeeFormSections;
    NSArray *_groupMembers;
    SPKeyboardAvoidingTableView *_formTableView;
    AUButton *_submitButton;
    TTTAttributedLabel *_footerCustomLabel;
    UIView *_submitContainerView;
    id _activeInputValidator;
    SPDynamicToastView *_toastView;
}

@property(retain, nonatomic) SPDynamicToastView *toastView; // @synthesize toastView=_toastView;
@property(retain, nonatomic) id activeInputValidator; // @synthesize activeInputValidator=_activeInputValidator;
@property(retain, nonatomic) UIView *submitContainerView; // @synthesize submitContainerView=_submitContainerView;
@property(retain, nonatomic) TTTAttributedLabel *footerCustomLabel; // @synthesize footerCustomLabel=_footerCustomLabel;
@property(retain, nonatomic) AUButton *submitButton; // @synthesize submitButton=_submitButton;
@property(retain, nonatomic) SPKeyboardAvoidingTableView *formTableView; // @synthesize formTableView=_formTableView;
@property(retain, nonatomic) NSArray *groupMembers; // @synthesize groupMembers=_groupMembers;
@property(retain, nonatomic) NSArray *payeeFormSections; // @synthesize payeeFormSections=_payeeFormSections;
@property(retain, nonatomic) SPGroupPayeeViewModel *payeeViewModel; // @synthesize payeeViewModel=_payeeViewModel;
- (void).cxx_destruct;
- (void)onLastGroupAAAmountClick;
- (void)buildStatusTLabel:(id)arg1 added2SuperView:(id)arg2;
- (id)getDynamicToast;
- (void)finishMe;
- (void)clearBatchInfo;
- (void)doSubmit;
- (void)reloadTipSection:(id)arg1 inputText:(id)arg2;
- (void)forceResignFirstResponsor;
- (void)formViewCell:(id)arg1 inputTextBeginEdit:(id)arg2;
- (void)formViewCell:(id)arg1 inputTextChanged:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)buildFormView;
- (id)formViewModel;
- (void)formConfig;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithPayeeViewModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

