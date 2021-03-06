//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NXDWebViewInjection-Protocol.h"

@class NSString, RVKScene;

@interface NXWebViewInjectionDelegate : NSObject <NXDWebViewInjection>
{
    RVKScene *_scene;
}

- (void).cxx_destruct;
- (id)allJsInjectToJSC;
- (id)relayOnAlipayJsBridgeUserScripts;
- (id)independenceUserScripts;
- (void)setCustomUserAgent:(id)arg1 withContentView:(id)arg2;
- (void)injectJsRelyOnAlipayJsBridge;
- (void)_injectH5ShareJsFile;
- (void)_injectPerformanceJsFile;
- (void)loadJs:(id)arg1;
- (void)injectNbComponent;
- (void)injectH5ReportTimeJsFile;
- (void)injectIndependenceJs;
- (void)startFirstLoadRequest:(id)arg1;
- (id)codeSnippets4InsertAlipayJsBridgeFile;
- (id)startupParamsJs;
- (id)dynamicJsUrls;
- (id)initWithRVKScene:(id)arg1;
- (_Bool)dispatchEvent:(id)arg1;
- (id)contentView;
- (id)session;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

