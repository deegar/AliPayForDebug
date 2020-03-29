//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MBUYERRequestData.h"

@class NSString;

@interface MBUYERPurchaseRquest : MBUYERRequestData
{
    _Bool _needSign;
    int _quantity;
    NSString *_partnerId;
    NSString *_shopId;
    NSString *_bizProduct;
    NSString *_itemId;
    NSString *_campId;
    NSString *_remarks;
    NSString *_sourceFrom;
    NSString *_outBizNo;
    NSString *_currentPrice;
    NSString *_originalPrice;
    NSString *_scene;
    long long _requestTime;
    NSString *_reserveStartTime;
    NSString *_reserveEndTime;
    NSString *_userName;
    NSString *_phoneNumber;
    NSString *_craftsmanId;
    NSString *_extInfoStr;
    NSString *_assetId;
}

@property(retain, nonatomic) NSString *assetId; // @synthesize assetId=_assetId;
@property(retain, nonatomic) NSString *extInfoStr; // @synthesize extInfoStr=_extInfoStr;
@property(retain, nonatomic) NSString *craftsmanId; // @synthesize craftsmanId=_craftsmanId;
@property(retain, nonatomic) NSString *phoneNumber; // @synthesize phoneNumber=_phoneNumber;
@property(retain, nonatomic) NSString *userName; // @synthesize userName=_userName;
@property(retain, nonatomic) NSString *reserveEndTime; // @synthesize reserveEndTime=_reserveEndTime;
@property(retain, nonatomic) NSString *reserveStartTime; // @synthesize reserveStartTime=_reserveStartTime;
@property(nonatomic) long long requestTime; // @synthesize requestTime=_requestTime;
@property(retain, nonatomic) NSString *scene; // @synthesize scene=_scene;
@property(nonatomic) _Bool needSign; // @synthesize needSign=_needSign;
@property(retain, nonatomic) NSString *originalPrice; // @synthesize originalPrice=_originalPrice;
@property(retain, nonatomic) NSString *currentPrice; // @synthesize currentPrice=_currentPrice;
@property(retain, nonatomic) NSString *outBizNo; // @synthesize outBizNo=_outBizNo;
@property(retain, nonatomic) NSString *sourceFrom; // @synthesize sourceFrom=_sourceFrom;
@property(retain, nonatomic) NSString *remarks; // @synthesize remarks=_remarks;
@property(nonatomic) int quantity; // @synthesize quantity=_quantity;
@property(retain, nonatomic) NSString *campId; // @synthesize campId=_campId;
@property(retain, nonatomic) NSString *itemId; // @synthesize itemId=_itemId;
@property(retain, nonatomic) NSString *bizProduct; // @synthesize bizProduct=_bizProduct;
@property(retain, nonatomic) NSString *shopId; // @synthesize shopId=_shopId;
@property(retain, nonatomic) NSString *partnerId; // @synthesize partnerId=_partnerId;
- (void).cxx_destruct;

@end

