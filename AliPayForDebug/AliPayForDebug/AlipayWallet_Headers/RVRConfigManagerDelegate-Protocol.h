//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSDictionary, NSString;

@protocol RVRConfigManagerDelegate <NSObject>
- (NSArray *)fallbackHeadersWhitelist;
- (_Bool)enableRemoveFallbackHeaders;
- (NSString *)appxngAppId;
- (_Bool)enableUseAppxNG;
- (_Bool)enableUseAppxHtml;
- (double)preferConfigWaitTime;
- (_Bool)enableTemplateApp;
- (_Bool)isNeed2VerifyApp;
- (NSDictionary *)filteredCommonApplist;
- (NSString *)signPublicKey;
- (NSString *)templateConfigRootPath;
- (NSString *)downloadRootPath;
- (NSString *)unzipRootPath;
- (NSString *)presetAppPackagePath;
- (_Bool)cacheReqTime;
- (NSDictionary *)tinyAppPublicURL;
- (NSDictionary *)resManifestSwitchers;
- (_Bool)shouldWKWebViewForceFreshResponse;
- (_Bool)shouldUseConditionalResponse;
- (_Bool)shouldLogResponse;
- (double)updateReqRate;
- (double)limitReqRate;
- (double)resMainDocInvalidTime;
- (_Bool)callbackInHighPriorityAfterUnzip;
- (NSArray *)commonAppList;
- (void)updateConfig:(NSDictionary *)arg1;

@optional
- (double)pluginExpireTime;
@end

