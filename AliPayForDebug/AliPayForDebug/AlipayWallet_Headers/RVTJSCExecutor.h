//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSThread, RVTJSCBridge, RVTJSCContextManager, RVTJSCMultiWorkerManager, RVTJavaScriptContext;

@interface RVTJSCExecutor : NSObject
{
    _Bool _canRunIsolateContext;
    _Bool _isCopyAppxToBizContext;
    NSThread *_javaScriptThread;
    RVTJavaScriptContext *_context;
    RVTJSCBridge *_bridge;
    RVTJSCContextManager *_contextManager;
    RVTJSCMultiWorkerManager *_multiWorkerManager;
}

+ (void)runRunLoopThread;
@property(retain, nonatomic) RVTJSCMultiWorkerManager *multiWorkerManager; // @synthesize multiWorkerManager=_multiWorkerManager;
@property(nonatomic) _Bool isCopyAppxToBizContext; // @synthesize isCopyAppxToBizContext=_isCopyAppxToBizContext;
@property(retain, nonatomic) RVTJSCContextManager *contextManager; // @synthesize contextManager=_contextManager;
@property(retain, nonatomic) RVTJSCBridge *bridge; // @synthesize bridge=_bridge;
@property(nonatomic) __weak RVTJavaScriptContext *context; // @synthesize context=_context;
@property(retain, nonatomic) NSThread *javaScriptThread; // @synthesize javaScriptThread=_javaScriptThread;
@property(nonatomic) _Bool canRunIsolateContext; // @synthesize canRunIsolateContext=_canRunIsolateContext;
- (void).cxx_destruct;
- (id)createDictFromJSObject:(id)arg1;
- (void)callJSValueAsFunction:(id)arg1 arg:(id)arg2;
- (void)extendContextProperties:(id)arg1;
- (void)dispatchMessage:(id)arg1;
- (_Bool)importScriptWithUrl:(id)arg1 withContext:(id)arg2;
- (void)loadPluginsWithConfig:(id)arg1 onComplete:(CDUnknownBlockType)arg2;
- (_Bool)isPluginInstalled:(id)arg1;
- (void)executeBizJavaScript:(id)arg1 sourceURL:(id)arg2 onComplete:(CDUnknownBlockType)arg3;
- (id)currentJSContext;
- (void)dispatchJSErrorToContextWithError:(id)arg1;
- (id)getCallInfoFromURL:(id)arg1;
- (void)executeApplicationScript:(id)arg1 sourceURL:(id)arg2 onComplete:(CDUnknownBlockType)arg3;
- (void)executeApplicationScript:(id)arg1 sourceURL:(id)arg2 onComplete:(CDUnknownBlockType)arg3 sourceFromDispatchError:(_Bool)arg4;
- (void)executeSyncApplicationScript:(id)arg1 sourceURL:(id)arg2 onComplete:(CDUnknownBlockType)arg3;
- (void)executeSyncApplicationScript:(id)arg1 sourceURL:(id)arg2 onComplete:(CDUnknownBlockType)arg3 sourceFromDispatchError:(_Bool)arg4 context:(id)arg5;
- (void)executeJavaScript:(id)arg1 sourceURL:(id)arg2 onComplete:(CDUnknownBlockType)arg3;
- (void)executeJavaScript:(id)arg1 sourceURL:(id)arg2 onComplete:(CDUnknownBlockType)arg3 contextId:(id)arg4;
- (_Bool)doSyncCallTOJSCWithResonseData:(id)arg1 func:(id)arg2;
- (_Bool)doSyncCall:(id)arg1;
- (void)setUp;
- (void)initContextManager;
- (void)executeAsyncBlockOnJavaScriptQueue:(CDUnknownBlockType)arg1;
- (void)executeBlockOnJavaScriptQueue:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)initWithBridge:(id)arg1;

@end
