//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "APDPBGeneratedMessage.h"

@class NSString, PBMapStringString;

@interface ZimValidateResponse : APDPBGeneratedMessage
{
}

+ (CDStruct_af61540b *)_fieldInfos;

// Remaining properties
@property(retain, nonatomic) PBMapStringString *extParams; // @dynamic extParams;
@property(readonly) _Bool hasExtParams; // @dynamic hasExtParams;
@property(readonly) _Bool hasNextProtocol; // @dynamic hasNextProtocol;
@property(readonly) _Bool hasPb_hasNext; // @dynamic hasPb_hasNext;
@property(readonly) _Bool hasProductRetCode; // @dynamic hasProductRetCode;
@property(readonly) _Bool hasValidationRetCode; // @dynamic hasValidationRetCode;
@property(retain, nonatomic) NSString *nextProtocol; // @dynamic nextProtocol;
@property(nonatomic) _Bool pb_hasNext; // @dynamic pb_hasNext;
@property(nonatomic) int productRetCode; // @dynamic productRetCode;
@property(retain, nonatomic) NSString *retCodeSub; // @dynamic retCodeSub;
@property(retain, nonatomic) NSString *retMessageSub; // @dynamic retMessageSub;
@property(nonatomic) int validationRetCode; // @dynamic validationRetCode;

@end

