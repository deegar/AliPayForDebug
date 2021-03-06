//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"
#import "QEngineStockProtocal-Protocol.h"

@class NSString;

@interface QEngineStockBaseModel : NSObject <NSCoding, NSCopying, QEngineStockProtocal>
{
}

+ (id)getModelProtocal;
+ (id)getModelName;
+ (Class)getModelDCType;
- (void)setSymbol:(id)arg1;
- (id)getSymbol;
- (Class)getModelDCType;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)parseFormat;
- (_Bool)isEqual:(id)arg1;
- (void)setDataWithPb:(id)arg1;
- (_Bool)supportFormat;
- (id)initWithPbModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

