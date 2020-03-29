//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "VIModule.h"

#import "UINavigationControllerDelegate-Protocol.h"

@class NSDate, NSDictionary, NSNumber, NSString, UIViewController, VIInternationalPasswordViewController;
@protocol UINavigationControllerDelegate;

@interface VIInternationalPasswordModule : VIModule <UINavigationControllerDelegate>
{
    _Bool _isFindPWDFromCashierSDK;
    _Bool _isFindPWDResultSuccess;
    _Bool _isFindOrSetupPwd;
    _Bool _isFindPwd;
    NSString *_pubKey;
    NSString *_timestamp;
    NSString *_headTitle;
    NSNumber *_halfScreen;
    NSString *_formTitle;
    NSString *_bodyTitle;
    NSString *_placeholderText;
    NSString *_inputType;
    NSNumber *_hasOthers;
    NSString *_footTip;
    NSString *_formInputTipLow;
    NSNumber *_completePPWFlag;
    NSString *_completePPWUrl;
    NSString *_completePPWGuideText;
    NSNumber *_resetPwd;
    NSString *_formButton;
    NSString *_sourceToPwd;
    NSNumber *_isPluginMode;
    NSString *_sourcePluginName;
    NSString *_sceneId;
    NSString *_protocol;
    NSString *_protocolUrl;
    NSString *_pwdTopTip;
    NSString *_forgetPwdUrl;
    NSString *_moduleNameAtSubmission;
    NSDictionary *_extraData;
    UIViewController *_currentNavigationController;
    VIInternationalPasswordViewController *_popupController;
    NSString *_fromType;
    unsigned long long _startTime;
    UIViewController *_topVC;
    id <UINavigationControllerDelegate> _navigationDelegate;
    NSDate *_lastClickTime;
}

+ (id)keyMapper;
@property(retain, nonatomic) NSDate *lastClickTime; // @synthesize lastClickTime=_lastClickTime;
@property(nonatomic) __weak id <UINavigationControllerDelegate> navigationDelegate; // @synthesize navigationDelegate=_navigationDelegate;
@property(retain, nonatomic) UIViewController *topVC; // @synthesize topVC=_topVC;
@property(nonatomic) _Bool isFindPwd; // @synthesize isFindPwd=_isFindPwd;
@property(nonatomic) _Bool isFindOrSetupPwd; // @synthesize isFindOrSetupPwd=_isFindOrSetupPwd;
@property(nonatomic) _Bool isFindPWDResultSuccess; // @synthesize isFindPWDResultSuccess=_isFindPWDResultSuccess;
@property(nonatomic) unsigned long long startTime; // @synthesize startTime=_startTime;
@property(copy, nonatomic) NSString *fromType; // @synthesize fromType=_fromType;
@property(nonatomic) _Bool isFindPWDFromCashierSDK; // @synthesize isFindPWDFromCashierSDK=_isFindPWDFromCashierSDK;
@property(retain, nonatomic) VIInternationalPasswordViewController *popupController; // @synthesize popupController=_popupController;
@property(nonatomic) __weak UIViewController *currentNavigationController; // @synthesize currentNavigationController=_currentNavigationController;
@property(retain, nonatomic) NSDictionary *extraData; // @synthesize extraData=_extraData;
@property(copy, nonatomic) NSString *moduleNameAtSubmission; // @synthesize moduleNameAtSubmission=_moduleNameAtSubmission;
@property(copy, nonatomic) NSString *forgetPwdUrl; // @synthesize forgetPwdUrl=_forgetPwdUrl;
@property(copy, nonatomic) NSString *pwdTopTip; // @synthesize pwdTopTip=_pwdTopTip;
@property(copy, nonatomic) NSString *protocolUrl; // @synthesize protocolUrl=_protocolUrl;
@property(copy, nonatomic) NSString *protocol; // @synthesize protocol=_protocol;
@property(copy, nonatomic) NSString *sceneId; // @synthesize sceneId=_sceneId;
@property(copy, nonatomic) NSString *sourcePluginName; // @synthesize sourcePluginName=_sourcePluginName;
@property(retain, nonatomic) NSNumber *isPluginMode; // @synthesize isPluginMode=_isPluginMode;
@property(copy, nonatomic) NSString *sourceToPwd; // @synthesize sourceToPwd=_sourceToPwd;
@property(copy, nonatomic) NSString *formButton; // @synthesize formButton=_formButton;
@property(retain, nonatomic) NSNumber *resetPwd; // @synthesize resetPwd=_resetPwd;
@property(copy, nonatomic) NSString *completePPWGuideText; // @synthesize completePPWGuideText=_completePPWGuideText;
@property(copy, nonatomic) NSString *completePPWUrl; // @synthesize completePPWUrl=_completePPWUrl;
@property(retain, nonatomic) NSNumber *completePPWFlag; // @synthesize completePPWFlag=_completePPWFlag;
@property(copy, nonatomic) NSString *formInputTipLow; // @synthesize formInputTipLow=_formInputTipLow;
@property(copy, nonatomic) NSString *footTip; // @synthesize footTip=_footTip;
@property(retain, nonatomic) NSNumber *hasOthers; // @synthesize hasOthers=_hasOthers;
@property(copy, nonatomic) NSString *inputType; // @synthesize inputType=_inputType;
@property(copy, nonatomic) NSString *placeholderText; // @synthesize placeholderText=_placeholderText;
@property(copy, nonatomic) NSString *bodyTitle; // @synthesize bodyTitle=_bodyTitle;
@property(copy, nonatomic) NSString *formTitle; // @synthesize formTitle=_formTitle;
@property(retain, nonatomic) NSNumber *halfScreen; // @synthesize halfScreen=_halfScreen;
@property(copy, nonatomic) NSString *headTitle; // @synthesize headTitle=_headTitle;
@property(copy, nonatomic) NSString *timestamp; // @synthesize timestamp=_timestamp;
@property(copy, nonatomic) NSString *pubKey; // @synthesize pubKey=_pubKey;
- (void).cxx_destruct;
- (id)specificVerifyType;
- (void)logForCompletion:(long long)arg1;
- (void)logWithParams:(id)arg1;
- (void)handleFindPPWResultWithResponse:(id)arg1;
- (void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(_Bool)arg3;
- (void)excuteRPCForVerifyFindPPWResult;
- (id)currentPubKey;
- (void)updatePubKey:(id)arg1;
- (void)tryOtherVerificationMethods;
- (void)findPassword;
- (_Bool)isResetPwd;
- (_Bool)canChooseOtherWays;
- (_Bool)canFindPassword;
- (_Bool)isNumericPassword;
- (_Bool)canSetupPPWSelf;
- (_Bool)isUnInterrupt;
- (_Bool)isSupportMultiInstance;
- (_Bool)isPPWExist;
- (void)renderPPWOnNative;
- (id)getRealNumber:(id)arg1;
- (void)logout;
- (void)findPassResult:(id)arg1;
- (void)findPasswdInitForMultiInstanceWithFlag:(_Bool)arg1;
- (_Bool)isFromAlipay;
- (void)leadToSetupPPW;
- (void)setupPPWSelf;
- (void)updateFromType;
- (void)closeAnimated:(_Bool)arg1;
- (void)invokeFindPwdFromCashierSDK:(id)arg1;
- (void)callbackOnMainThreadWithResponse:(id)arg1 animated:(_Bool)arg2;
- (void)moduleWillFinish;
- (void)start;
- (void)invalidate;
- (_Bool)isLiving;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

