//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "APDPBGeneratedMessage.h"

@class NSString;

@interface TinyCommand2PB : APDPBGeneratedMessage
{
}

+ (CDStruct_af61540b *)_fieldInfos;

// Remaining properties
@property(nonatomic) _Bool ack; // @dynamic ack;
@property(readonly) _Bool hasAck; // @dynamic hasAck;
@property(readonly) _Bool hasPb_data; // @dynamic hasPb_data;
@property(readonly) _Bool hasSeq; // @dynamic hasSeq;
@property(readonly) _Bool hasType; // @dynamic hasType;
@property(readonly) _Bool hasVersion; // @dynamic hasVersion;
@property(retain, nonatomic) NSString *pb_data; // @dynamic pb_data;
@property(nonatomic) int seq; // @dynamic seq;
@property(nonatomic) int type; // @dynamic type;
@property(nonatomic) int version; // @dynamic version;

@end

