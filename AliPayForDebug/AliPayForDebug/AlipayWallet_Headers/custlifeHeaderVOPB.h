//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "APDPBGeneratedMessage.h"

@class NSString, PBMapStringString;

@interface custlifeHeaderVOPB : APDPBGeneratedMessage
{
}

+ (CDStruct_af61540b *)_fieldInfos;

// Remaining properties
@property(retain, nonatomic) NSString *cityCode; // @dynamic cityCode;
@property(retain, nonatomic) NSString *cityName; // @dynamic cityName;
@property(nonatomic) long long date; // @dynamic date;
@property(retain, nonatomic) PBMapStringString *greetings; // @dynamic greetings;
@property(readonly) _Bool hasCityCode; // @dynamic hasCityCode;
@property(readonly) _Bool hasCityName; // @dynamic hasCityName;
@property(readonly) _Bool hasDate; // @dynamic hasDate;
@property(readonly) _Bool hasGreetings; // @dynamic hasGreetings;
@property(readonly) _Bool hasWeather; // @dynamic hasWeather;
@property(retain, nonatomic) NSString *weather; // @dynamic weather;

@end

