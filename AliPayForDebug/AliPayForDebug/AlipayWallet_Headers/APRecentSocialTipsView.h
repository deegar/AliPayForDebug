//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, SUImageView, UIImageView, UILabel, UITapGestureRecognizer;
@protocol APRecentSocialTipsViewDelegate;

@interface APRecentSocialTipsView : UIView
{
    id <APRecentSocialTipsViewDelegate> _delegate;
    NSString *_icon;
    SUImageView *_iconView;
    NSString *_title;
    UILabel *_titleLabel;
    NSString *_url;
    UIImageView *_arrawView;
    UIView *_socialTipsView;
    UITapGestureRecognizer *_tapPress;
}

@property(retain, nonatomic) UITapGestureRecognizer *tapPress; // @synthesize tapPress=_tapPress;
@property(retain, nonatomic) UIView *socialTipsView; // @synthesize socialTipsView=_socialTipsView;
@property(retain, nonatomic) UIImageView *arrawView; // @synthesize arrawView=_arrawView;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) SUImageView *iconView; // @synthesize iconView=_iconView;
@property(retain, nonatomic) NSString *icon; // @synthesize icon=_icon;
@property(nonatomic) __weak id <APRecentSocialTipsViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)tapSocialTips;
- (void)layoutSubviews;
- (void)updateSubviews;
- (void)updateWithData:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

