//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class AUBadgeView, AUNavItemView, BeeLottieView, FHNavigationIconButton, FHNavigationPopTipControl, FHNavigationTemplate, FHWeeklyProfitControl, LOTAnimationView, NSMutableDictionary, NSMutableSet, NSString, UILabel;
@protocol FHTemplateClickDelegate;

@interface FHNavigationView : UIView
{
    _Bool _viewIsShowing;
    _Bool _popTipDisplayed;
    _Bool _animating;
    UIView *_contentView;
    UILabel *_titleLabel;
    FHNavigationIconButton *_iconBtn;
    AUNavItemView *_searchItemView;
    UIView *_rightItemView;
    FHNavigationPopTipControl *_popTipControl;
    AUBadgeView *_redPoint;
    LOTAnimationView *_lottieAnimation;
    id <FHTemplateClickDelegate> _clickDelegate;
    NSString *_defaultFollowAction;
    NSString *_mockMarkFollowAction;
    NSMutableDictionary *_exposureMutDic;
    NSMutableDictionary *_exposureMarkMutDic;
    NSMutableSet *_poppedTips;
    FHNavigationTemplate *_holdedData;
    FHWeeklyProfitControl *_weeklyBtn;
    AUBadgeView *_weeklyRedPoint;
    BeeLottieView *_weeklyLottieview;
    NSMutableSet *_playedLotties;
}

@property(retain, nonatomic) NSMutableSet *playedLotties; // @synthesize playedLotties=_playedLotties;
@property(retain, nonatomic) BeeLottieView *weeklyLottieview; // @synthesize weeklyLottieview=_weeklyLottieview;
@property(retain, nonatomic) AUBadgeView *weeklyRedPoint; // @synthesize weeklyRedPoint=_weeklyRedPoint;
@property(retain, nonatomic) FHWeeklyProfitControl *weeklyBtn; // @synthesize weeklyBtn=_weeklyBtn;
@property(retain, nonatomic) FHNavigationTemplate *holdedData; // @synthesize holdedData=_holdedData;
@property(retain, nonatomic) NSMutableSet *poppedTips; // @synthesize poppedTips=_poppedTips;
@property(nonatomic) _Bool animating; // @synthesize animating=_animating;
@property(retain, nonatomic) NSMutableDictionary *exposureMarkMutDic; // @synthesize exposureMarkMutDic=_exposureMarkMutDic;
@property(retain, nonatomic) NSMutableDictionary *exposureMutDic; // @synthesize exposureMutDic=_exposureMutDic;
@property(nonatomic) _Bool popTipDisplayed; // @synthesize popTipDisplayed=_popTipDisplayed;
@property(copy, nonatomic) NSString *mockMarkFollowAction; // @synthesize mockMarkFollowAction=_mockMarkFollowAction;
@property(copy, nonatomic) NSString *defaultFollowAction; // @synthesize defaultFollowAction=_defaultFollowAction;
@property(nonatomic) __weak id <FHTemplateClickDelegate> clickDelegate; // @synthesize clickDelegate=_clickDelegate;
@property(retain, nonatomic) LOTAnimationView *lottieAnimation; // @synthesize lottieAnimation=_lottieAnimation;
@property(retain, nonatomic) AUBadgeView *redPoint; // @synthesize redPoint=_redPoint;
@property(retain, nonatomic) FHNavigationPopTipControl *popTipControl; // @synthesize popTipControl=_popTipControl;
@property(retain, nonatomic) UIView *rightItemView; // @synthesize rightItemView=_rightItemView;
@property(retain, nonatomic) AUNavItemView *searchItemView; // @synthesize searchItemView=_searchItemView;
@property(retain, nonatomic) FHNavigationIconButton *iconBtn; // @synthesize iconBtn=_iconBtn;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) _Bool viewIsShowing; // @synthesize viewIsShowing=_viewIsShowing;
- (void).cxx_destruct;
- (id)iconBtnFollowAction:(id)arg1;
- (void)recordExposureMark:(id)arg1;
- (void)recordExposureView:(id)arg1;
- (void)resetExposureStatus;
- (void)evaluateExposure;
- (id)reportMarkExposure;
- (id)reportExposure;
- (void)onSearchItemClicked;
- (void)onClicked:(id)arg1;
- (void)popTipViewClicked;
- (void)iconBtnClicked;
- (void)lanuageDidChange;
- (void)handlePopTipWithData:(id)arg1;
- (void)handleData:(id)arg1;
- (void)handleData:(id)arg1 weeklyData:(id)arg2;
- (void)layoutSubviews;
- (id)initWithClickDelegate:(id)arg1;
- (void)clearWeeklyProfitData;
- (void)weeklyBtnClicked;
- (void)prepareToPlayLottie:(id)arg1;
- (void)updateWeeklyLotttieView:(id)arg1 params:(id)arg2;
- (void)showWeeklyRedPoint;
- (void)handleWeeklyData:(id)arg1;

@end

