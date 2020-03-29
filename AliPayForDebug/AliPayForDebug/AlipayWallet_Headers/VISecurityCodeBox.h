//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UILabel, UITextField;

@interface VISecurityCodeBox : UIView
{
    _Bool _waiting;
    _Bool _bShowBorder;
    UILabel *_titleLabel;
    double _titleLabelWidth;
    UITextField *_textField;
    UIButton *_actionButton;
}

+ (float)heightOfControl;
@property(nonatomic) _Bool bShowBorder; // @synthesize bShowBorder=_bShowBorder;
@property(nonatomic) _Bool waiting; // @synthesize waiting=_waiting;
@property(retain, nonatomic) UIButton *actionButton; // @synthesize actionButton=_actionButton;
@property(retain, nonatomic) UITextField *textField; // @synthesize textField=_textField;
@property(nonatomic) double titleLabelWidth; // @synthesize titleLabelWidth=_titleLabelWidth;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)tapTitleLabel:(id)arg1;
- (void)willMoveToSuperview:(id)arg1;
- (void)layoutSubviews;
- (void)stopCountdown;
- (void)startCountdown;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end

