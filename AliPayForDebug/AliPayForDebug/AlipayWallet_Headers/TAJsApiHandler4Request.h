//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PSDJsApiHandler.h"

@interface TAJsApiHandler4Request : PSDJsApiHandler
{
    _Bool _shouldDelayCallHttpRequest;
}

@property(nonatomic) _Bool shouldDelayCallHttpRequest; // @synthesize shouldDelayCallHttpRequest=_shouldDelayCallHttpRequest;
- (_Bool)enableReferRemoveQuery:(id)arg1 appId:(id)arg2;
- (void)limitCheck:(id)arg1 request:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (void)mfrontgwMiniappHttpProxyRPC:(id)arg1 request:(id)arg2 context:(id)arg3 callback:(CDUnknownBlockType)arg4;
- (id)bodyDataDic:(id)arg1;
- (id)transferUrlQueryToDictionary:(id)arg1;
- (void)declareJsApiArgumentsRules;
- (id)addRefererBySwitch:(id)arg1 context:(id)arg2 templateAppId:(id)arg3;
- (id)requestFromDictionary:(id)arg1 url:(id)arg2 context:(id)arg3 referer:(id)arg4 appId:(id)arg5;
- (void)showWebViewErrorPageWithContext:(id)arg1 redirectUrl:(id)arg2;
- (void)doHandlerWithTask:(id)arg1 data:(id)arg2 context:(id)arg3 url:(id)arg4 callback:(CDUnknownBlockType)arg5;
- (void)handler:(id)arg1 context:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (void)dealloc;
- (void)willEnterForegroundNotification:(id)arg1;
- (id)init;

@end

