//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface LoginResultInterceptService : NSObject
{
    _Bool _shouldSwitchRegion;
    NSMutableArray *_resetRegionList;
}

+ (id)sharedInterceptor;
@property(retain, nonatomic) NSMutableArray *resetRegionList; // @synthesize resetRegionList=_resetRegionList;
@property(nonatomic) _Bool shouldSwitchRegion; // @synthesize shouldSwitchRegion=_shouldSwitchRegion;
- (void).cxx_destruct;
- (id)getSITPublicKey;
- (id)getOfficialPublicKey;
- (id)getDevPublicKey;
- (id)getPublicKey;
- (_Bool)verifySignContent:(id)arg1 withSign:(id)arg2 publicKey:(id)arg3;
- (_Bool)switchOfUseLegacyCookie;
- (_Bool)switchOfAllowLoginIfSignatureVerifyFailed;
- (void)storeCurrentUserResetRegionForInfo:(id)arg1;
- (id)extractLoginResult:(id)arg1;
@property(retain, nonatomic) NSString *ipayCookieDomain;
- (id)findCookiesByDomain:(id)arg1;
- (void)legacySaveCookiesWithExtraParams:(id)arg1;
- (id)httpCookieFromDict:(id)arg1;
- (void)ipaySaveCookiesWithExtraParams:(id)arg1;
- (void)cleanCookieWithDomain:(id)arg1;
- (void)cleanIPayCookieStorage;
- (_Bool)ipayVerifyCookieFromExtraParams:(id)arg1;
- (_Bool)legacyVerifyAndStoreCookieFromExtraParams:(id)arg1;
- (_Bool)verifyAndStoreCookieFromExtraParams:(id)arg1;
- (void)loginPageAppear:(id)arg1;
- (void)onChangeRegion:(id)arg1;
- (_Bool)shouldSwitchRegionOnExtraParams:(id)arg1;
- (_Bool)checkIfIPayLoginOnExtraParams:(id)arg1;
- (_Bool)shouldHandleErrorResultStatus:(long long)arg1 extraParams:(id)arg2;
- (void)excuteIPayException;
- (long long)interceptLoginWithExtraParams:(id)arg1 resultStatus:(long long)arg2;
- (void)addPluginWithParams:(id)arg1 onDestroyHandler:(CDUnknownBlockType)arg2;
- (void)removeSwitchRegionObserver;
- (void)registerSwitchRegionObserver;
- (id)tryGetResetRegionInfoForLoginID:(id)arg1;
- (id)tryGetSwitchRegionInfo;
- (void)markShouldSwitchRegion:(_Bool)arg1;
- (void)showUniversalAccountAlertWithInfo:(id)arg1;
- (long long)interceptLoginWithLoginData:(id)arg1;
- (long long)interceptLoginWithLoginResult:(id)arg1 extraLoginParams:(id)arg2;
- (void)dealloc;
- (id)init;

@end

