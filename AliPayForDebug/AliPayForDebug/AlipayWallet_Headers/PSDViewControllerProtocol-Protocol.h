//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSString, NSURL, NSURLRequest, PSDContentView, PSDScene, PSDSceneParam, PSDSession, PSDView, UIViewController;
@protocol PSDViewControllerDelegate;

@protocol PSDViewControllerProtocol <NSObject>

@optional
- (NSString *)sourceInfo;
- (NSString *)titleLabelValue;
- (void)callHandler:(NSString *)arg1 data:(id)arg2 callbackImmediatelyIfJSBridgeNotReady:(_Bool)arg3 responseCallback:(void (^)(id))arg4;
- (void)callHandler:(NSString *)arg1 data:(id)arg2 responseCallback:(void (^)(id))arg3;
- (void)adjustWebviewContentInsets;
- (UIViewController *)viewController;
- (PSDContentView *)psdContentView;
- (PSDView *)psdView;
- (PSDSession *)psdSession;
- (PSDScene *)psdScene;
- (void)initUI:(PSDView *)arg1 delegate:(id <PSDViewControllerDelegate>)arg2;
- (void)associateWeakScene:(PSDScene *)arg1 sceneParam:(PSDSceneParam *)arg2;
- (_Bool)shouldSkipHandleLoadWithRequest:(NSURLRequest *)arg1 navigationType:(long long)arg2;
- (NSString *)allJsInjectToJSC;
- (void)injectJsRelyOnAlipayJsBridge;
- (void)injectIndependenceJs;
- (NSArray *)relayOnAlipayJsBridgeUserScripts;
- (NSArray *)independenceUserScripts;
- (void)startFirstLoadRequest:(NSURL *)arg1;
- (NSString *)codeSnippets4InsertAlipayJsBridgeFile;
- (NSString *)startupParamsJs;
- (NSArray *)dynamicJsUrls;
@end

