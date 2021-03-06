//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSDictionary, NSError, NSString, QEKLineDataInfo;

@protocol QEngineStockObserver <NSObject>
- (void)onReceviedStock:(NSString *)arg1 datas:(NSArray *)arg2 dataType:(int)arg3 updateType:(int)arg4 err:(NSError *)arg5;
- (void)onReceviedStocksInfo:(NSDictionary *)arg1 dataType:(int)arg2 updateType:(int)arg3 err:(NSError *)arg4;

@optional
- (void)onReceivedKLine:(QEKLineDataInfo *)arg1 dataType:(int)arg2 updateType:(int)arg3 error:(NSError *)arg4;
@end

