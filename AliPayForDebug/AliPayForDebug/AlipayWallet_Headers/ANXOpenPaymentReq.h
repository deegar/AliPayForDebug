//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "APDPBGeneratedMessage.h"

@class NSString;

@interface ANXOpenPaymentReq : APDPBGeneratedMessage
{
}

+ (CDStruct_af61540b *)_fieldInfos;

// Remaining properties
@property(readonly) _Bool hasTid; // @dynamic hasTid;
@property(readonly) _Bool hasToken; // @dynamic hasToken;
@property(readonly) _Bool hasVerifyId; // @dynamic hasVerifyId;
@property(retain, nonatomic) NSString *tid; // @dynamic tid;
@property(retain, nonatomic) NSString *token; // @dynamic token;
@property(retain, nonatomic) NSString *verifyId; // @dynamic verifyId;

@end

