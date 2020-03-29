//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WKNavigationDelegate-Protocol.h"
#import "WKUIDelegate-Protocol.h"

@class NSDate, NSMutableArray, NSMutableDictionary, NSString, PSDContentView, PSDPage;
@protocol WKNavigationDelegate, WKUIDelegate;

@interface PSDJsBridge : NSObject <WKNavigationDelegate, WKUIDelegate>
{
    _Bool _isBridgeReady;
    _Bool _isFailToLoad;
    _Bool _isTimeout;
    int _uniqueId;
    PSDPage *_page;
    NSMutableDictionary *_responseCallbacks;
    NSMutableArray *_startupMessageQueue;
    PSDContentView *_contentView;
    id <WKUIDelegate> _webViewUIDelegate;
    id <WKNavigationDelegate> _webViewNavigationDelegate;
    NSDate *_loadFinishedDate;
}

+ (id)bridge4Page:(id)arg1 contentView:(id)arg2 pageParam:(id)arg3;
+ (void)enableLogging;
@property(nonatomic) _Bool isTimeout; // @synthesize isTimeout=_isTimeout;
@property(nonatomic) _Bool isFailToLoad; // @synthesize isFailToLoad=_isFailToLoad;
@property(retain, nonatomic) NSDate *loadFinishedDate; // @synthesize loadFinishedDate=_loadFinishedDate;
@property(nonatomic) _Bool isBridgeReady; // @synthesize isBridgeReady=_isBridgeReady;
@property(nonatomic) __weak id <WKNavigationDelegate> webViewNavigationDelegate; // @synthesize webViewNavigationDelegate=_webViewNavigationDelegate;
@property(nonatomic) __weak id <WKUIDelegate> webViewUIDelegate; // @synthesize webViewUIDelegate=_webViewUIDelegate;
@property(nonatomic) __weak PSDContentView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) NSMutableArray *startupMessageQueue; // @synthesize startupMessageQueue=_startupMessageQueue;
@property(retain, nonatomic) NSMutableDictionary *responseCallbacks; // @synthesize responseCallbacks=_responseCallbacks;
@property(nonatomic) __weak PSDPage *page; // @synthesize page=_page;
@property(nonatomic) int uniqueId; // @synthesize uniqueId=_uniqueId;
- (void).cxx_destruct;
- (void)diagnoseLogIfHashChange:(id)arg1;
- (id)ignoreDiagnoseEventList;
- (void)wkLoadFinisd;
- (void)webView:(id)arg1 runJavaScriptTextInputPanelWithPrompt:(id)arg2 defaultText:(id)arg3 initiatedByFrame:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)webView:(id)arg1 runJavaScriptConfirmPanelWithMessage:(id)arg2 initiatedByFrame:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)webView:(id)arg1 runJavaScriptAlertPanelWithMessage:(id)arg2 initiatedByFrame:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)getPanelTitleWithType:(int)arg1 webView:(id)arg2;
- (id)javaScriptPanelTitleWithWebView:(id)arg1;
- (void)addDelayTask:(CDUnknownBlockType)arg1;
- (_Bool)isCurrentVCVisible;
- (_Bool)isCurrentVCAnimationFinished;
- (void)webViewDidClose:(id)arg1;
- (id)webView:(id)arg1 createWebViewWithConfiguration:(id)arg2 forNavigationAction:(id)arg3 windowFeatures:(id)arg4;
- (void)webViewWebContentProcessDidTerminate:(id)arg1;
- (void)webView:(id)arg1 didReceiveAuthenticationChallenge:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)webView:(id)arg1 didFailNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 didFinishNavigation:(id)arg2;
- (void)webView:(id)arg1 didCommitNavigation:(id)arg2;
- (void)webView:(id)arg1 didFailProvisionalNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 didReceiveServerRedirectForProvisionalNavigation:(id)arg2;
- (void)webView:(id)arg1 didStartProvisionalNavigation:(id)arg2;
- (void)webView:(id)arg1 decidePolicyForNavigationResponse:(id)arg2 decisionHandler:(CDUnknownBlockType)arg3;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(CDUnknownBlockType)arg3;
- (void)reset;
- (void)doLoadJSBridgeFileWithDynamicInjectJsCodeSnippets:(id)arg1;
- (void)loadJSBridgeFileWithDynamicInjectJsCodeSnippets:(id)arg1;
- (void)loadJS:(id)arg1;
- (void)callJsApi:(id)arg1 url:(id)arg2 data:(id)arg3 responseCallback:(CDUnknownBlockType)arg4;
- (void)callHandler:(id)arg1 data:(id)arg2 responseCallback:(CDUnknownBlockType)arg3;
- (void)callHandler:(id)arg1 data:(id)arg2;
- (void)callHandler:(id)arg1;
- (void)send:(id)arg1 responseCallback:(CDUnknownBlockType)arg2;
- (void)send:(id)arg1;
- (void)updateBridgeReadyStatus:(CDUnknownBlockType)arg1;
- (void)flushResponseCallbacks;
- (void)loadFinished;
- (void)_log:(id)arg1 json:(id)arg2;
- (id)_deserializeMessageJSON:(id)arg1;
- (id)_serializeMessage:(id)arg1;
- (id)transformResponseData:(id)arg1;
- (void)_doFlushMessageQueue:(id)arg1 url:(id)arg2;
- (void)_flushMessageQueue;
- (void)_flushMessageQueueWithMessage:(id)arg1 url:(id)arg2;
- (void)_doFlushH5ReportMessageQueue:(id)arg1 url:(id)arg2;
- (void)_flushH5ReportMessageQueue;
- (void)_doFlushMonitorMessageQueue:(id)arg1 url:(id)arg2;
- (void)_flushMonitorMessageQueue;
- (void)_dispatchMessage:(id)arg1;
- (void)_queueMessage:(id)arg1;
- (void)_sendData:(id)arg1 responseCallback:(CDUnknownBlockType)arg2 handlerName:(id)arg3;
- (void)doSendData:(id)arg1 responseCallback:(CDUnknownBlockType)arg2 handlerName:(id)arg3;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;
- (id)init;
- (void)diagnoseLogIfHashChange:(id)arg1;
- (id)ignoreDiagnoseEventList;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

