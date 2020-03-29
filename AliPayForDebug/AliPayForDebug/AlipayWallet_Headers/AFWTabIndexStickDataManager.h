//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "QEngineStockObserver-Protocol.h"

@class NSDictionary, NSString;

@interface AFWTabIndexStickDataManager : NSObject <QEngineStockObserver>
{
    CDUnknownBlockType _block;
    NSString *_scene;
    NSDictionary *_modelList;
}

@property(retain, nonatomic) NSDictionary *modelList; // @synthesize modelList=_modelList;
@property(copy, nonatomic) NSString *scene; // @synthesize scene=_scene;
@property(copy, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
- (void).cxx_destruct;
- (void)updateItsDataWithModel:(id)arg1 data:(id)arg2;
- (void)onReceviedStocksInfo:(id)arg1 dataType:(int)arg2 updateType:(int)arg3 err:(id)arg4;
- (void)onReceviedStock:(id)arg1 datas:(id)arg2 dataType:(int)arg3 updateType:(int)arg4 err:(id)arg5;
- (void)unRegister;
- (void)registerWithType:(int)arg1;
- (id)initWithStocks:(id)arg1 scene:(id)arg2 resultBlock:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

