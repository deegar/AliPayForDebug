//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MBUYERResponseData.h"

@class MBUYERReserveInfo, NSArray, NSString;

@interface MBUYERBaseCartResponse : MBUYERResponseData
{
    NSArray *_goodsInfos;
    NSString *_orderAmount;
    NSString *_remainderAmount;
    NSArray *_goodsVoucherList;
    NSArray *_alipayDiscountList;
    NSString *_consultiveId;
    NSString *_remarks;
    MBUYERReserveInfo *_reserveInfo;
    NSString *_refundTipsTemplate;
    NSString *_refundTipsRed;
    NSString *_shopName;
    NSString *_headShopName;
    NSArray *_generalVoucherList;
    NSArray *_showVoucherList;
}

+ (Class)showVoucherListElementClass;
+ (Class)generalVoucherListElementClass;
+ (Class)alipayDiscountListElementClass;
+ (Class)goodsVoucherListElementClass;
+ (Class)goodsInfosElementClass;
@property(retain, nonatomic) NSArray *showVoucherList; // @synthesize showVoucherList=_showVoucherList;
@property(retain, nonatomic) NSArray *generalVoucherList; // @synthesize generalVoucherList=_generalVoucherList;
@property(retain, nonatomic) NSString *headShopName; // @synthesize headShopName=_headShopName;
@property(retain, nonatomic) NSString *shopName; // @synthesize shopName=_shopName;
@property(retain, nonatomic) NSString *refundTipsRed; // @synthesize refundTipsRed=_refundTipsRed;
@property(retain, nonatomic) NSString *refundTipsTemplate; // @synthesize refundTipsTemplate=_refundTipsTemplate;
@property(retain, nonatomic) MBUYERReserveInfo *reserveInfo; // @synthesize reserveInfo=_reserveInfo;
@property(retain, nonatomic) NSString *remarks; // @synthesize remarks=_remarks;
@property(retain, nonatomic) NSString *consultiveId; // @synthesize consultiveId=_consultiveId;
@property(retain, nonatomic) NSArray *alipayDiscountList; // @synthesize alipayDiscountList=_alipayDiscountList;
@property(retain, nonatomic) NSArray *goodsVoucherList; // @synthesize goodsVoucherList=_goodsVoucherList;
@property(retain, nonatomic) NSString *remainderAmount; // @synthesize remainderAmount=_remainderAmount;
@property(retain, nonatomic) NSString *orderAmount; // @synthesize orderAmount=_orderAmount;
@property(retain, nonatomic) NSArray *goodsInfos; // @synthesize goodsInfos=_goodsInfos;
- (void).cxx_destruct;

@end

