//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class AlipayLifeHomeModel, AlipayLifeTagImageView, AlipayLifeTopicItemView, NSString, UILabel;

@interface AlipayLifeHotTopicView : UIView
{
    AlipayLifeHomeModel *_homeModel;
    NSString *_template;
    UILabel *_labelTitle;
    UILabel *_labelMore;
    UIView *_themeView;
    AlipayLifeTagImageView *_themeView1;
    AlipayLifeTagImageView *_themeView2;
    AlipayLifeTagImageView *_themeView3;
    UIView *_lineView;
    AlipayLifeTopicItemView *_labelLeftTop;
    AlipayLifeTopicItemView *_labelLeftBottom;
    AlipayLifeTopicItemView *_labelRightTop;
    AlipayLifeTopicItemView *_labelRightBottom;
}

@property(retain, nonatomic) AlipayLifeTopicItemView *labelRightBottom; // @synthesize labelRightBottom=_labelRightBottom;
@property(retain, nonatomic) AlipayLifeTopicItemView *labelRightTop; // @synthesize labelRightTop=_labelRightTop;
@property(retain, nonatomic) AlipayLifeTopicItemView *labelLeftBottom; // @synthesize labelLeftBottom=_labelLeftBottom;
@property(retain, nonatomic) AlipayLifeTopicItemView *labelLeftTop; // @synthesize labelLeftTop=_labelLeftTop;
@property(retain, nonatomic) UIView *lineView; // @synthesize lineView=_lineView;
@property(retain, nonatomic) AlipayLifeTagImageView *themeView3; // @synthesize themeView3=_themeView3;
@property(retain, nonatomic) AlipayLifeTagImageView *themeView2; // @synthesize themeView2=_themeView2;
@property(retain, nonatomic) AlipayLifeTagImageView *themeView1; // @synthesize themeView1=_themeView1;
@property(retain, nonatomic) UIView *themeView; // @synthesize themeView=_themeView;
@property(retain, nonatomic) UILabel *labelMore; // @synthesize labelMore=_labelMore;
@property(retain, nonatomic) UILabel *labelTitle; // @synthesize labelTitle=_labelTitle;
@property(retain, nonatomic) NSString *template; // @synthesize template=_template;
@property(retain, nonatomic) AlipayLifeHomeModel *homeModel; // @synthesize homeModel=_homeModel;
- (void).cxx_destruct;
- (id)actionUrl:(long long)arg1;
- (void)openUrl:(long long)arg1;
- (void)onClickLabel4;
- (void)onClickLabel3;
- (void)onClickLabel2;
- (void)onClickLabel1;
- (void)onClickTheme3;
- (void)onClickTheme2;
- (void)onClickTheme1;
- (void)onClickMore;
- (void)setThemeModel:(id)arg1;

@end

