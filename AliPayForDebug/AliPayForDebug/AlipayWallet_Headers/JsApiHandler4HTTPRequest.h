//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PSDJsApiHandler.h"

@interface JsApiHandler4HTTPRequest : PSDJsApiHandler
{
    _Bool _shouldDelayCallHttpRequest;
}

@property(nonatomic) _Bool shouldDelayCallHttpRequest; // @synthesize shouldDelayCallHttpRequest=_shouldDelayCallHttpRequest;
- (void)antEventForRequestALIPAYJSESSIONID:(id)arg1 caller_url:(id)arg2 request_url:(id)arg3 request_headers:(id)arg4 response_headers:(id)arg5;
- (_Bool)hasALIPAYJSESSIONID:(id)arg1;
- (_Bool)enableReferRemoveQuery:(id)arg1 appId:(id)arg2;
- (_Bool)enableUseMassproxy:(id)arg1 appId:(id)arg2 method:(id)arg3;
- (void)declareJsApiArgumentsRules;
- (id)addRefererBySwitch:(id)arg1 context:(id)arg2;
- (id)requestFromDictionary:(id)arg1 url:(id)arg2 context:(id)arg3 referer:(id)arg4 appId:(id)arg5;
- (void)showWebViewErrorPageWithContext:(id)arg1 redirectUrl:(id)arg2;
- (void)doHandler:(id)arg1 context:(id)arg2 url:(id)arg3 callback:(CDUnknownBlockType)arg4;
- (void)handler:(id)arg1 context:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (void)dealloc;
- (void)willEnterForegroundNotification:(id)arg1;
- (id)init;

@end

