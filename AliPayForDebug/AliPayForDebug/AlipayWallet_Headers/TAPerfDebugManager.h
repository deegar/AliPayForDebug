//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "TAPerfDebugWebSocketDelegate-Protocol.h"

@class NSString, PSDSession, TAPerfDebugPanel, TAPerfDebugWSManager;

@interface TAPerfDebugManager : NSObject <TAPerfDebugWebSocketDelegate>
{
    _Bool _isInitTrace;
    _Bool _isWillExitTinyApp;
    TAPerfDebugWSManager *_websokectManager;
    PSDSession *_currentSession;
    TAPerfDebugPanel *_panel;
}

+ (id)shareInstance;
@property(nonatomic) _Bool isWillExitTinyApp; // @synthesize isWillExitTinyApp=_isWillExitTinyApp;
@property(retain, nonatomic) TAPerfDebugPanel *panel; // @synthesize panel=_panel;
@property(retain, nonatomic) PSDSession *currentSession; // @synthesize currentSession=_currentSession;
@property(retain, nonatomic) TAPerfDebugWSManager *websokectManager; // @synthesize websokectManager=_websokectManager;
@property(nonatomic) _Bool isInitTrace; // @synthesize isInitTrace=_isInitTrace;
- (void).cxx_destruct;
- (id)getDeviceInfo;
- (void)onReceiveMessage:(id)arg1;
- (void)onWebSocketClosed:(id)arg1;
- (void)onWebSocketError;
- (void)onWebSocketOpened;
- (void)willExitTinyApp;
- (void)hidePanel;
- (void)showDebugPanel:(_Bool)arg1;
- (void)clearTinyAppCache;
- (id)currentPage;
- (void)sendTraceData:(id)arg1;
- (void)exitTinyApp;
- (void)stopPerfDebug;
- (_Bool)startPerfDebugWithSession:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

