//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "APDPBGeneratedMessage.h"

@class NSData, NSString;

@interface EdgeResultPB : APDPBGeneratedMessage
{
}

+ (CDStruct_af61540b *)_fieldInfos;

// Remaining properties
@property(retain, nonatomic) NSString *errorCode; // @dynamic errorCode;
@property(retain, nonatomic) NSString *extData; // @dynamic extData;
@property(nonatomic) int flag; // @dynamic flag;
@property(readonly) _Bool hasErrorCode; // @dynamic hasErrorCode;
@property(readonly) _Bool hasExtData; // @dynamic hasExtData;
@property(readonly) _Bool hasFlag; // @dynamic hasFlag;
@property(readonly) _Bool hasPolicyPackData; // @dynamic hasPolicyPackData;
@property(readonly) _Bool hasSuccess; // @dynamic hasSuccess;
@property(retain, nonatomic) NSData *policyPackData; // @dynamic policyPackData;
@property(nonatomic) _Bool success; // @dynamic success;

@end

