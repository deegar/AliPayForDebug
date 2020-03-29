//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AUView.h"

@class AUIImageView, AULabel, CAGradientLayer, NSDictionary, SUImageView;
@protocol APSocialGTDHeaderViewDelegate;

@interface APSocialGTDHeaderView : AUView
{
    id <APSocialGTDHeaderViewDelegate> _delegate;
    SUImageView *_iconImage;
    AULabel *_titleLabel;
    AULabel *_detailLabel;
    AUIImageView *_accessoryMark;
    CAGradientLayer *_gradientLayer;
    NSDictionary *_templateData;
}

+ (double)defaultHeight;
@property(retain, nonatomic) NSDictionary *templateData; // @synthesize templateData=_templateData;
@property(retain, nonatomic) CAGradientLayer *gradientLayer; // @synthesize gradientLayer=_gradientLayer;
@property(retain, nonatomic) AUIImageView *accessoryMark; // @synthesize accessoryMark=_accessoryMark;
@property(retain, nonatomic) AULabel *detailLabel; // @synthesize detailLabel=_detailLabel;
@property(retain, nonatomic) AULabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) SUImageView *iconImage; // @synthesize iconImage=_iconImage;
@property(nonatomic) __weak id <APSocialGTDHeaderViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)tapOnBackview:(id)arg1;
- (id)placeholderIcon;
- (void)configTemplateData:(id)arg1;
- (_Bool)onlyShowTitle;
- (void)layoutSubviews;
- (void)setupSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

