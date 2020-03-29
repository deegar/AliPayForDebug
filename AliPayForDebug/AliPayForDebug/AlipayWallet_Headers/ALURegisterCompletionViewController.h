//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ALUSMSRegisterBaseViewController.h"

#import "aluInputBoxDelegate-Protocol.h"

@class NSString, UILabel, aluInputBox;

@interface ALURegisterCompletionViewController : ALUSMSRegisterBaseViewController <aluInputBoxDelegate>
{
    aluInputBox *_nameBox;
    aluInputBox *_identifyBox;
    UILabel *_tipsLabel;
}

@property(retain, nonatomic) UILabel *tipsLabel; // @synthesize tipsLabel=_tipsLabel;
@property(retain, nonatomic) aluInputBox *identifyBox; // @synthesize identifyBox=_identifyBox;
@property(retain, nonatomic) aluInputBox *nameBox; // @synthesize nameBox=_nameBox;
- (void).cxx_destruct;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)updateBtnStatus;
- (void)aluInputBoxTextInputDidChange:(id)arg1;
- (void)hideProgress;
- (void)showProgress;
- (void)onNext;
- (void)onBack;
- (void)didReceiveMemoryWarning;
- (void)creatSubView;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

