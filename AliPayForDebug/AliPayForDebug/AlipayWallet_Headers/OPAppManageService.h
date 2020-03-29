//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "DTService-Protocol.h"
#import "DTStartApplicationHandler-Protocol.h"

@class ACApplicationTypeFinder, ACStartApplicationHandler, AUToast, NSString, OPAuthViewController;

@interface OPAppManageService : NSObject <DTStartApplicationHandler, DTService>
{
    _Bool _isCommonRequestCalling;
    ACApplicationTypeFinder *_applicationTypeFinder;
    ACStartApplicationHandler *_startAppHandler;
    OPAuthViewController *_authViewController;
    AUToast *_appToastView;
}

@property(nonatomic) _Bool isCommonRequestCalling; // @synthesize isCommonRequestCalling=_isCommonRequestCalling;
@property(retain, nonatomic) AUToast *appToastView; // @synthesize appToastView=_appToastView;
@property(retain, nonatomic) OPAuthViewController *authViewController; // @synthesize authViewController=_authViewController;
@property(retain, nonatomic) ACStartApplicationHandler *startAppHandler; // @synthesize startAppHandler=_startAppHandler;
@property(retain, nonatomic) ACApplicationTypeFinder *applicationTypeFinder; // @synthesize applicationTypeFinder=_applicationTypeFinder;
- (void).cxx_destruct;
- (_Bool)enableNebulaOnlineToDev:(id)arg1;
- (_Bool)updateAppInfosByJsonInfo:(id)arg1;
- (void)removeRecentItemWithAppId:(id)arg1 nbsn:(id)arg2;
- (id)recentUsedAppIdList;
- (id)recentUsedTinyApps;
- (id)currentAppVersions:(id)arg1;
- (id)pkgVersionsWithDevAppId:(id)arg1;
- (id)findDevelopingAppInfo:(id)arg1 nbsn:(id)arg2;
- (_Bool)updateDevelopingAppInfo:(id)arg1;
- (void)registerCommonRequestHandleDelegate:(id)arg1;
- (id)queryAppInfoWithReqType:(int)arg1 appIds:(id)arg2 packInfoReq:(id)arg3;
- (void)requestCommonAppInfos:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)requestAppBaseInfos:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (id)allNebulaAppVersions;
- (id)allStageCodes;
- (id)findStageConfigMap:(id)arg1;
- (id)findApp:(id)arg1 stageCode:(id)arg2;
- (void)installApp:(id)arg1 param:(id)arg2 process:(CDUnknownBlockType)arg3 success:(CDUnknownBlockType)arg4 failure:(CDUnknownBlockType)arg5;
- (void)hideAppToast;
- (void)showAppToast:(id)arg1 type:(int)arg2 param:(id)arg3;
- (void)launchACApp:(id)arg1 param:(id)arg2 process:(CDUnknownBlockType)arg3 success:(CDUnknownBlockType)arg4 failure:(CDUnknownBlockType)arg5;
- (void)openACApp:(id)arg1 param:(id)arg2 process:(CDUnknownBlockType)arg3 success:(CDUnknownBlockType)arg4 failure:(CDUnknownBlockType)arg5;
- (id)findAppManager:(id)arg1 stageCodes:(id)arg2 useCache:(_Bool)arg3;
- (id)findAppManager:(id)arg1 stageCodes:(id)arg2;
- (id)findAppManager:(id)arg1;
- (void)willDestroy;
- (void)start;
- (id)init;
- (void)autoAuthInterface:(id)arg1 userId:(id)arg2 resultCallback:(CDUnknownBlockType)arg3;
- (id)getAuthStatusAyncLaunchWeb:(id)arg1 userId:(id)arg2 resultCallback:(CDUnknownBlockType)arg3;
- (id)getAuthStatusAync:(id)arg1 userId:(id)arg2 source:(int)arg3 autoAuthorize:(_Bool)arg4 resultCallback:(CDUnknownBlockType)arg5;
- (_Bool)isInstalledFromSchemeUri:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

