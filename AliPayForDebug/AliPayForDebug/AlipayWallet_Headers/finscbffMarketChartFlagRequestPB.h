//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "APDPBGeneratedMessage.h"

@class NSString;

@interface finscbffMarketChartFlagRequestPB : APDPBGeneratedMessage
{
}

+ (CDStruct_af61540b *)_fieldInfos;

// Remaining properties
@property(nonatomic) _Bool customTimeInterval; // @dynamic customTimeInterval;
@property(nonatomic) long long endTimeStamp; // @dynamic endTimeStamp;
@property(readonly) _Bool hasCustomTimeInterval; // @dynamic hasCustomTimeInterval;
@property(readonly) _Bool hasEndTimeStamp; // @dynamic hasEndTimeStamp;
@property(readonly) _Bool hasStartTimeStamp; // @dynamic hasStartTimeStamp;
@property(readonly) _Bool hasStockCode; // @dynamic hasStockCode;
@property(nonatomic) long long startTimeStamp; // @dynamic startTimeStamp;
@property(retain, nonatomic) NSString *stockCode; // @dynamic stockCode;

@end

