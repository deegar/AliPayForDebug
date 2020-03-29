//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class H5JSCBridge, H5JSCExecutor, NSMutableDictionary, PSDSession;

@interface H5JSCManager : NSObject
{
    _Bool _hasStartDebuger;
    _Bool _isBaseJsLoaded;
    H5JSCBridge *_bridge;
    NSMutableDictionary *_workers;
    H5JSCExecutor *_jsexecutor;
    PSDSession *_session;
}

@property(nonatomic) __weak PSDSession *session; // @synthesize session=_session;
@property(nonatomic) _Bool isBaseJsLoaded; // @synthesize isBaseJsLoaded=_isBaseJsLoaded;
@property(retain, nonatomic) H5JSCExecutor *jsexecutor; // @synthesize jsexecutor=_jsexecutor;
@property(retain, nonatomic) NSMutableDictionary *workers; // @synthesize workers=_workers;
@property(nonatomic) __weak H5JSCBridge *bridge; // @synthesize bridge=_bridge;
@property(nonatomic) _Bool hasStartDebuger; // @synthesize hasStartDebuger=_hasStartDebuger;
- (void).cxx_destruct;
- (void)setWorkderState:(id)arg1 state:(unsigned long long)arg2;
- (_Bool)isWorkerInstalled:(id)arg1;
- (_Bool)isWorkerInstalling:(id)arg1;
- (void)addWorker:(id)arg1;
- (_Bool)isWorkerExist:(id)arg1;
- (void)dealloc;
- (void)loadBaseJS;
- (id)initWithSession:(id)arg1;

@end

