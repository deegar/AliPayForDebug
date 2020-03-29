//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIActivityIndicatorView, UIControl, UIImage, UIImageView, UILabel;

@interface AFWFinancePotNaviTitleView : UIView
{
    _Bool _canShowRightIconWhenSubTitleIsWhitespace;
    _Bool _rightIconIsDown;
    _Bool _isAnimating;
    double _mainTitleFontSize;
    double _subTitleFontSize;
    UIControl *_mainTitleContentView;
    UILabel *_mainTitleLabel;
    UIControl *_subtitleContentView;
    UILabel *_subtitleLabel;
    UIActivityIndicatorView *_indicatorView;
    double _indicatorWidth;
    UIControl *_rightIconContentView;
    UIImageView *_rightIconImgV;
    UIImage *_rightIconImage;
    double _rightIconWidth;
    double _paddingLeft;
    double _paddingRight;
}

@property(nonatomic) double paddingRight; // @synthesize paddingRight=_paddingRight;
@property(nonatomic) double paddingLeft; // @synthesize paddingLeft=_paddingLeft;
@property(nonatomic) _Bool isAnimating; // @synthesize isAnimating=_isAnimating;
@property(nonatomic) _Bool rightIconIsDown; // @synthesize rightIconIsDown=_rightIconIsDown;
@property(nonatomic) _Bool canShowRightIconWhenSubTitleIsWhitespace; // @synthesize canShowRightIconWhenSubTitleIsWhitespace=_canShowRightIconWhenSubTitleIsWhitespace;
@property(nonatomic) double rightIconWidth; // @synthesize rightIconWidth=_rightIconWidth;
@property(retain, nonatomic) UIImage *rightIconImage; // @synthesize rightIconImage=_rightIconImage;
@property(retain, nonatomic) UIImageView *rightIconImgV; // @synthesize rightIconImgV=_rightIconImgV;
@property(retain, nonatomic) UIControl *rightIconContentView; // @synthesize rightIconContentView=_rightIconContentView;
@property(nonatomic) double indicatorWidth; // @synthesize indicatorWidth=_indicatorWidth;
@property(retain, nonatomic) UIActivityIndicatorView *indicatorView; // @synthesize indicatorView=_indicatorView;
@property(retain, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) UIControl *subtitleContentView; // @synthesize subtitleContentView=_subtitleContentView;
@property(retain, nonatomic) UILabel *mainTitleLabel; // @synthesize mainTitleLabel=_mainTitleLabel;
@property(retain, nonatomic) UIControl *mainTitleContentView; // @synthesize mainTitleContentView=_mainTitleContentView;
@property(nonatomic) double subTitleFontSize; // @synthesize subTitleFontSize=_subTitleFontSize;
@property(nonatomic) double mainTitleFontSize; // @synthesize mainTitleFontSize=_mainTitleFontSize;
- (void).cxx_destruct;
- (id)rightIconImageView;
- (void)hideTitleLoading;
- (void)showTitleLoading;
- (void)setMainTitle:(id)arg1 subtitle:(id)arg2;
- (void)setTitleViewAlpha:(float)arg1;
- (void)setTitleColor:(id)arg1;
- (void)setSubTitle:(id)arg1;
- (void)setMainTitle:(id)arg1;
- (void)stopLoading;
- (void)startLoading;
- (id)subtitle;
- (id)mainTitle;
- (void)setSubTitleBgColor:(id)arg1;
- (void)setSubTitleTextColor:(id)arg1;
- (void)setSubTitleFont:(id)arg1;
- (void)setMainTitleBgColor:(id)arg1;
- (void)setMainTitleTextColor:(id)arg1;
- (void)setMainTitleFont:(id)arg1;
- (void)doAnimationRightIcon:(_Bool)arg1;
- (void)layoutSubviews;
- (void)setFrame:(struct CGRect)arg1;
- (void)createSubViews;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

@end

