//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "APSKLaunchpadDelegate-Protocol.h"
#import "O2OCDPAdapterPromotionProtocol-Protocol.h"
#import "OSPKBStarProtocol-Protocol.h"
#import "PromotionCenterDelegate-Protocol.h"

@class APSKLaunchpad, NSArray, NSDictionary, NSString, OPTimeOffsetHelper, OSPExtRateView, OSPGoodsInfoView, OSPInfoPannel, OSPKBPayChannel, OSPKBResultView, OSPKBStarView, OSPMutableLinePanel, UIButton, UIImageView, UILabel, UIScrollView, UIViewController;
@protocol OSPPaySuccActionProtocol;

@interface OSPKBSuccView : UIView <PromotionCenterDelegate, OSPKBStarProtocol, O2OCDPAdapterPromotionProtocol, APSKLaunchpadDelegate>
{
    NSDictionary *_modelData;
    UILabel *resultTips;
    UIImageView *tipsImgView;
    NSArray *oldNavigatorBtns;
    NSArray *oldNavigatorLeftBtns;
    NSString *oldTitle;
    OPTimeOffsetHelper *timeHelper;
    UIScrollView *_scrollView;
    id <OSPPaySuccActionProtocol> _eventDelegate;
    UIViewController *_naviVC;
    UIView *_advertView;
    OSPKBPayChannel *_payPannels;
    OSPKBPayChannel *_preferentialPannels;
    OSPKBResultView *_payResultView;
    UIView *_payResultBgView;
    UIView *_officialAccountsView;
    OSPInfoPannel *_infoPannel;
    UIView *_equityAdView;
    UIButton *_feedbackButton;
    OSPKBStarView *_starView;
    OSPMutableLinePanel *_ratePannel;
    APSKLaunchpad *_sharePad;
    NSString *_shareTitle;
    NSString *_shareDesc;
    NSString *_commentText;
    NSString *_commentObjId;
    OSPGoodsInfoView *_goodsView;
    OSPExtRateView *_extRateView;
}

@property(retain, nonatomic) OSPExtRateView *extRateView; // @synthesize extRateView=_extRateView;
@property(retain, nonatomic) OSPGoodsInfoView *goodsView; // @synthesize goodsView=_goodsView;
@property(copy, nonatomic) NSString *commentObjId; // @synthesize commentObjId=_commentObjId;
@property(copy, nonatomic) NSString *commentText; // @synthesize commentText=_commentText;
@property(copy, nonatomic) NSString *shareDesc; // @synthesize shareDesc=_shareDesc;
@property(copy, nonatomic) NSString *shareTitle; // @synthesize shareTitle=_shareTitle;
@property(retain, nonatomic) APSKLaunchpad *sharePad; // @synthesize sharePad=_sharePad;
@property(retain, nonatomic) OSPMutableLinePanel *ratePannel; // @synthesize ratePannel=_ratePannel;
@property(retain, nonatomic) OSPKBStarView *starView; // @synthesize starView=_starView;
@property(retain, nonatomic) UIButton *feedbackButton; // @synthesize feedbackButton=_feedbackButton;
@property(nonatomic) __weak UIView *equityAdView; // @synthesize equityAdView=_equityAdView;
@property(retain, nonatomic) OSPInfoPannel *infoPannel; // @synthesize infoPannel=_infoPannel;
@property(nonatomic) __weak UIView *officialAccountsView; // @synthesize officialAccountsView=_officialAccountsView;
@property(retain, nonatomic) UIView *payResultBgView; // @synthesize payResultBgView=_payResultBgView;
@property(retain, nonatomic) OSPKBResultView *payResultView; // @synthesize payResultView=_payResultView;
@property(retain, nonatomic) OSPKBPayChannel *preferentialPannels; // @synthesize preferentialPannels=_preferentialPannels;
@property(retain, nonatomic) OSPKBPayChannel *payPannels; // @synthesize payPannels=_payPannels;
@property(nonatomic) __weak UIView *advertView; // @synthesize advertView=_advertView;
@property(nonatomic) __weak UIViewController *naviVC; // @synthesize naviVC=_naviVC;
@property(retain, nonatomic) NSDictionary *modelData; // @synthesize modelData=_modelData;
@property(nonatomic) __weak id <OSPPaySuccActionProtocol> eventDelegate; // @synthesize eventDelegate=_eventDelegate;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
- (void).cxx_destruct;
- (void)onDoReward:(id)arg1;
- (void)doPromotion:(id)arg1;
- (void)onStarViewClick:(id)arg1;
- (id)getShareImage;
- (void)removeAllAlertViews;
- (void)promotionDataDidFinishLoading:(id)arg1 spaceCode:(id)arg2;
- (void)promotionViewDidFinishLoading:(id)arg1 spaceCode:(id)arg2;
- (void)refreshSuccViewForSync;
- (void)shareToChannel:(id)arg1;
- (void)sharingLaunchpad:(id)arg1 didSelectChannel:(id)arg2;
- (void)shareToThird;
- (void)viewWillDestroy;
- (void)dealloc;
- (void)reLayout;
- (void)feedbackProblem;
- (void)showFeedbackButton:(double)arg1;
- (void)displayPromotion:(id)arg1;
- (void)displayADView:(id)arg1 adId:(id)arg2;
- (void)displayOfficialAccount:(id)arg1;
- (void)displayEquityAdView:(id)arg1;
- (void)addEquityAdView:(id)arg1;
- (void)loadADView:(id)arg1 miniPageId:(id)arg2;
- (double)displayRate:(double)arg1;
- (double)displayChannels:(double)arg1 data:(id)arg2;
- (double)dipalayPreferential:(double)arg1 data:(id)arg2;
- (double)displayGoodsInfoView:(double)arg1 data:(id)arg2;
- (id)createBorder:(long long)arg1 yPos:(double)arg2;
- (double)dispayPayResult;
- (_Bool)obj2Bool:(id)arg1;
- (double)displayGoodsInfo:(double)arg1;
- (void)setData:(id)arg1;
- (void)createSubViews;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithFrameNoNaviRBtn:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

