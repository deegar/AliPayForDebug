//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "APDPBGeneratedMessage.h"

@class NSString;

@interface CalendarQueryRequestPB : APDPBGeneratedMessage
{
}

+ (CDStruct_af61540b *)_fieldInfos;

// Remaining properties
@property(retain, nonatomic) NSString *boothId; // @dynamic boothId;
@property(nonatomic) long long endDate; // @dynamic endDate;
@property(readonly) _Bool hasBoothId; // @dynamic hasBoothId;
@property(readonly) _Bool hasEndDate; // @dynamic hasEndDate;
@property(readonly) _Bool hasSourceFrom; // @dynamic hasSourceFrom;
@property(readonly) _Bool hasStartDate; // @dynamic hasStartDate;
@property(readonly) _Bool hasUserId; // @dynamic hasUserId;
@property(retain, nonatomic) NSString *sourceFrom; // @dynamic sourceFrom;
@property(nonatomic) long long startDate; // @dynamic startDate;
@property(retain, nonatomic) NSString *userId; // @dynamic userId;

@end

