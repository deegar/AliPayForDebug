//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "QEngineStockObserver-Protocol.h"

@class NSString, QEngineDataStoreAdapter;

@interface QEngineServer : NSObject <QEngineStockObserver>
{
    QEngineDataStoreAdapter *_dataStoreAdapter;
}

+ (void)cleanCacheWithType:(int)arg1;
+ (void)cleanAllCache;
+ (void)cancelAll;
+ (id)sharedInstance;
@property(readonly, nonatomic) QEngineDataStoreAdapter *dataStoreAdapter; // @synthesize dataStoreAdapter=_dataStoreAdapter;
- (void).cxx_destruct;
- (_Bool)itsSwitch;
- (void)onReceivedKLine:(id)arg1 dataType:(int)arg2 updateType:(int)arg3 error:(id)arg4;
- (void)onReceivedStock:(id)arg1 minutesData:(id)arg2 dataType:(int)arg3 updateType:(int)arg4 error:(id)arg5;
- (void)onReceivedStock:(id)arg1 minutescolumnsData:(id)arg2 dataType:(int)arg3 updateType:(int)arg4 error:(id)arg5;
- (void)onReceviedStock:(id)arg1 datas:(id)arg2 dataType:(int)arg3 updateType:(int)arg4 err:(id)arg5;
- (void)onReceviedStocksInfo:(id)arg1 dataType:(int)arg2 updateType:(int)arg3 err:(id)arg4;
- (id)filterItem:(id)arg1 withStrategy:(id)arg2;
- (id)filter:(id)arg1 withStrategy:(id)arg2;
- (void)cancelDataWithObserver:(id)arg1 scene:(id)arg2;
- (void)cancelData:(id)arg1 observer:(id)arg2 scene:(id)arg3;
- (void)cancelDataWithType:(int)arg1 observer:(id)arg2 scene:(id)arg3;
- (void)cancelData:(id)arg1 dataType:(int)arg2 observer:(id)arg3 scene:(id)arg4;
- (void)requestData:(id)arg1 strategy:(id)arg2 observer:(id)arg3 scene:(id)arg4;
- (void)requestList:(id)arg1 strategy:(id)arg2 observer:(id)arg3 scene:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

