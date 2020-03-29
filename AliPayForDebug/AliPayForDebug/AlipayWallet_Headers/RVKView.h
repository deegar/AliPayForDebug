//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RVKKernel.h"

#import "RVKContentViewDelegate-Protocol.h"

@class NSString, RVKContentView, RVKPage, RVKViewParam;

@interface RVKView : RVKKernel <RVKContentViewDelegate>
{
    _Bool _firstLoad;
    _Bool _canMonitor;
    RVKPage *_page;
    RVKViewParam *_viewParam;
    RVKContentView *_contentView;
}

+ (id)viewWithViewParam:(id)arg1 parentObject:(id)arg2;
+ (void)saveCookieForStorage:(id)arg1;
+ (void)saveCookieForStorage:(id)arg1;
@property(nonatomic) _Bool canMonitor; // @synthesize canMonitor=_canMonitor;
@property(nonatomic) _Bool firstLoad; // @synthesize firstLoad=_firstLoad;
@property(retain, nonatomic) RVKContentView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) RVKViewParam *viewParam; // @synthesize viewParam=_viewParam;
@property(readonly, nonatomic) RVKPage *page; // @synthesize page=_page;
- (void).cxx_destruct;
- (void)cancelInjctJS;
- (id)view;
- (id)createParam;
- (void)initMessageChannel;
- (void)syncMainProcessCookie;
- (void)syncDeviceCookieWithStorage:(id)arg1;
- (void)syncSimulatorCookieWithStorage:(id)arg1;
- (void)handleWKCookie;
- (void)handleCookieData:(id)arg1 url:(id)arg2;
- (void)webView:(id)arg1 didFailProvisionalNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 didFailNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 didFinishNavigation:(id)arg2;
- (void)webView:(id)arg1 didStartProvisionalNavigation:(id)arg2;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(CDUnknownBlockType)arg3;
- (void)doInjctJS;
- (id)getconfigJsListWithScene:(id)arg1;
- (void)injctJS;
- (void)loadRequest;
- (void)pluginsJs;
- (void)addViewIdUserScript;
- (void)setupUserScripts;
- (void)setupMessageHandler;
- (void)removeMessageHandler:(id)arg1;
- (id)rvkConig;
- (void)startLoadRequest;
- (id)initWithViewParam:(id)arg1 parentObject:(id)arg2;
- (void)dealloc;
- (void)cancelInjectJS;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

