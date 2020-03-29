//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MOBILECSAToString.h"

@class MOBILECSADetailPayExt, NSDate, NSDictionary, NSString;

@interface MOBILECSAMerchantPayInfo : MOBILECSAToString
{
    _Bool _checkFlag;
    _Bool _countDown;
    _Bool _autoObtain;
    _Bool _hasUnused;
    _Bool _goToPay;
    NSString *_btnUrl;
    NSString *_btnDesc;
    NSString *_countDownTitle;
    NSDate *_gmtEffective;
    NSDate *_gmtEnd;
    NSDate *_systemTime;
    NSString *_itemId;
    NSString *_customCouponSlogan;
    MOBILECSADetailPayExt *_customCouponExt;
    NSDictionary *_extMap;
}

+ (Class)extMapElementClass;
@property(retain, nonatomic) NSDictionary *extMap; // @synthesize extMap=_extMap;
@property(retain, nonatomic) MOBILECSADetailPayExt *customCouponExt; // @synthesize customCouponExt=_customCouponExt;
@property(retain, nonatomic) NSString *customCouponSlogan; // @synthesize customCouponSlogan=_customCouponSlogan;
@property(nonatomic) _Bool goToPay; // @synthesize goToPay=_goToPay;
@property(nonatomic) _Bool hasUnused; // @synthesize hasUnused=_hasUnused;
@property(nonatomic) _Bool autoObtain; // @synthesize autoObtain=_autoObtain;
@property(retain, nonatomic) NSString *itemId; // @synthesize itemId=_itemId;
@property(retain, nonatomic) NSDate *systemTime; // @synthesize systemTime=_systemTime;
@property(retain, nonatomic) NSDate *gmtEnd; // @synthesize gmtEnd=_gmtEnd;
@property(retain, nonatomic) NSDate *gmtEffective; // @synthesize gmtEffective=_gmtEffective;
@property(retain, nonatomic) NSString *countDownTitle; // @synthesize countDownTitle=_countDownTitle;
@property(nonatomic) _Bool countDown; // @synthesize countDown=_countDown;
@property(nonatomic) _Bool checkFlag; // @synthesize checkFlag=_checkFlag;
@property(retain, nonatomic) NSString *btnDesc; // @synthesize btnDesc=_btnDesc;
@property(retain, nonatomic) NSString *btnUrl; // @synthesize btnUrl=_btnUrl;
- (void).cxx_destruct;

@end

