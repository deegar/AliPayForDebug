//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "APDPBGeneratedMessage.h"

@class NSArray, NSString;

@interface finscbffMarketTrendItemPB : APDPBGeneratedMessage
{
}

+ (CDStruct_af61540b *)_fieldInfos;

// Remaining properties
@property(retain, nonatomic) NSString *content; // @dynamic content;
@property(retain, nonatomic) NSString *expId; // @dynamic expId;
@property(readonly) _Bool hasContent; // @dynamic hasContent;
@property(readonly) _Bool hasExpId; // @dynamic hasExpId;
@property(readonly) _Bool hasPublishTime; // @dynamic hasPublishTime;
@property(readonly) _Bool hasYiDongTime; // @dynamic hasYiDongTime;
@property(retain, nonatomic) NSArray *operateTags; // @dynamic operateTags;
@property(nonatomic) long long publishTime; // @dynamic publishTime;
@property(retain, nonatomic) NSArray *relateSector; // @dynamic relateSector;
@property(retain, nonatomic) NSArray *relateStock; // @dynamic relateStock;
@property(nonatomic) long long yiDongTime; // @dynamic yiDongTime;

@end

