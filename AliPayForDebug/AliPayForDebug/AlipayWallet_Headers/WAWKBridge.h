//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WADefaultCameraSourcePhotoDelegate-Protocol.h"
#import "WAIJSBridge-Protocol.h"
#import "WAWKScritPortDelegate-Protocol.h"

@class NSMutableArray, NSString, WAARSession, WAWKScriptPort, WKWebView;
@protocol OS_dispatch_queue;

@interface WAWKBridge : NSObject <WADefaultCameraSourcePhotoDelegate, WAWKScritPortDelegate, WAIJSBridge>
{
    _Bool _dispatched;
    _Bool _verified;
    NSObject<OS_dispatch_queue> *_queue;
    WAARSession *_session;
    WAWKScriptPort *_port;
    NSMutableArray *_renderers;
    NSMutableArray *_events;
    WKWebView *_webview;
    NSString *_verification;
}

+ (id)bridgeInWKWebview:(id)arg1;
@property(readonly) NSString *verification; // @synthesize verification=_verification;
@property __weak WKWebView *webview; // @synthesize webview=_webview;
@property(retain) NSMutableArray *events; // @synthesize events=_events;
@property(retain) NSMutableArray *renderers; // @synthesize renderers=_renderers;
@property(retain) WAWKScriptPort *port; // @synthesize port=_port;
@property(retain) WAARSession *session; // @synthesize session=_session;
- (void).cxx_destruct;
- (void)scriptPortDidDisconnected:(id)arg1;
- (void)scriptPort:(id)arg1 didReceiveMessage:(id)arg2;
- (void)dealloc;
- (void)bridgeDidReceieveMessage:(id)arg1;
- (void)processMessage:(id)arg1;
- (id)findFrameRendererByName:(id)arg1;
- (id)findWKWebViewRenderView:(id)arg1 name:(id)arg2;
- (id)injectIntoWebView:(id)arg1 withName:(id)arg2 rect:(struct CGRect)arg3;
- (void)sessionDidStop;
- (void)_release;
- (void)detectorDidSendResult:(id)arg1;
- (void)detectorDidInitWithCode:(int)arg1;
- (void)cameraDidUpdateARFrame:(id)arg1 withResult:(id)arg2;
- (void)cameraDidOpenSuccess:(id)arg1;
- (void)cameraDidOpenFail:(unsigned long long)arg1;
- (void)cameraDidChangeRuningState:(_Bool)arg1;
- (void)enqueEvent:(id)arg1 withArgument:(id)arg2;
- (id)init;
- (void)photoRequestDidComplete:(id)arg1 withError:(unsigned long long)arg2 data:(id)arg3;
- (void)takePhotoWithName:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

