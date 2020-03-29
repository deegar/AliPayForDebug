//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MQPView.h"

#import "MMPTextFContainerDelegate-Protocol.h"

@class MMPTextFContainer, NSObject, NSString, UIColor;
@protocol MQPPayPwdDelegate;

@interface MQPPayPwd : MQPView <MMPTextFContainerDelegate>
{
    int _pwdType;
    MMPTextFContainer *_textContainer;
    NSObject<MQPPayPwdDelegate> *_delegate;
    UIColor *_line_color;
}

@property(nonatomic) int pwdType; // @synthesize pwdType=_pwdType;
@property(retain, nonatomic) UIColor *line_color; // @synthesize line_color=_line_color;
@property(nonatomic) __weak NSObject<MQPPayPwdDelegate> *delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) MMPTextFContainer *textContainer; // @synthesize textContainer=_textContainer;
- (void).cxx_destruct;
- (void)updatePwdText;
- (void)blur;
- (void)focus;
- (void)containerDidClickClearButton;
- (void)containerTextDidTextDelete;
- (void)containerDidTextInput;
- (void)clearValue;
- (void)setPlaceHolder:(id)arg1;
- (void)setFont:(id)arg1;
- (void)_value:(id)arg1;
- (id)_value;
- (void)drawRect:(struct CGRect)arg1;
- (void)onTap:(id)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 pwdType:(int)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

