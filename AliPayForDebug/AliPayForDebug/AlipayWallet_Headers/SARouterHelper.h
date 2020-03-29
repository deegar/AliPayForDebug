//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface SARouterHelper : NSObject
{
    _Bool _shouldShowToast;
}

+ (void)reportRouteRpcTimeOutWithArgs:(id)arg1;
+ (void)hideProcessActiving;
+ (void)showProcessActiving;
+ (_Bool)expandSupportScene;
+ (_Bool)isSupporImageChannel:(id)arg1;
+ (_Bool)isSupportSourceID:(id)arg1;
+ (_Bool)supportLocalRouter:(id)arg1;
+ (id)processSuperView;
+ (void)enableUserInteraction:(_Bool)arg1;
+ (id)scanAndRpcResultBuilderWithRequestParams:(id)arg1 ResponseParams:(id)arg2 Error:(id)arg3;
+ (void)notifyScanResult:(id)arg1 LaunchOptions:(id)arg2;
+ (id)urlEncode:(id)arg1;
+ (_Bool)goBillApp;
+ (_Bool)payBill:(id)arg1 bizType:(id)arg2 subBizType:(id)arg3 bizContext:(id)arg4 extInfos:(id)arg5 rpcResponse:(id)arg6;
+ (id)appenv;
+ (_Bool)isAlipayScheme:(id)arg1;
+ (id)launchOptionsFormURL:(id)arg1;
+ (_Bool)isLoginAppRunning;
+ (_Bool)isDirectJumpScheme:(id)arg1;
+ (id)appendRetAppId:(id)arg1;
+ (_Bool)isEmptyString:(id)arg1;
+ (void)copyKV:(id)arg1 fromDic:(id)arg2 toDic:(id)arg3;
+ (id)getSceneParamsWithExtDic:(id)arg1;
+ (id)parseUrlParams:(id)arg1 hasEncode:(_Bool)arg2;
+ (id)urlParams:(id)arg1 hasEncode:(_Bool *)arg2;
+ (id)MD5StringWithQrValue:(id)arg1;
+ (id)tokenWithQrValue:(id)arg1 isCache:(_Bool)arg2;
+ (void)logScanSPM:(id)arg1 orderString:(id)arg2 spmId:(id)arg3 extDic:(id)arg4;
+ (id)qrValueChannel:(id)arg1;
+ (void)openUrlString:(id)arg1 needExitScanApp:(_Bool)arg2 extDic:(id)arg3;
+ (void)showStatusBarIfNeed;
+ (_Bool)checkUrl:(id)arg1;
+ (id)sharedSARouterHelper;
+ (void)reportIfRouteRpcTimeout:(id)arg1 params:(id)arg2;
+ (void)reportRPCError:(id)arg1 extDic:(id)arg2;
+ (id)errorWithRpcResponse:(id)arg1 RpcException:(id)arg2;
+ (id)updateError:(id)arg1 UserInfoKey:(id)arg2 UserInfoValue:(id)arg3;
+ (id)errorWithCode:(int)arg1;
@property _Bool shouldShowToast; // @synthesize shouldShowToast=_shouldShowToast;
- (void)hideSafeProcessActiving;
- (void)showSafeProcessActiving;
- (id)rootViewController;

@end
