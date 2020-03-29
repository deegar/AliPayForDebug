//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SPBaseViewController.h"

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"

@class APContactInfo, AUButton, AUInputBox, NSString, SPKeyboardAvoidingTableView, UITextField;

@interface SPPersonalPayeeFormViewController : SPBaseViewController <UITableViewDataSource, UITableViewDelegate, UITextFieldDelegate>
{
    SPKeyboardAvoidingTableView *_formTableView;
    APContactInfo *_reciverContact;
    AUInputBox *_ammountBox;
    AUInputBox *_memoBox;
    double _maxAmmount;
    AUButton *_submitButton;
    UITextField *_activeTextField;
}

@property(retain, nonatomic) UITextField *activeTextField; // @synthesize activeTextField=_activeTextField;
@property(retain, nonatomic) AUButton *submitButton; // @synthesize submitButton=_submitButton;
@property(nonatomic) double maxAmmount; // @synthesize maxAmmount=_maxAmmount;
@property(retain, nonatomic) AUInputBox *memoBox; // @synthesize memoBox=_memoBox;
@property(retain, nonatomic) AUInputBox *ammountBox; // @synthesize ammountBox=_ammountBox;
@property(retain, nonatomic) APContactInfo *reciverContact; // @synthesize reciverContact=_reciverContact;
@property(retain, nonatomic) SPKeyboardAvoidingTableView *formTableView; // @synthesize formTableView=_formTableView;
- (void).cxx_destruct;
- (id)getReciverContactInfo;
- (void)amountInputChanged:(id)arg1;
- (_Bool)isSubmitValid;
- (void)doSubmit;
- (void)resignResponsor;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (_Bool)textFieldShouldBeginEditing:(id)arg1;
- (_Bool)isValidMoneyString:(id)arg1;
- (id)speratorLineWithLocY:(double)arg1 locX:(double)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)headerViewHeight;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)customNavigationBackItem;
- (void)buildFormView;
- (void)back;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

