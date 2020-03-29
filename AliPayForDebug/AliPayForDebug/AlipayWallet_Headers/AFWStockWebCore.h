//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AFWStockJavascriptBridgeBaseDelegate-Protocol.h"
#import "WKNavigationDelegate-Protocol.h"

@class AFWStockJavaScriptBridgeBase, AFWStockWebView, NSMutableURLRequest, NSString, UIViewController;
@protocol AFWStockWebCoreDelegate;

@interface AFWStockWebCore : NSObject <WKNavigationDelegate, AFWStockJavascriptBridgeBaseDelegate>
{
    id <AFWStockWebCoreDelegate> _delegate;
    AFWStockWebView *_bridgeView;
    AFWStockJavaScriptBridgeBase *_base;
    UIViewController<AFWStockWebCoreDelegate> *_vc;
    NSMutableURLRequest *_lastMainRequest;
}

@property(retain, nonatomic) NSMutableURLRequest *lastMainRequest; // @synthesize lastMainRequest=_lastMainRequest;
@property(nonatomic) __weak UIViewController<AFWStockWebCoreDelegate> *vc; // @synthesize vc=_vc;
@property(retain, nonatomic) AFWStockJavaScriptBridgeBase *base; // @synthesize base=_base;
@property(retain, nonatomic) AFWStockWebView *bridgeView; // @synthesize bridgeView=_bridgeView;
@property(nonatomic) __weak id <AFWStockWebCoreDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)currentWebView;
- (id)bridgeForVC;
- (void)evaluateJavascript:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)injectClueWallet;
- (void)doInjectJS;
- (void)injectJS;
- (void)dispatchMessage:(struct NSDictionary *)arg1 callback:(CDUnknownBlockType)arg2;
- (void)webView:(id)arg1 decidePolicyForNavigationResponse:(id)arg2 decisionHandler:(CDUnknownBlockType)arg3;
- (void)webViewWebContentProcessDidTerminate:(id)arg1;
- (void)logNetWorkError:(id)arg1;
- (void)webView:(id)arg1 didFailProvisionalNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 didFinishNavigation:(id)arg2;
- (void)webView:(id)arg1 didStartProvisionalNavigation:(id)arg2;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(CDUnknownBlockType)arg3;
- (void)reloadWebview;
- (void)loadNetworkError:(id)arg1;
- (void)loadCustomError:(id)arg1;
- (void)loadValidateError;
- (void)loadURL:(id)arg1;
- (void)setupWebView;
- (void)unregistProtocol;
- (void)registProtocol;
- (void)unregisetHook;
- (void)registHook;
- (id)initWithWk:(_Bool)arg1 withFrame:(struct CGRect)arg2 withVC:(id)arg3;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

