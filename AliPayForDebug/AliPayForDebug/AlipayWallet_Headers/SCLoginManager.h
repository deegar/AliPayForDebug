//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSOperationQueue, NSString, SAUserInfo;

@interface SCLoginManager : NSObject
{
    _Bool _shouldBlockStartingLoginApp;
    _Bool _isBlockAutoLogin;
    NSString *_lastUserId;
    NSOperationQueue *_operationQueue;
}

+ (id)sharedInstance;
@property _Bool isBlockAutoLogin; // @synthesize isBlockAutoLogin=_isBlockAutoLogin;
@property(retain, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(nonatomic) _Bool shouldBlockStartingLoginApp; // @synthesize shouldBlockStartingLoginApp=_shouldBlockStartingLoginApp;
@property(copy, nonatomic) NSString *lastUserId; // @synthesize lastUserId=_lastUserId;
- (void).cxx_destruct;
- (void)dumpOperationQueue;
- (id)pendingBackgroundLoginOperation;
- (_Bool)hasPendingBackgroundLoginOperation;
- (id)pendingForegroundLoginOperation;
- (id)pendingPureForegroundOperation;
- (void)cancelOperationsBeforeOperation:(id)arg1;
- (void)cancelPendingAutoLoginOperation;
- (void)onLoginSuccess;
- (void)doPostLoginNotification:(id)arg1 deviceNotification:(id)arg2;
- (void)postLoginSuccessNotification:(_Bool)arg1;
- (void)postLoginNotification:(_Bool)arg1 isWithoutPwd:(_Bool)arg2 loginResult:(id)arg3;
- (void)postLoginNotification:(_Bool)arg1 isWithoutPwd:(_Bool)arg2;
- (void)updateUserInfoHasQueryPassword;
- (void)supplyPasswordWithResult:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)beforeNotifyLoginSuccessWithResult:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)refreshOperationQueue:(id)arg1;
@property(readonly, nonatomic) SAUserInfo *currentUser;
- (id)loginForegroundSync:(id)arg1;
- (id)loginForegroundAsync:(id)arg1 onComplete:(CDUnknownBlockType)arg2;
- (id)loginPureForegroundSync:(id)arg1;
- (void)loginMultPureForegroundAsync:(id)arg1 onComplete:(CDUnknownBlockType)arg2;
- (id)loginPureForegroundAsync:(id)arg1 onComplete:(CDUnknownBlockType)arg2;
- (int)loginBackgroundSync:(id)arg1;
- (id)loginBackgroundAsync:(id)arg1 onComplete:(CDUnknownBlockType)arg2;
- (void)releaseAutologinRpc;
- (void)holdAutologinRpc;
- (id)operationsInQueue;
- (id)init;

@end

