//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "APDPBGeneratedMessage.h"

@class FinaggexpbffConfigEntryPB, NSString;

@interface FinaggexpbffConfigModelEntryPB : APDPBGeneratedMessage
{
}

+ (CDStruct_af61540b *)_fieldInfos;
+ (id)alt_configModelWithDictionary:(id)arg1;
+ (id)alt_configModelWithDictionary:(id)arg1;
- (id)description;
- (id)description;

// Remaining properties
@property(retain, nonatomic) NSString *cellId; // @dynamic cellId;
@property(retain, nonatomic) FinaggexpbffConfigEntryPB *clientConfig; // @dynamic clientConfig;
@property(readonly) _Bool hasCellId; // @dynamic hasCellId;
@property(readonly) _Bool hasClientConfig; // @dynamic hasClientConfig;
@property(readonly) _Bool hasServerTimestamp; // @dynamic hasServerTimestamp;
@property(readonly) _Bool hasTag; // @dynamic hasTag;
@property(nonatomic) long long serverTimestamp; // @dynamic serverTimestamp;
@property(retain, nonatomic) NSString *tag; // @dynamic tag;

@end

