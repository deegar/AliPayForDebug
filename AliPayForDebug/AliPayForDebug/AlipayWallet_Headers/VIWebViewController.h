//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "VIViewController.h"

#import "WKNavigationDelegate-Protocol.h"

@class NSString, UIProgressView, WKWebView, WKWebViewConfiguration;

@interface VIWebViewController : VIViewController <WKNavigationDelegate>
{
    NSString *_urlStr;
    WKWebView *_webView;
    CDUnknownBlockType _closeHandler;
    WKWebViewConfiguration *_config;
    UIProgressView *_progressView;
}

@property(retain, nonatomic) UIProgressView *progressView; // @synthesize progressView=_progressView;
@property(retain, nonatomic) WKWebViewConfiguration *config; // @synthesize config=_config;
@property(copy, nonatomic) CDUnknownBlockType closeHandler; // @synthesize closeHandler=_closeHandler;
@property(retain, nonatomic) WKWebView *webView; // @synthesize webView=_webView;
- (void).cxx_destruct;
- (void)webView:(id)arg1 didFinishNavigation:(id)arg2;
- (void)webView:(id)arg1 didFailNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 didFailProvisionalNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 didStartProvisionalNavigation:(id)arg2;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(CDUnknownBlockType)arg3;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)resetProgressAnimated:(_Bool)arg1;
- (void)dealloc;
- (void)close;
- (void)loadPage;
- (void)removeKVO;
- (void)setupKVO;
- (void)setupSubView;
- (void)setupDefaultParam;
- (void)viewDidLoad;
- (id)initWithUrlString:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

