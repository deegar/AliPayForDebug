//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AUView.h"

@class AUButton, AUExpandAreaButton, UIImageView, UILabel;

@interface AUV2PopContentView : AUView
{
    double _maxWidth;
    long long _style;
    UIImageView *_iconView;
    UILabel *_textLabel;
    AUButton *_button;
    AUExpandAreaButton *_closeButton;
}

@property(retain, nonatomic) AUExpandAreaButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) AUButton *button; // @synthesize button=_button;
@property(retain, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
@property(retain, nonatomic) UIImageView *iconView; // @synthesize iconView=_iconView;
@property(nonatomic) long long style; // @synthesize style=_style;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)updateConstraints;
- (void)setMaxWidth:(double)arg1;
- (id)initCloseBtnWithTitle:(id)arg1 buttonTitle:(id)arg2;
- (id)init;

@end

