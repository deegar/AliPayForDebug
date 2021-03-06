//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "APFinanceChannelViewDelegate-Protocol.h"
#import "APRewardIntegrationDelegate-Protocol.h"
#import "TLRewardAPIDelegate-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"

@class APFinanceChannelView, APRewardIntegration, GetConsultBizChannelRespPB, NSDictionary, NSString, TLRewardAPI, TTTAttributedLabel, UIButton, UIImageView, UILabel, UITextField, UIView;
@protocol TLRewardOptionUIDelegate;

@interface TLRewardOptionUI : NSObject <UITextFieldDelegate, TLRewardAPIDelegate, APFinanceChannelViewDelegate, APRewardIntegrationDelegate>
{
    UIView *_rewardOptionContainer;
    UIView *_rewardOptionOperationView;
    UIImageView *_feedPublicherHeadView;
    UIImageView *_feedPublisherGenderView;
    UIView *_amountInputContainer;
    UIView *_lineView;
    UILabel *_rewardTipLabel;
    UILabel *_rewardAltLabel;
    TTTAttributedLabel *_rewardAmountLabel;
    UIButton *_refreshButton;
    UIButton *_otherAmountBtn;
    UIButton *_randomAmountBtn;
    UILabel *_rewardOverflowLabel;
    UIButton *_rewardSubmitBtn;
    UIImageView *_closeImgView;
    UITextField *_amountInput;
    APFinanceChannelView *_financeView;
    UILabel *_placeLabel;
    _Bool _keyboardVisible;
    _Bool _IS_RANDOM;
    id <TLRewardOptionUIDelegate> _delegate;
    TLRewardAPI *_optionImpl;
    APRewardIntegration *_payIntegrationApI;
    NSString *_sourceType;
    NSString *_targetId;
    NSString *_seceneId;
    NSDictionary *_settingDicInfo;
    NSString *_clientId;
    NSDictionary *_extDic;
    GetConsultBizChannelRespPB *_channelRes;
    NSString *_randomMaxPay;
}

+ (void)initialize;
@property _Bool IS_RANDOM; // @synthesize IS_RANDOM=_IS_RANDOM;
@property(retain, nonatomic) NSString *randomMaxPay; // @synthesize randomMaxPay=_randomMaxPay;
@property(retain, nonatomic) GetConsultBizChannelRespPB *channelRes; // @synthesize channelRes=_channelRes;
@property(retain, nonatomic) NSDictionary *extDic; // @synthesize extDic=_extDic;
@property(retain, nonatomic) NSString *clientId; // @synthesize clientId=_clientId;
@property(retain, nonatomic) NSDictionary *settingDicInfo; // @synthesize settingDicInfo=_settingDicInfo;
@property(retain, nonatomic) NSString *seceneId; // @synthesize seceneId=_seceneId;
@property(retain, nonatomic) NSString *targetId; // @synthesize targetId=_targetId;
@property(nonatomic) _Bool keyboardVisible; // @synthesize keyboardVisible=_keyboardVisible;
@property(retain, nonatomic) NSString *sourceType; // @synthesize sourceType=_sourceType;
@property(retain, nonatomic) APRewardIntegration *payIntegrationApI; // @synthesize payIntegrationApI=_payIntegrationApI;
@property(retain, nonatomic) TLRewardAPI *optionImpl; // @synthesize optionImpl=_optionImpl;
@property(nonatomic) __weak id <TLRewardOptionUIDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)closeRewardUI;
- (void)rewardRespond:(id)arg1 resStatus:(id)arg2 errorMsg:(id)arg3;
- (_Bool)rewardAPIToThirdServer:(id)arg1 rewardType:(id)arg2 priceStr:(id)arg3 extDic:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)rewardPrivateRespond:(id)arg1 sourceType:(id)arg2 resStatus:(id)arg3 errorMsg:(id)arg4;
- (void)removeAppStartNoti;
- (void)handleAppStartNoti:(id)arg1;
- (void)registerAppStartNoti;
- (id)getCurrentPayAmount;
- (id)mbLoadingView;
- (void)backToCurrentChannel:(id)arg1;
- (void)logoutNotify;
- (void)miniPayExit;
- (int)amountInputRealMax;
- (id)mpayIntegrationApI;
- (id)mOptionImpl;
- (id)rewardAmount;
- (_Bool)amountInputValid;
- (void)amountInputChanged;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (_Bool)textFieldShouldClear:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)clear;
- (void)doReward;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (id)getRewardRandom;
- (double)getOperationViewWidth;
- (void)setRewardAmount:(id)arg1;
- (void)clearInputViews;
- (void)onShowRandomAmount:(id)arg1;
- (void)onRefreshAmount:(id)arg1;
- (void)setup_rewardSubmitBtn;
- (void)setup_otherAmountBtn;
- (void)setup_rewardRandom;
- (void)setup_feedPublisherGenderView;
- (void)setup_headIcon;
- (void)setup_rewardOptionOperationView;
- (void)setupClose;
- (void)makeRewardUIandShow;
- (void)config;
- (double)buildAltPayTip:(double)arg1;
- (void)enterAmount:(id)arg1;
- (id)showInView;
- (id)rewardRandomAmount;
- (void)closeRewardUI:(id)arg1;
- (void)closeRewardFeed;
- (void)showRewardFeed;
- (void)initRewardUI;
- (void)rewardToSomeOneWithUI:(id)arg1 rewardType:(id)arg2 extDic:(id)arg3;
- (void)dealloc;
- (id)initWithRewardOptionDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

