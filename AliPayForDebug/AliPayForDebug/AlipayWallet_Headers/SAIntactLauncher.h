//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SAScanLauncher.h"

#import "SARouterMgrDelegate-Protocol.h"

@class APAlertView, NSDictionary, NSString, SARouterMgr;

@interface SAIntactLauncher : SAScanLauncher <SARouterMgrDelegate>
{
    SARouterMgr *_routerMgr;
    APAlertView *_alertView;
    NSDictionary *_didFindInDict;
}

@property(retain, nonatomic) NSDictionary *didFindInDict; // @synthesize didFindInDict=_didFindInDict;
@property(retain, nonatomic) APAlertView *alertView; // @synthesize alertView=_alertView;
@property(retain, nonatomic) SARouterMgr *routerMgr; // @synthesize routerMgr=_routerMgr;
- (void).cxx_destruct;
- (_Bool)isSkipError:(id)arg1;
- (_Bool)isCopyError:(long long)arg1;
- (_Bool)errorHandling:(int)arg1 error:(id)arg2;
- (_Bool)successHandling:(int)arg1 userInfo:(id)arg2;
- (void)cancelDispatch;
- (void)notifyNextBizWithCodeContent:(id)arg1;
- (void)dispatchWithNode:(id)arg1;
- (id)createRouteNodeWithType:(id)arg1 result:(id)arg2 imageChannel:(id)arg3 stringEncode:(id)arg4;
- (void)dealloc;
- (void)routerMgr:(id)arg1 didFailAction:(int)arg2 Error:(id)arg3;
- (void)routerMgr:(id)arg1 didFinishAction:(int)arg2 UserInfo:(id)arg3;
- (void)didFind:(id)arg1;
- (void)dispatchCallEdgeRiskAnalyzer:(id)arg1;
- (void)scanOpenUrl:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

