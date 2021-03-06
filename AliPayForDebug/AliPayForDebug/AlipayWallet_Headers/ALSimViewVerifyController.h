//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "VIViewController.h"

@class ALProgressView, NSDictionary, NSString, NSTimer, UIButton, UILabel, UIScrollView, UIView;

@interface ALSimViewVerifyController : VIViewController
{
    _Bool _isAuthorization;
    _Bool _hasOther;
    _Bool _isSupervised;
    CDUnknownBlockType verifyCallback;
    CDUnknownBlockType verifyResultCallback;
    NSString *_simPdData;
    NSString *_carrierOperatorType;
    UIScrollView *_scrollView;
    UIView *_assistBGView;
    UILabel *_mainLabel;
    UILabel *_subLabel;
    UILabel *_phoneNumberLabel;
    UIButton *_successView;
    UILabel *_tipsLabel;
    ALProgressView *_progress;
    UIButton *_openBtn;
    UILabel *_otherLabel;
    NSDictionary *_serverDataDict;
    NSTimer *_progressTimer;
    NSTimer *_backTimer;
    NSString *_sdkPhoneNo;
    NSString *_mainText;
    NSString *_subText;
    NSString *_tipsText;
    NSString *_btnText;
    NSString *_switchOhterText;
    NSString *_loadingMainText;
    NSString *_loadingSubText;
    NSString *_successMainText;
    NSString *_successSubText;
    NSString *_failMainText;
    NSString *_failSubText;
    NSString *_alertBtnTexts;
    NSString *_helpTitleText;
    NSString *_helpContentText;
    NSString *_helpBtn;
    double _startTime;
    double _verifyTime;
}

@property(nonatomic) double verifyTime; // @synthesize verifyTime=_verifyTime;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(copy, nonatomic) NSString *helpBtn; // @synthesize helpBtn=_helpBtn;
@property(copy, nonatomic) NSString *helpContentText; // @synthesize helpContentText=_helpContentText;
@property(copy, nonatomic) NSString *helpTitleText; // @synthesize helpTitleText=_helpTitleText;
@property(copy, nonatomic) NSString *alertBtnTexts; // @synthesize alertBtnTexts=_alertBtnTexts;
@property(copy, nonatomic) NSString *failSubText; // @synthesize failSubText=_failSubText;
@property(copy, nonatomic) NSString *failMainText; // @synthesize failMainText=_failMainText;
@property(copy, nonatomic) NSString *successSubText; // @synthesize successSubText=_successSubText;
@property(copy, nonatomic) NSString *successMainText; // @synthesize successMainText=_successMainText;
@property(copy, nonatomic) NSString *loadingSubText; // @synthesize loadingSubText=_loadingSubText;
@property(copy, nonatomic) NSString *loadingMainText; // @synthesize loadingMainText=_loadingMainText;
@property(copy, nonatomic) NSString *switchOhterText; // @synthesize switchOhterText=_switchOhterText;
@property(copy, nonatomic) NSString *btnText; // @synthesize btnText=_btnText;
@property(copy, nonatomic) NSString *tipsText; // @synthesize tipsText=_tipsText;
@property(copy, nonatomic) NSString *subText; // @synthesize subText=_subText;
@property(copy, nonatomic) NSString *mainText; // @synthesize mainText=_mainText;
@property(copy, nonatomic) NSString *sdkPhoneNo; // @synthesize sdkPhoneNo=_sdkPhoneNo;
@property(retain, nonatomic) NSTimer *backTimer; // @synthesize backTimer=_backTimer;
@property(retain, nonatomic) NSTimer *progressTimer; // @synthesize progressTimer=_progressTimer;
@property(retain, nonatomic) NSDictionary *serverDataDict; // @synthesize serverDataDict=_serverDataDict;
@property(retain, nonatomic) UILabel *otherLabel; // @synthesize otherLabel=_otherLabel;
@property(retain, nonatomic) UIButton *openBtn; // @synthesize openBtn=_openBtn;
@property(retain, nonatomic) ALProgressView *progress; // @synthesize progress=_progress;
@property(retain, nonatomic) UILabel *tipsLabel; // @synthesize tipsLabel=_tipsLabel;
@property(retain, nonatomic) UIButton *successView; // @synthesize successView=_successView;
@property(retain, nonatomic) UILabel *phoneNumberLabel; // @synthesize phoneNumberLabel=_phoneNumberLabel;
@property(retain, nonatomic) UILabel *subLabel; // @synthesize subLabel=_subLabel;
@property(retain, nonatomic) UILabel *mainLabel; // @synthesize mainLabel=_mainLabel;
@property(retain, nonatomic) UIView *assistBGView; // @synthesize assistBGView=_assistBGView;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(copy, nonatomic) NSString *carrierOperatorType; // @synthesize carrierOperatorType=_carrierOperatorType;
@property(nonatomic) _Bool isSupervised; // @synthesize isSupervised=_isSupervised;
@property(nonatomic) _Bool hasOther; // @synthesize hasOther=_hasOther;
@property(nonatomic) _Bool isAuthorization; // @synthesize isAuthorization=_isAuthorization;
@property(copy, nonatomic) NSString *simPdData; // @synthesize simPdData=_simPdData;
@property(copy, nonatomic) CDUnknownBlockType verifyResultCallback; // @synthesize verifyResultCallback;
@property(copy, nonatomic) CDUnknownBlockType verifyCallback; // @synthesize verifyCallback;
- (void).cxx_destruct;
- (void)destroyTimer;
- (void)back;
- (void)helpHandler;
- (void)updateProgress;
- (void)veriFinish;
- (void)verifyResult:(id)arg1;
- (void)verify;
- (void)otherVerify;
- (void)btnSubmitAction;
- (void)verifySimUpdateUI;
- (void)setupUI;
- (void)initWithParams;
- (void)viewDidLoad;

@end

