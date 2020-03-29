//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSString, NSURL, NSURLRequest, RVKContentView, RVKScene, RVKSceneParam, RVKSession, RVKView, UINavigationController, UIView, UIViewController;
@protocol RVKViewControllerDelegate;

@protocol RVKViewControllerProtocol <NSObject>

@optional
- (UIView *)rvk_customNavigationBar;
- (UINavigationController *)rvk_customNavigationController;
- (void)rvk_presentViewController:(UIViewController *)arg1 animated:(_Bool)arg2 completion:(void (^)(void))arg3;
- (void)rvk_dismissViewControllerAnimated:(_Bool)arg1 completion:(void (^)(void))arg2;
- (void)rvk_viewDidLayoutSubviews;
- (void)rvk_viewDidDisappear:(_Bool)arg1;
- (void)rvk_viewWillDisappear:(_Bool)arg1;
- (void)rvk_viewDidAppear:(_Bool)arg1;
- (void)rvk_viewWillAppear:(_Bool)arg1;
- (void)rvk_viewDidLoad;
- (void)rvk_loadView;
- (void)callHandler:(NSString *)arg1 data:(id)arg2 callbackImmediatelyIfJSBridgeNotReady:(_Bool)arg3 responseCallback:(void (^)(id))arg4;
- (void)callHandler:(NSString *)arg1 data:(id)arg2 responseCallback:(void (^)(id))arg3;
- (UIViewController *)viewController;
- (RVKContentView *)rvkContentView;
- (RVKView *)rvkView;
- (RVKSession *)rvkSession;
- (RVKScene *)rvkScene;
- (void)initUI:(RVKView *)arg1 delegate:(id <RVKViewControllerDelegate>)arg2;
- (void)associateWeakScene:(RVKScene *)arg1 sceneParam:(RVKSceneParam *)arg2;
- (_Bool)shouldSkipHandleLoadWithRequest:(NSURLRequest *)arg1 navigationType:(long long)arg2;
- (void)injctJsRelyOnAlipayJsBridge;
- (void)injctIndependenceJs;
- (NSArray *)relayOnAlipayJsBridgeUserScripts;
- (NSArray *)independenceUserScripts;
- (void)startFirstLoadRequest:(NSURL *)arg1;
- (NSString *)codeSnippets4InsertAlipayJsBridgeFile;
- (NSString *)startupParamsJs;
- (NSArray *)dyJsUrls;
@end

