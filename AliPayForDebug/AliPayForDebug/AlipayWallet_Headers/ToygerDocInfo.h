//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "APDPBGeneratedMessage.h"

@class NSArray, NSString, ToygerRect;

@interface ToygerDocInfo : APDPBGeneratedMessage
{
}

+ (CDStruct_af61540b *)_fieldInfos;

// Remaining properties
@property(retain, nonatomic) NSString *docType; // @dynamic docType;
@property(retain, nonatomic) ToygerRect *faceRect; // @dynamic faceRect;
@property(retain, nonatomic) NSArray *fields; // @dynamic fields;
@property(readonly) _Bool hasDocType; // @dynamic hasDocType;
@property(readonly) _Bool hasFaceRect; // @dynamic hasFaceRect;
@property(readonly) _Bool hasPageNo; // @dynamic hasPageNo;
@property(nonatomic) int pageNo; // @dynamic pageNo;
@property(retain, nonatomic) NSArray *region; // @dynamic region;

@end

