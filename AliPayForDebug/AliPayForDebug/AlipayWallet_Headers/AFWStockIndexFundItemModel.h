//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AFWStockBaseModel.h"

@class NSString;

@interface AFWStockIndexFundItemModel : AFWStockBaseModel
{
    int _priceChangeStatus;
    NSString *_fundName;
    NSString *_price;
    NSString *_fundType;
    NSString *_priceChangeRatio;
    NSString *_time;
    NSString *_fundCode;
    NSString *_productId;
    NSString *_market;
    NSString *_actionUrl;
}

+ (id)modelWithfinscbffIndexFundItem:(id)arg1;
@property(readonly, copy, nonatomic) NSString *actionUrl; // @synthesize actionUrl=_actionUrl;
@property(readonly, copy, nonatomic) NSString *market; // @synthesize market=_market;
@property(readonly, copy, nonatomic) NSString *productId; // @synthesize productId=_productId;
@property(readonly, copy, nonatomic) NSString *fundCode; // @synthesize fundCode=_fundCode;
@property(readonly, copy, nonatomic) NSString *time; // @synthesize time=_time;
@property(readonly, nonatomic) int priceChangeStatus; // @synthesize priceChangeStatus=_priceChangeStatus;
@property(readonly, copy, nonatomic) NSString *priceChangeRatio; // @synthesize priceChangeRatio=_priceChangeRatio;
@property(readonly, copy, nonatomic) NSString *fundType; // @synthesize fundType=_fundType;
@property(readonly, copy, nonatomic) NSString *price; // @synthesize price=_price;
@property(readonly, copy, nonatomic) NSString *fundName; // @synthesize fundName=_fundName;
- (void).cxx_destruct;
- (id)initWithfinscbffIndexFundItem:(id)arg1;
- (id)init;

@end

