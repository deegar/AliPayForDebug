//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "APConfigObserverProtocol-Protocol.h"
#import "RVCConfigService-Protocol.h"

@class NSArray, NSString;

@interface RVCConfigServiceImp : NSObject <APConfigObserverProtocol, RVCConfigService>
{
    NSString *_taSSLAppId;
    NSArray *_taUseTLSWhiteList;
}

@property(retain, nonatomic) NSArray *taUseTLSWhiteList; // @synthesize taUseTLSWhiteList=_taUseTLSWhiteList;
@property(retain, nonatomic) NSString *taSSLAppId; // @synthesize taSSLAppId=_taSSLAppId;
- (void).cxx_destruct;
- (id)parseArrayConfig:(id)arg1;
- (void)observeConfigChange:(id)arg1;
- (void)configChangedForKey:(id)arg1 value:(id)arg2;
- (id)configForKey:(id)arg1;
- (_Bool)workerOnlyEventNeedDispatch;
- (id)addPkgResStricklyMatchVersion:(id)arg1;
- (_Bool)shouldSetInteractionWithWaitRender:(double)arg1;
- (id)appxStartupParamConfigKeys;
- (void)handleStartupParamsBeforeGiveToAppx:(id)arg1 session:(id)arg2;
- (_Bool)jsApiEnableOptimizedChannel;
- (_Bool)jsEventEnableArrayBuffer:(id)arg1;
- (_Bool)jsApiEnableArrayBuffer:(id)arg1;
- (id)stringValueForKey:(id)arg1;
- (id)seriousAliWhitelist;
- (id)alipayWhitelist;
- (id)aliWhitelist;
- (id)WKConfig;
- (id)debugJsApiDomainWhitelist;
- (_Bool)ignoreCheckResult:(id)arg1;
- (_Bool)taRequestRequestHTTPBody;
- (id)taBanmpExtSchemelist;
- (id)taRequestProxylist;
- (_Bool)taLimitControl:(id)arg1;
- (id)ta_common_storage:(id)arg1;
- (id)ta_webview_open_appidlist;
- (_Bool)ta_embedwebview_domain_newregex;
- (id)ta_use_tls_whitelist;
- (id)ta_ssl_app_id;
- (id)ta_render_jsapi_blacklist;
- (id)ta_close_webviewschemawhitelist;
- (id)ta_embedwebview_inner_appId_black_list;
- (id)ta_embedwebview_white_appid_list_with_nb;
- (id)ta_embedwebview_white_domain_list_with_nb;
- (id)ta_embedwebview_white_domain_list;
- (id)ta_comp_permission_check_type_list;
- (id)ta_comp_permission_check_appid_whitelist;
- (id)ta_http_domain_blacklist;
- (id)forceGoSpdyBlackList;
- (_Bool)shouldGoSpdy;
- (id)globleApiWhiteList;
- (id)webviewJsapiWhiteList;
- (id)webviewSudoList;
- (id)acAppForId:(id)arg1 stageCode:(id)arg2;
- (_Bool)enableFilterRepeatSubpackageTask;
- (void)startApplication:(id)arg1 params:(id)arg2 launchMode:(long long)arg3 sourceId:(id)arg4;
- (id)internalAPIWhiteList;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

