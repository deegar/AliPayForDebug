//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KBSHOPDETAILToString.h"

@class DTInteger, DTLong, NSString;

@interface KBSHOPDETAILChargingDetail : KBSHOPDETAILToString
{
    int _selectLimit;
    NSString *_chargingId;
    NSString *_chargingName;
    NSString *_chargingImg;
    DTLong *_addPrice;
    NSString *_itemId;
    DTInteger *_quantity;
    NSString *_skuId;
}

@property(retain, nonatomic) NSString *skuId; // @synthesize skuId=_skuId;
@property(retain, nonatomic) DTInteger *quantity; // @synthesize quantity=_quantity;
@property(retain, nonatomic) NSString *itemId; // @synthesize itemId=_itemId;
@property(nonatomic) int selectLimit; // @synthesize selectLimit=_selectLimit;
@property(retain, nonatomic) DTLong *addPrice; // @synthesize addPrice=_addPrice;
@property(retain, nonatomic) NSString *chargingImg; // @synthesize chargingImg=_chargingImg;
@property(retain, nonatomic) NSString *chargingName; // @synthesize chargingName=_chargingName;
@property(retain, nonatomic) NSString *chargingId; // @synthesize chargingId=_chargingId;
- (void).cxx_destruct;

@end

