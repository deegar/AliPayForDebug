//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "APDPBGeneratedMessage.h"

@class NSArray, NSString;

@interface mobileappcommonClientPGInfoRespPB : APDPBGeneratedMessage
{
}

+ (CDStruct_af61540b *)_fieldInfos;

// Remaining properties
@property(retain, nonatomic) NSArray *fatigueData; // @dynamic fatigueData;
@property(readonly) _Bool hasLastTime; // @dynamic hasLastTime;
@property(readonly) _Bool hasSuccess; // @dynamic hasSuccess;
@property(retain, nonatomic) NSString *lastTime; // @dynamic lastTime;
@property(retain, nonatomic) NSArray *pgData; // @dynamic pgData;
@property(retain, nonatomic) NSArray *pgDeleteData; // @dynamic pgDeleteData;
@property(nonatomic) _Bool success; // @dynamic success;

@end

