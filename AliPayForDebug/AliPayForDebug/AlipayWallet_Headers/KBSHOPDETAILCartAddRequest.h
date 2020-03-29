//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KBSHOPDETAILBaseCartRequest.h"

@class DTLong, KBSHOPDETAILPackageAddInfo, NSArray, NSString;

@interface KBSHOPDETAILCartAddRequest : KBSHOPDETAILBaseCartRequest
{
    int _quantity;
    NSString *_cartId;
    NSString *_bizId;
    NSString *_name;
    DTLong *_price;
    NSString *_dishId;
    NSString *_dishVersion;
    NSString *_skuId;
    NSString *_skuVersion;
    NSString *_itemType;
    NSString *_itemSubType;
    NSArray *_practiceList;
    KBSHOPDETAILPackageAddInfo *_packageAddInfo;
    NSArray *_dishAttributes;
    NSArray *_chargingGroups;
}

+ (Class)chargingGroupsElementClass;
+ (Class)dishAttributesElementClass;
+ (Class)practiceListElementClass;
@property(retain, nonatomic) NSArray *chargingGroups; // @synthesize chargingGroups=_chargingGroups;
@property(retain, nonatomic) NSArray *dishAttributes; // @synthesize dishAttributes=_dishAttributes;
@property(retain, nonatomic) KBSHOPDETAILPackageAddInfo *packageAddInfo; // @synthesize packageAddInfo=_packageAddInfo;
@property(retain, nonatomic) NSArray *practiceList; // @synthesize practiceList=_practiceList;
@property(retain, nonatomic) NSString *itemSubType; // @synthesize itemSubType=_itemSubType;
@property(retain, nonatomic) NSString *itemType; // @synthesize itemType=_itemType;
@property(retain, nonatomic) NSString *skuVersion; // @synthesize skuVersion=_skuVersion;
@property(retain, nonatomic) NSString *skuId; // @synthesize skuId=_skuId;
@property(retain, nonatomic) NSString *dishVersion; // @synthesize dishVersion=_dishVersion;
@property(retain, nonatomic) NSString *dishId; // @synthesize dishId=_dishId;
@property(nonatomic) int quantity; // @synthesize quantity=_quantity;
@property(retain, nonatomic) DTLong *price; // @synthesize price=_price;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSString *bizId; // @synthesize bizId=_bizId;
@property(retain, nonatomic) NSString *cartId; // @synthesize cartId=_cartId;
- (void).cxx_destruct;

@end

