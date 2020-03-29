//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "APSKLaunchpadDelegate-Protocol.h"

@class APSKClient, APSKLaunchpad, MOBILECSAShareChannelInfo, NSDictionary, NSString, O2OMerchantAlertResultManager, O2OMerchantShortLinkModel, UIView;

@interface O2OShareManager : NSObject <APSKLaunchpadDelegate>
{
    NSString *_selectChannel;
    NSObject *_vc;
    _Bool _isShowing;
    MOBILECSAShareChannelInfo *_channelInfo;
    O2OMerchantShortLinkModel *_shortLinkModel;
    NSString *_shopId;
    O2OMerchantAlertResultManager *_alertResultManager;
    APSKLaunchpad *_launchPad;
    APSKClient *_shareClient;
    UIView *_targetView;
    NSString *_receiverUserType;
    NSString *_receiverId;
    NSDictionary *_shareDic;
    NSString *_skin;
}

+ (id)channelEnumToName:(id)arg1;
+ (void)share:(id)arg1 toALPContact:(id)arg2 targetType:(id)arg3 skin:(id)arg4 completion:(CDUnknownBlockType)arg5;
@property(retain, nonatomic) NSString *skin; // @synthesize skin=_skin;
@property(retain, nonatomic) NSDictionary *shareDic; // @synthesize shareDic=_shareDic;
@property(retain, nonatomic) NSString *receiverId; // @synthesize receiverId=_receiverId;
@property(retain, nonatomic) NSString *receiverUserType; // @synthesize receiverUserType=_receiverUserType;
@property(nonatomic) __weak UIView *targetView; // @synthesize targetView=_targetView;
@property(nonatomic) _Bool isShowing; // @synthesize isShowing=_isShowing;
@property(retain, nonatomic) APSKClient *shareClient; // @synthesize shareClient=_shareClient;
@property(retain, nonatomic) APSKLaunchpad *launchPad; // @synthesize launchPad=_launchPad;
@property(retain, nonatomic) O2OMerchantAlertResultManager *alertResultManager; // @synthesize alertResultManager=_alertResultManager;
@property(retain, nonatomic) NSString *shopId; // @synthesize shopId=_shopId;
@property(retain, nonatomic) O2OMerchantShortLinkModel *shortLinkModel; // @synthesize shortLinkModel=_shortLinkModel;
@property(retain, nonatomic) MOBILECSAShareChannelInfo *channelInfo; // @synthesize channelInfo=_channelInfo;
- (void).cxx_destruct;
- (void)queryLink:(id)arg1;
- (id)getDicFromData:(id)arg1 shopId:(id)arg2;
- (void)toastShareResult:(_Bool)arg1;
- (void)share2ALPContact:(id)arg1;
- (void)share2ALPTimeLine:(id)arg1 title:(id)arg2 channelName:(id)arg3;
- (_Bool)shareWithoutDownloadImage:(id)arg1 desc:(id)arg2 targetUrl:(id)arg3 channel:(id)arg4 logo:(id)arg5 preContent:(id)arg6 endContent:(id)arg7;
- (void)shareImageUrl:(id)arg1 title:(id)arg2 desc:(id)arg3 targetUrl:(id)arg4 channel:(id)arg5;
- (void)downloadImageFinish:(id)arg1 channel:(id)arg2;
- (void)sharingLaunchpadDidCancel:(id)arg1;
- (void)sharingLaunchpad:(id)arg1 didSelectChannel:(id)arg2 writeLog:(_Bool)arg3;
- (void)sharingLaunchpad:(id)arg1 didSelectChannel:(id)arg2;
- (void)showViewIn:(id)arg1 data:(id)arg2 vc:(id)arg3;
- (id)initWithShopId:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

