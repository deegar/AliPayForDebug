//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RVKBridgeExtension.h"

#import "NXEvent4RVPBridgeExtension4PackageManager-Protocol.h"

@class NSString;

@interface RVPBridgeExtension4PackageManager : RVKBridgeExtension <NXEvent4RVPBridgeExtension4PackageManager>
{
}

+ (void)__RVK_export__getExtConfig3017;
+ (void)__RVK_export__getAppInfo2576;
+ (void)__RVK_export__updateApp2325;
+ (void)__RVK_export__inInstalledApp2144;
+ (void)__RVK_export__getRunScene1943;
+ (void)__RVK_export__applyUpdate1662;
+ (void)__RVK_export__getAppType1471;
+ (void)__RVK_export__addPkgRes570;
+ (unsigned long long)appTypeWith:(id)arg1;
+ (void)__RVK_export__loadSubPackage1070;
- (void)storeTemplateConfig:(id)arg1 app:(id)arg2;
- (void)getResourceWithUrl:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)getExtInfoWithTemplateConfig:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)getExtConfig:(id)arg1 originParam:(id)arg2 page:(id)arg3 callback:(CDUnknownBlockType)arg4;
- (void)getAppInfo:(id)arg1 stageCode:(id)arg2 originParam:(id)arg3 page:(id)arg4 callback:(CDUnknownBlockType)arg5;
- (void)updateApp:(id)arg1 originParam:(id)arg2 page:(id)arg3 callback:(CDUnknownBlockType)arg4;
- (void)inInstalledApp:(id)arg1 originParam:(id)arg2 page:(id)arg3 callback:(CDUnknownBlockType)arg4;
- (void)getRunScene:(id)arg1 originParam:(id)arg2 page:(id)arg3 callback:(CDUnknownBlockType)arg4;
- (void)applyUpdate:(id)arg1 originParam:(id)arg2 page:(id)arg3 callback:(CDUnknownBlockType)arg4;
- (void)getAppType:(id)arg1 originParam:(id)arg2 page:(id)arg3 callback:(CDUnknownBlockType)arg4;
- (id)readTarKeyArrayForApp:(id)arg1 session:(id)arg2;
- (void)preparePkgResWithResAppId:(id)arg1 context:(id)arg2 resAppVersion:(id)arg3 callback:(CDUnknownBlockType)arg4;
- (void)addPkgRes:(id)arg1 resAppVersion:(id)arg2 originParam:(id)arg3 page:(id)arg4 callback:(CDUnknownBlockType)arg5;
- (void)responseCallbacks:(id)arg1 resultDic:(id)arg2;
- (void)removeSubpackageTask:(id)arg1;
- (void)addSubpackageTask:(id)arg1;
- (id)subPackageAppid:(id)arg1 rootName:(id)arg2;
- (id)getCDNUrlFromLaunchParams:(id)arg1 rootName:(id)arg2;
- (void)loadSubApp:(id)arg1 mainAppDatasource:(id)arg2 subAppId:(id)arg3 callback:(CDUnknownBlockType)arg4;
- (void)loadSubPackage:(id)arg1 preload:(id)arg2 originParam:(id)arg3 page:(id)arg4 callback:(CDUnknownBlockType)arg5;
- (_Bool)enableFilterRepeatSubpackageTask;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
