//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MBUYERToString.h"

@class NSDate, NSString;

@interface MBUYERPreference : MBUYERToString
{
    _Bool _shareVoucher;
    _Bool _voucherReduce;
    NSString *_id;
    NSString *_name;
    NSString *_sharedUserId;
    NSString *_voucherReduceDesc;
    NSString *_shareUserName;
    NSString *_rule;
    NSString *_payAmount;
    NSString *_originalPrice;
    NSString *_actualPrice;
    NSString *_voucherStatus;
    NSString *_voucherStatusWithPcard;
    NSDate *_gmtCreate;
    NSString *_discountLimitTips;
}

@property(retain, nonatomic) NSString *discountLimitTips; // @synthesize discountLimitTips=_discountLimitTips;
@property(retain, nonatomic) NSDate *gmtCreate; // @synthesize gmtCreate=_gmtCreate;
@property(retain, nonatomic) NSString *voucherStatusWithPcard; // @synthesize voucherStatusWithPcard=_voucherStatusWithPcard;
@property(retain, nonatomic) NSString *voucherStatus; // @synthesize voucherStatus=_voucherStatus;
@property(retain, nonatomic) NSString *actualPrice; // @synthesize actualPrice=_actualPrice;
@property(retain, nonatomic) NSString *originalPrice; // @synthesize originalPrice=_originalPrice;
@property(retain, nonatomic) NSString *payAmount; // @synthesize payAmount=_payAmount;
@property(retain, nonatomic) NSString *rule; // @synthesize rule=_rule;
@property(retain, nonatomic) NSString *shareUserName; // @synthesize shareUserName=_shareUserName;
@property(retain, nonatomic) NSString *voucherReduceDesc; // @synthesize voucherReduceDesc=_voucherReduceDesc;
@property(nonatomic) _Bool voucherReduce; // @synthesize voucherReduce=_voucherReduce;
@property(nonatomic) _Bool shareVoucher; // @synthesize shareVoucher=_shareVoucher;
@property(retain, nonatomic) NSString *sharedUserId; // @synthesize sharedUserId=_sharedUserId;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSString *id; // @synthesize id=_id;
- (void).cxx_destruct;

@end

