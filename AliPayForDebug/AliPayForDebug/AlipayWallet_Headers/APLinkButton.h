//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

@class NSMutableDictionary, NSString, UIColor, UILabel;

@interface APLinkButton : UIControl
{
    _Bool _underline;
    UILabel *_titleLabel;
    UIColor *_normalColor;
    UIColor *_highlightedColor;
    UIColor *_selectedColor;
    NSMutableDictionary *_attrs;
}

@property(retain, nonatomic) NSMutableDictionary *attrs; // @synthesize attrs=_attrs;
@property(retain, nonatomic) UIColor *selectedColor; // @synthesize selectedColor=_selectedColor;
@property(retain, nonatomic) UIColor *highlightedColor; // @synthesize highlightedColor=_highlightedColor;
@property(retain, nonatomic) UIColor *normalColor; // @synthesize normalColor=_normalColor;
@property(nonatomic) _Bool underline; // @synthesize underline=_underline;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)drawUnderlineInRect:(struct CGRect)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)sizeToFit;
- (void)layoutSubviews;
- (void)cancelTrackingWithEvent:(id)arg1;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (_Bool)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (id)titleColorForState:(unsigned long long)arg1;
- (void)setTitleColor:(id)arg1 forState:(unsigned long long)arg2;
@property(retain, nonatomic) NSString *title; // @dynamic title;
- (void)commonInit;
- (id)init;
- (id)initWithFrame:(struct CGRect)arg1;

@end

