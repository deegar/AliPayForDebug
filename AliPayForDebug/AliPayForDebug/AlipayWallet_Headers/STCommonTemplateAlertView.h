//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BEECustomAlertView.h"

#import "STGuideViewDelegate-Protocol.h"
#import "STReportViewDelegate-Protocol.h"

@class NSDictionary, NSString, STShareGuideView, ShareTokenData, UIButton, UIImage, UIView, mobilecodecShareCodeTemplateInfoPB;

@interface STCommonTemplateAlertView : BEECustomAlertView <STGuideViewDelegate, STReportViewDelegate>
{
    _Bool _showReport;
    mobilecodecShareCodeTemplateInfoPB *_templateInfo;
    ShareTokenData *_shareData;
    NSDictionary *_handleInfo;
    NSString *_reportBtnText;
    UIView *_customView;
    UIView *_handleCustomView;
    UIView *_shareCustomView;
    UIButton *_closeBtn;
    STShareGuideView *_shareGuideView;
    UIView *_saveBottomView;
    UIView *_recallGuideView;
    UIImage *_topImage;
    UIImage *_qrImage;
    UIImage *_saveGuideImage;
    CDUnknownBlockType _closeAction;
    CDUnknownBlockType _shareAction;
    CDUnknownBlockType _handleAction;
    CDUnknownBlockType _reportAction;
}

@property(copy, nonatomic) CDUnknownBlockType reportAction; // @synthesize reportAction=_reportAction;
@property(copy, nonatomic) CDUnknownBlockType handleAction; // @synthesize handleAction=_handleAction;
@property(copy, nonatomic) CDUnknownBlockType shareAction; // @synthesize shareAction=_shareAction;
@property(copy, nonatomic) CDUnknownBlockType closeAction; // @synthesize closeAction=_closeAction;
@property(retain, nonatomic) UIImage *saveGuideImage; // @synthesize saveGuideImage=_saveGuideImage;
@property(retain, nonatomic) UIImage *qrImage; // @synthesize qrImage=_qrImage;
@property(retain, nonatomic) UIImage *topImage; // @synthesize topImage=_topImage;
@property(retain, nonatomic) UIView *recallGuideView; // @synthesize recallGuideView=_recallGuideView;
@property(retain, nonatomic) UIView *saveBottomView; // @synthesize saveBottomView=_saveBottomView;
@property(retain, nonatomic) STShareGuideView *shareGuideView; // @synthesize shareGuideView=_shareGuideView;
@property(retain, nonatomic) UIButton *closeBtn; // @synthesize closeBtn=_closeBtn;
@property(retain, nonatomic) UIView *shareCustomView; // @synthesize shareCustomView=_shareCustomView;
@property(retain, nonatomic) UIView *handleCustomView; // @synthesize handleCustomView=_handleCustomView;
@property(retain, nonatomic) UIView *customView; // @synthesize customView=_customView;
@property(retain, nonatomic) NSString *reportBtnText; // @synthesize reportBtnText=_reportBtnText;
@property(nonatomic) _Bool showReport; // @synthesize showReport=_showReport;
@property(retain, nonatomic) NSDictionary *handleInfo; // @synthesize handleInfo=_handleInfo;
@property(retain, nonatomic) ShareTokenData *shareData; // @synthesize shareData=_shareData;
@property(retain, nonatomic) mobilecodecShareCodeTemplateInfoPB *templateInfo; // @synthesize templateInfo=_templateInfo;
- (void).cxx_destruct;
- (void)reportButtonClicked;
- (void)actionButtonClicked;
- (void)setReportEvent:(CDUnknownBlockType)arg1;
- (void)setHandleEvent:(CDUnknownBlockType)arg1;
- (void)setShareEvent:(CDUnknownBlockType)arg1;
- (void)setCloseEvent:(CDUnknownBlockType)arg1;
- (id)generageSavedImage;
- (void)actionBtnClicked:(id)arg1;
- (void)closeBtnClicked:(id)arg1;
- (void)adjustContainerView;
- (id)initWithHandleInfos:(id)arg1 topImage:(id)arg2 showReport:(_Bool)arg3 reportBtnText:(id)arg4;
- (id)initWithTemplateInfo:(id)arg1 shareData:(id)arg2 topImage:(id)arg3 qrImage:(id)arg4 saveGuideImage:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

