//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@class APRecentContact, MFAttributeLabel, MPBadgeView, NSDate, NSString, SUImageView, UIImageView, UIView;

@interface APRecentNewTopButton : UIButton
{
    UIView *_lineTmpView;
    _Bool _enableIconCorner;
    _Bool _isAnimating;
    _Bool _effect2DidFinish;
    SUImageView *_showImageView;
    MPBadgeView *_showRedBadgeImgView;
    MFAttributeLabel *_showTitleLabel;
    MFAttributeLabel *_showSubTitleLabel;
    MFAttributeLabel *_secondaryLabel;
    APRecentContact *_recentItem;
    SUImageView *_bizImageView;
    double _iconCorner;
    UIView *_lineView;
    long long _indexButton;
    NSDate *_effectDate;
    NSString *_effectIconID;
    UIImageView *_animationView;
}

+ (double)getImageWidth;
@property(nonatomic) _Bool effect2DidFinish; // @synthesize effect2DidFinish=_effect2DidFinish;
@property(retain, nonatomic) UIImageView *animationView; // @synthesize animationView=_animationView;
@property(retain, nonatomic) NSString *effectIconID; // @synthesize effectIconID=_effectIconID;
@property(retain, nonatomic) NSDate *effectDate; // @synthesize effectDate=_effectDate;
@property(nonatomic) _Bool isAnimating; // @synthesize isAnimating=_isAnimating;
@property(nonatomic) long long indexButton; // @synthesize indexButton=_indexButton;
@property(nonatomic) _Bool enableIconCorner; // @synthesize enableIconCorner=_enableIconCorner;
@property(retain, nonatomic) UIView *lineView; // @synthesize lineView=_lineView;
@property(nonatomic) double iconCorner; // @synthesize iconCorner=_iconCorner;
@property(retain, nonatomic) SUImageView *bizImageView; // @synthesize bizImageView=_bizImageView;
@property(retain, nonatomic) APRecentContact *recentItem; // @synthesize recentItem=_recentItem;
@property(retain, nonatomic) MFAttributeLabel *secondaryLabel; // @synthesize secondaryLabel=_secondaryLabel;
@property(retain, nonatomic) MFAttributeLabel *showSubTitleLabel; // @synthesize showSubTitleLabel=_showSubTitleLabel;
@property(retain, nonatomic) MFAttributeLabel *showTitleLabel; // @synthesize showTitleLabel=_showTitleLabel;
@property(retain, nonatomic) MPBadgeView *showRedBadgeImgView; // @synthesize showRedBadgeImgView=_showRedBadgeImgView;
@property(retain, nonatomic) SUImageView *showImageView; // @synthesize showImageView=_showImageView;
- (void).cxx_destruct;
- (id)checkSubTitleStrWithContact:(id)arg1;
- (id)checkRedBadgeViewWithContact:(id)arg1;
- (_Bool)IsChineseOrPunct:(id)arg1;
- (id)refreshSubTitleLabel;
- (void)refreshButtonData:(id)arg1 shouldSync:(_Bool)arg2;
- (void)refreshIconImage:(id)arg1 shouldSync:(_Bool)arg2;
- (void)setupSubViews;
- (double)getSubTitleLabelFont;
- (double)getTitleLabelFont;
- (id)initWithFrame:(struct CGRect)arg1;

@end

