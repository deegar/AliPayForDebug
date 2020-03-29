//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSString, NSURL;
@protocol RVAContentViewProtocol;

@protocol NXDWebViewInjection <NSObject>
- (void)setCustomUserAgent:(NSString *)arg1 withContentView:(id <RVAContentViewProtocol>)arg2;
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

