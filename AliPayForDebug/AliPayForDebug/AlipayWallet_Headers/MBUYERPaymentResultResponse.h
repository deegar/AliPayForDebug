//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MBUYERResponseData.h"

@class NSArray, NSString;

@interface MBUYERPaymentResultResponse : MBUYERResponseData
{
    NSString *_icon;
    NSString *_headShopName;
    NSString *_shopName;
    NSString *_title;
    NSString *_subTitle;
    NSString *_orderDetailUrl;
    NSString *_usingUrl;
    NSString *_usingTitle;
    NSString *_finish;
    NSString *_salesProductCode;
    NSArray *_paymentDetailInfo;
    NSString *_realPayAmount;
    NSString *_paytoolDesc;
}

+ (Class)paymentDetailInfoElementClass;
@property(retain, nonatomic) NSString *paytoolDesc; // @synthesize paytoolDesc=_paytoolDesc;
@property(retain, nonatomic) NSString *realPayAmount; // @synthesize realPayAmount=_realPayAmount;
@property(retain, nonatomic) NSArray *paymentDetailInfo; // @synthesize paymentDetailInfo=_paymentDetailInfo;
@property(retain, nonatomic) NSString *salesProductCode; // @synthesize salesProductCode=_salesProductCode;
@property(retain, nonatomic) NSString *finish; // @synthesize finish=_finish;
@property(retain, nonatomic) NSString *usingTitle; // @synthesize usingTitle=_usingTitle;
@property(retain, nonatomic) NSString *usingUrl; // @synthesize usingUrl=_usingUrl;
@property(retain, nonatomic) NSString *orderDetailUrl; // @synthesize orderDetailUrl=_orderDetailUrl;
@property(retain, nonatomic) NSString *subTitle; // @synthesize subTitle=_subTitle;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *shopName; // @synthesize shopName=_shopName;
@property(retain, nonatomic) NSString *headShopName; // @synthesize headShopName=_headShopName;
@property(retain, nonatomic) NSString *icon; // @synthesize icon=_icon;
- (void).cxx_destruct;

@end
