//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, Protocol;
@protocol QEngineStockProtocal;

@protocol QEngineStockProtocal <NSObject>
- (_Bool)isEqual:(id <QEngineStockProtocal>)arg1;
- (void)setSymbol:(NSString *)arg1;
- (NSString *)getSymbol;

@optional
+ (Protocol *)getModelProtocal;
+ (NSString *)getModelName;
- (_Bool)supportFormat;
- (Class)getModelDCType;
@end

