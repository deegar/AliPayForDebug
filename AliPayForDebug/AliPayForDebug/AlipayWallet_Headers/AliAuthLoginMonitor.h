//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface AliAuthLoginMonitor : NSObject
{
}

+ (void)monitorNoNetworkAlertExpo:(id)arg1 ucId:(id)arg2;
+ (void)monitorSeed:(id)arg1 ucId:(id)arg2;
+ (void)monitorCanNotOpenTargetApp:(id)arg1;
+ (void)monitorCanOpenTargetApp:(id)arg1;
+ (void)monitorDidEnterBackground:(id)arg1;
+ (void)monitorAuthLoginAppInfoCustomError:(id)arg1;
+ (void)monitorAuthLoginAppInfoNetworkError:(id)arg1;
+ (void)monitorAuthLoginTokenCustomError:(id)arg1 isSilent:(_Bool)arg2;
+ (void)monitorAuthLoginTargetUrlError:(id)arg1;
+ (void)monitorAuthLoginTokenNetworkError:(id)arg1;
+ (void)monitorAuthLoginTokenSuccess:(id)arg1 isSilent:(_Bool)arg2;
+ (void)monitorAuthLoginClickLoginButton:(id)arg1 isSilent:(_Bool)arg2;
+ (void)monitorAuthLoginCancelWithError:(id)arg1;
+ (void)monitorAuthLoginCancel:(id)arg1;
+ (void)monitorAuthLoginOpenPage:(id)arg1;

@end

