//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "APDPBGeneratedMessage.h"

@class NSString;

@interface finscbffReadTimeRequestPB : APDPBGeneratedMessage
{
}

+ (CDStruct_af61540b *)_fieldInfos;

// Remaining properties
@property(retain, nonatomic) NSString *channel; // @dynamic channel;
@property(readonly) _Bool hasChannel; // @dynamic hasChannel;
@property(readonly) _Bool hasInfoType; // @dynamic hasInfoType;
@property(readonly) _Bool hasStockCode; // @dynamic hasStockCode;
@property(readonly) _Bool hasTimestamp; // @dynamic hasTimestamp;
@property(retain, nonatomic) NSString *infoType; // @dynamic infoType;
@property(retain, nonatomic) NSString *stockCode; // @dynamic stockCode;
@property(nonatomic) long long timestamp; // @dynamic timestamp;

@end

