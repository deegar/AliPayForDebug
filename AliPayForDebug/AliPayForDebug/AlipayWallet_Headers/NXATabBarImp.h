//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "RVPVCTabBarProtocol-Protocol.h"

@class H5Alert, NSString;

@interface NXATabBarImp : NSObject <RVPVCTabBarProtocol>
{
    H5Alert *_alertView;
}

- (void).cxx_destruct;
- (_Bool)shouldTabChangeSupportWaitRender;
- (_Bool)enableProxyOnceForAll;
- (_Bool)enableAutoRender;
- (unsigned long long)currentColorMode:(id)arg1;
- (id)getRootVCWithFirstVC:(id)arg1 currentVC:(id)arg2;
- (void)setNewViewController:(id)arg1 withCurrentVC:(id)arg2;
- (void)hideToastAfterReadTabDic:(id)arg1;
- (id)showToastBeforeReadTabDic:(id)arg1;
- (void)handleAutoPreRender:(id)arg1 preRenderParams:(id)arg2 withVC:(id)arg3;
- (void)tabDidMismatchWithVC:(id)arg1;
- (void)tabDidMatch:(id)arg1 withVC:(id)arg2;
- (void)tabbarDicParseError:(id)arg1 withVC:(id)arg2 showAlert:(_Bool)arg3;
- (id)sceneParamWithParams:(id)arg1 url:(id)arg2 vc:(id)arg3;
- (id)nebulaXCreatePreRenderScene:(id)arg1 renderParams:(id)arg2 withVC:(id)arg3;
- (id)createScene:(id)arg1 selectedIndex:(long long)arg2 withVC:(id)arg3;
- (_Bool)shouldDisableTabBarWhenShare:(id)arg1 withVC:(id)arg2;
- (void)adjustWebviewContentInsets:(id)arg1;
- (void)setContentEdgeInsets:(struct UIEdgeInsets)arg1 forVC:(id)arg2;
- (struct UIEdgeInsets)getContentEdgeInsets:(id)arg1;
- (_Bool)isWebviewController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

