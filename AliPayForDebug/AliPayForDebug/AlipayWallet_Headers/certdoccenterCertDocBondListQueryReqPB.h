//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "APDPBGeneratedMessage.h"

@class NSString, PBMapStringString;

@interface certdoccenterCertDocBondListQueryReqPB : APDPBGeneratedMessage
{
}

+ (CDStruct_af61540b *)_fieldInfos;

// Remaining properties
@property(retain, nonatomic) PBMapStringString *extraInfo; // @dynamic extraInfo;
@property(readonly) _Bool hasExtraInfo; // @dynamic hasExtraInfo;
@property(readonly) _Bool hasLbsCity; // @dynamic hasLbsCity;
@property(readonly) _Bool hasShowNewUserGuide; // @dynamic hasShowNewUserGuide;
@property(retain, nonatomic) NSString *lbsCity; // @dynamic lbsCity;
@property(nonatomic) _Bool showNewUserGuide; // @dynamic showNewUserGuide;

@end

