//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "APDPBGeneratedMessage.h"

@class NSString, finscbffConstituentStockItemPB;

@interface finscbffAntSectorItemPB : APDPBGeneratedMessage
{
}

+ (CDStruct_af61540b *)_fieldInfos;

// Remaining properties
@property(retain, nonatomic) NSString *actionUrl; // @dynamic actionUrl;
@property(readonly) _Bool hasActionUrl; // @dynamic hasActionUrl;
@property(readonly) _Bool hasLeader; // @dynamic hasLeader;
@property(readonly) _Bool hasSubSectorId; // @dynamic hasSubSectorId;
@property(readonly) _Bool hasSubSectorName; // @dynamic hasSubSectorName;
@property(retain, nonatomic) finscbffConstituentStockItemPB *leader; // @dynamic leader;
@property(retain, nonatomic) NSString *subSectorId; // @dynamic subSectorId;
@property(retain, nonatomic) NSString *subSectorName; // @dynamic subSectorName;

@end

