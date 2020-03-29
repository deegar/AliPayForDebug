//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "LIVETRADEPRODSoundWaveBaseRes.h"

@class NSArray, NSString;

@interface LIVETRADEPRODSoundWavePayRes : LIVETRADEPRODSoundWaveBaseRes
{
    _Bool _isBasedOtp;
    _Bool _isOtpVerifySuccess;
    _Bool _shareSwitch;
    NSString *_tradeNo;
    NSString *_bizSubType;
    NSString *_payType;
    NSString *_attachAction;
    NSString *_promoUrl;
    NSString *_realAmount;
    NSString *_originAmount;
    NSString *_payChannelList;
    NSString *_shareTitle;
    NSString *_shareContent;
    NSString *_shareImage;
    NSArray *_shareInfoModels;
}

+ (Class)shareInfoModelsElementClass;
@property(nonatomic) _Bool shareSwitch; // @synthesize shareSwitch=_shareSwitch;
@property(retain, nonatomic) NSArray *shareInfoModels; // @synthesize shareInfoModels=_shareInfoModels;
@property(retain, nonatomic) NSString *shareImage; // @synthesize shareImage=_shareImage;
@property(retain, nonatomic) NSString *shareContent; // @synthesize shareContent=_shareContent;
@property(retain, nonatomic) NSString *shareTitle; // @synthesize shareTitle=_shareTitle;
@property(retain, nonatomic) NSString *payChannelList; // @synthesize payChannelList=_payChannelList;
@property(retain, nonatomic) NSString *originAmount; // @synthesize originAmount=_originAmount;
@property(retain, nonatomic) NSString *realAmount; // @synthesize realAmount=_realAmount;
@property(retain, nonatomic) NSString *promoUrl; // @synthesize promoUrl=_promoUrl;
@property(nonatomic) _Bool isOtpVerifySuccess; // @synthesize isOtpVerifySuccess=_isOtpVerifySuccess;
@property(nonatomic) _Bool isBasedOtp; // @synthesize isBasedOtp=_isBasedOtp;
@property(retain, nonatomic) NSString *attachAction; // @synthesize attachAction=_attachAction;
@property(retain, nonatomic) NSString *payType; // @synthesize payType=_payType;
@property(retain, nonatomic) NSString *bizSubType; // @synthesize bizSubType=_bizSubType;
@property(retain, nonatomic) NSString *tradeNo; // @synthesize tradeNo=_tradeNo;
- (void).cxx_destruct;

@end

