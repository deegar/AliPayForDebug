//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "APDPBGeneratedMessage.h"

@class NSArray, finscbffTeachingInfoPB;

@interface finscbffCapitalFlowTodayResultPB : APDPBGeneratedMessage
{
}

+ (CDStruct_af61540b *)_fieldInfos;

// Remaining properties
@property(retain, nonatomic) NSArray *capitalFlowList; // @dynamic capitalFlowList;
@property(readonly) _Bool hasIsShow; // @dynamic hasIsShow;
@property(readonly) _Bool hasSuccess; // @dynamic hasSuccess;
@property(readonly) _Bool hasTeachingInfo; // @dynamic hasTeachingInfo;
@property(nonatomic) _Bool isShow; // @dynamic isShow;
@property(nonatomic) _Bool success; // @dynamic success;
@property(retain, nonatomic) finscbffTeachingInfoPB *teachingInfo; // @dynamic teachingInfo;

@end

