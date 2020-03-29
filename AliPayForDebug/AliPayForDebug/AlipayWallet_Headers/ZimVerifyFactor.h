//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class APBAuthEngine, NSMutableDictionary, NSString, UIActivityIndicatorView, UIView, UIViewController, ZimRemoteLog, ZimRpcManager;
@protocol ZimVerifyFactorDelegate;

@interface ZimVerifyFactor : NSObject
{
    NSString *_zimId;
    _Bool _keepUploadingView;
    _Bool _isFastUpload;
    _Bool _isFastInit;
    UIActivityIndicatorView *_progressView;
    UIView *_backGroundView;
    id <ZimVerifyFactorDelegate> _delegate;
    ZimRemoteLog *_monitor;
    ZimRpcManager *_rpcManager;
    APBAuthEngine *_bioAuthEngine;
    NSMutableDictionary *_extInfo;
    UIViewController *_rootVC;
    NSMutableDictionary *_responseExtInfo;
    unsigned long long _factorSatus;
}

@property(nonatomic) unsigned long long factorSatus; // @synthesize factorSatus=_factorSatus;
@property(retain, nonatomic) NSMutableDictionary *responseExtInfo; // @synthesize responseExtInfo=_responseExtInfo;
@property(retain, nonatomic) UIViewController *rootVC; // @synthesize rootVC=_rootVC;
@property(retain, nonatomic) NSMutableDictionary *extInfo; // @synthesize extInfo=_extInfo;
@property(retain, nonatomic) APBAuthEngine *bioAuthEngine; // @synthesize bioAuthEngine=_bioAuthEngine;
@property(retain, nonatomic) ZimRpcManager *rpcManager; // @synthesize rpcManager=_rpcManager;
@property(retain, nonatomic) ZimRemoteLog *monitor; // @synthesize monitor=_monitor;
@property(nonatomic) __weak id <ZimVerifyFactorDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)dictionaryToJson:(id)arg1;
- (void)quitVerifyWith:(id)arg1;
- (void)quitBioAuthEngineAfterVerifywithParams:(id)arg1 andResponse:(id)arg2;
- (void)quitBioAuthEngineWithblock:(CDUnknownBlockType)arg1;
- (void)quitVerifyWithReason:(id)arg1 response:(unsigned long long)arg2 retMessageSub:(id)arg3 retCodeSub:(id)arg4 andBioResultType:(int)arg5;
- (void)handleValidateStatus:(_Bool)arg1 result:(id)arg2 andisNeedCallback:(_Bool)arg3 andCurrentRetryCnt:(id)arg4;
- (void)sendValidateRequestWithInfo:(id)arg1;
- (void)startBioAuthVerifywithProtocol:(id)arg1 andExtInfo:(id)arg2;
- (void)handleInitResponseStatus:(_Bool)arg1 andDetail:(id)arg2;
- (void)startFastInitFastUploadVerify;
- (void)startFastUploadVerify;
- (void)startStandardVerify;
- (void)quit:(id)arg1;
- (void)setZimId:(id)arg1 andExtInfo:(id)arg2;
- (id)init;

@end

