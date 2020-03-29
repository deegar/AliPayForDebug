//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PSDKernel.h"

#import "PSDContentViewDelegate-Protocol.h"

@class NSString, PSDContentView, PSDPage, PSDViewParam;

@interface PSDView : PSDKernel <PSDContentViewDelegate>
{
    _Bool _firstLoad;
    _Bool _canMonitor;
    PSDPage *_page;
    PSDViewParam *_viewParam;
    PSDContentView *_contentView;
}

+ (id)viewWithViewParam:(id)arg1 parentObject:(id)arg2;
@property(nonatomic) _Bool canMonitor; // @synthesize canMonitor=_canMonitor;
@property(nonatomic) _Bool firstLoad; // @synthesize firstLoad=_firstLoad;
@property(retain, nonatomic) PSDContentView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) PSDViewParam *viewParam; // @synthesize viewParam=_viewParam;
@property(readonly, nonatomic) PSDPage *page; // @synthesize page=_page;
- (void).cxx_destruct;
- (void)cancelInjectJS;
- (id)view;
- (id)createParam;
- (void)initMessageChannel;
- (void)syncMainProcessCookie;
- (void)syncDeviceCookieWithStorage:(id)arg1;
- (void)syncSimulatorCookieWithStorage:(id)arg1;
- (void)handleWKCookie;
- (void)handleCookieData:(id)arg1 url:(id)arg2;
- (void)executeHandleCookieData:(id)arg1 url:(id)arg2;
- (void)webView:(id)arg1 didFailProvisionalNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 didFailNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 didFinishNavigation:(id)arg2;
- (void)webView:(id)arg1 didStartProvisionalNavigation:(id)arg2;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(CDUnknownBlockType)arg3;
- (_Bool)webView:(id)arg1 resizeFrame:(struct CGRect)arg2;
- (void)doInjectJS;
- (void)injectJS;
- (void)loadRequest;
- (void)setupUserScripts;
- (void)setupMessageHandler;
- (void)removeMessageHandler:(id)arg1;
- (id)psdConfiguration;
- (void)startLoadRequest;
- (id)initWithViewParam:(id)arg1 parentObject:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

