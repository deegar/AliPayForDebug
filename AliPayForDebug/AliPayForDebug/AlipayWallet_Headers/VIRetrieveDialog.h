//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "VIBaseComponent.h"

@class NSDictionary, UIButton, UIImageView, UILabel, UIView;

@interface VIRetrieveDialog : VIBaseComponent
{
    _Bool _isShowImageView;
    _Bool _isShowMainTitleView;
    _Bool _isShowCloseBtn;
    _Bool _isBlueBtnStyle;
    _Bool _hasOthers;
    UIButton *_closeBtn;
    UIImageView *_imageContent;
    UIView *_btnContent;
    UILabel *_mainTitleLabel;
    UILabel *_subTitleLabel;
    NSDictionary *_renderDict;
    NSDictionary *_modalDict;
}

@property(nonatomic) _Bool hasOthers; // @synthesize hasOthers=_hasOthers;
@property(nonatomic) _Bool isBlueBtnStyle; // @synthesize isBlueBtnStyle=_isBlueBtnStyle;
@property(nonatomic) _Bool isShowCloseBtn; // @synthesize isShowCloseBtn=_isShowCloseBtn;
@property(nonatomic) _Bool isShowMainTitleView; // @synthesize isShowMainTitleView=_isShowMainTitleView;
@property(nonatomic) _Bool isShowImageView; // @synthesize isShowImageView=_isShowImageView;
@property(retain, nonatomic) NSDictionary *modalDict; // @synthesize modalDict=_modalDict;
@property(retain, nonatomic) NSDictionary *renderDict; // @synthesize renderDict=_renderDict;
@property(retain, nonatomic) UILabel *subTitleLabel; // @synthesize subTitleLabel=_subTitleLabel;
@property(retain, nonatomic) UILabel *mainTitleLabel; // @synthesize mainTitleLabel=_mainTitleLabel;
@property(retain, nonatomic) UIView *btnContent; // @synthesize btnContent=_btnContent;
@property(retain, nonatomic) UIImageView *imageContent; // @synthesize imageContent=_imageContent;
@property(retain, nonatomic) UIButton *closeBtn; // @synthesize closeBtn=_closeBtn;
- (void).cxx_destruct;
- (id)getLogParamsWithAciton:(id)arg1;
- (void)onCloseButtonClicked;
- (void)onRightButtonClicked;
- (void)onLeftButtonClicked;
- (int)getImageContentType;
- (void)setUpCloseBtn;
- (void)setUpNoColorBtnWithCount:(long long)arg1;
- (void)replaceRenderActionWithKey:(id)arg1 action:(id)arg2;
- (_Bool)needReplaceOthersBtn;
- (void)setUpBlueBtn;
- (void)setUpButtonContent;
- (void)setUpSubTitle;
- (void)setUpMainTitle;
- (void)setUpImageContent;
- (_Bool)showCloseBtn;
- (_Bool)showMainTitle;
- (_Bool)showImage;
- (void)updateSubViews;
- (void)updateFrameWithParams:(id)arg1;
- (void)initSubViews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

