//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ZimVerifyFactorDelegate-Protocol.h"

@class NSDate, NSMutableArray, NSString, ZimRemoteLog, ZimVerifyFactor;
@protocol ZIMMsgProxyDelegate;

@interface ZolozIdentityManager : NSObject <ZimVerifyFactorDelegate>
{
    ZimVerifyFactor *_verifyFactor;
    CDUnknownBlockType _bioCallback;
    CDUnknownBlockType _quitCallback;
    _Bool _isBusy;
    _Bool _isKeepAlive;
    ZimRemoteLog *_monitor;
    NSDate *_startTime;
    NSMutableArray *_asynUploadData;
    NSMutableArray *_onTimeUploadData;
    id <ZIMMsgProxyDelegate> _delegate;
}

+ (void)processValidateResult:(_Bool)arg1 forUser:(id)arg2;
+ (void)processValidateResult:(_Bool)arg1 forUser:(id)arg2 andzimID:(id)arg3;
+ (id)version;
+ (id)getMetaInfo;
+ (id)sharedInstance;
@property(nonatomic) __weak id <ZIMMsgProxyDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)uploadAsyncData:(id)arg1;
- (void)handleOntimeUpload;
- (void)handleAsyncUpload;
- (void)cacheAsyncRequest:(id)arg1;
- (void)onFinalize:(_Bool)arg1 andExtinfo:(id)arg2;
- (void)onVerifyResponse:(id)arg1;
- (void)quit:(id)arg1 onCompletion:(CDUnknownBlockType)arg2;
- (_Bool)isStandardModezimID:(id)arg1;
- (void)verifyWith:(id)arg1 extParams:(id)arg2 onCompletion:(CDUnknownBlockType)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

