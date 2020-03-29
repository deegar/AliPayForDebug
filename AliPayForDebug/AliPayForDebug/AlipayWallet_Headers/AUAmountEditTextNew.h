//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UITextFieldDelegate-Protocol.h"

@class AUAmountEditTextFieldNew, AUMoneyIconView, AUNumKeyboards, NSString, UIImageView;

@interface AUAmountEditTextNew : UIView <UITextFieldDelegate>
{
    double _currentFontSize;
    AUNumKeyboards *_keyboard;
    AUAmountEditTextFieldNew *_amountTextField;
    CDUnknownBlockType _KeyboardSetting;
    AUMoneyIconView *_moneyIcon;
    UIView *_rightView;
    UIImageView *_clearImageView;
    UIView *_lineView;
}

+ (id)resetFontSize:(unsigned long long)arg1;
@property(retain, nonatomic) UIView *lineView; // @synthesize lineView=_lineView;
@property(retain, nonatomic) UIImageView *clearImageView; // @synthesize clearImageView=_clearImageView;
@property(retain, nonatomic) UIView *rightView; // @synthesize rightView=_rightView;
@property(retain, nonatomic) AUMoneyIconView *moneyIcon; // @synthesize moneyIcon=_moneyIcon;
@property(copy, nonatomic) CDUnknownBlockType KeyboardSetting; // @synthesize KeyboardSetting=_KeyboardSetting;
@property(retain, nonatomic) AUAmountEditTextFieldNew *amountTextField; // @synthesize amountTextField=_amountTextField;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)layoutView;
- (void)clearInputContent;
- (double)getOffsetWithLength:(unsigned long long)arg1;
- (double)getBottomWithLength:(unsigned long long)arg1;
- (struct CGPoint)firstCharactorPosition;
- (void)refreshAfterTextChange;
- (void)textFieldInputChanged;
- (void)textFieldInnerTextChangedNotify;
- (void)initView;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

