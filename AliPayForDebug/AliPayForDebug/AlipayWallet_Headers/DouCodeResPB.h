//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "APDPBGeneratedMessage.h"

@class NSData, NSString;

@interface DouCodeResPB : APDPBGeneratedMessage
{
}

+ (CDStruct_af61540b *)_fieldInfos;

// Remaining properties
@property(nonatomic) long long expDate; // @dynamic expDate;
@property(readonly) _Bool hasExpDate; // @dynamic hasExpDate;
@property(readonly) _Bool hasInstCert; // @dynamic hasInstCert;
@property(readonly) _Bool hasKeyAlg; // @dynamic hasKeyAlg;
@property(readonly) _Bool hasLimitNum; // @dynamic hasLimitNum;
@property(readonly) _Bool hasLimitPeriod; // @dynamic hasLimitPeriod;
@property(readonly) _Bool hasRefreshDate; // @dynamic hasRefreshDate;
@property(readonly) _Bool hasUserPriKey; // @dynamic hasUserPriKey;
@property(readonly) _Bool hasVersion; // @dynamic hasVersion;
@property(retain, nonatomic) NSData *instCert; // @dynamic instCert;
@property(retain, nonatomic) NSString *keyAlg; // @dynamic keyAlg;
@property(nonatomic) int limitNum; // @dynamic limitNum;
@property(nonatomic) int limitPeriod; // @dynamic limitPeriod;
@property(nonatomic) long long refreshDate; // @dynamic refreshDate;
@property(retain, nonatomic) NSData *userPriKey; // @dynamic userPriKey;
@property(nonatomic) int version; // @dynamic version;

@end

