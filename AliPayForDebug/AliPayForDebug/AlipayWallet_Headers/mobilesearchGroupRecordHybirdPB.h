//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "APDPBGeneratedMessage.h"

@class NSArray, NSString, PBMapStringString;

@interface mobilesearchGroupRecordHybirdPB : APDPBGeneratedMessage
{
}

+ (CDStruct_af61540b *)_fieldInfos;

// Remaining properties
@property(retain, nonatomic) PBMapStringString *attributes; // @dynamic attributes;
@property(nonatomic) int count; // @dynamic count;
@property(retain, nonatomic) NSString *groupId; // @dynamic groupId;
@property(retain, nonatomic) NSString *groupName; // @dynamic groupName;
@property(readonly) _Bool hasAttributes; // @dynamic hasAttributes;
@property(readonly) _Bool hasCount; // @dynamic hasCount;
@property(readonly) _Bool hasGroupId; // @dynamic hasGroupId;
@property(readonly) _Bool hasGroupName; // @dynamic hasGroupName;
@property(readonly) _Bool hasMoreLinkName; // @dynamic hasMoreLinkName;
@property(readonly) _Bool hasMoreLinkUrl; // @dynamic hasMoreLinkUrl;
@property(readonly) _Bool hasPb_hasMore; // @dynamic hasPb_hasMore;
@property(readonly) _Bool hasSplit; // @dynamic hasSplit;
@property(readonly) _Bool hasTemplateId; // @dynamic hasTemplateId;
@property(readonly) _Bool hasTemplateJson; // @dynamic hasTemplateJson;
@property(readonly) _Bool hasTotal; // @dynamic hasTotal;
@property(retain, nonatomic) NSArray *hits; // @dynamic hits;
@property(retain, nonatomic) NSString *moreLinkName; // @dynamic moreLinkName;
@property(retain, nonatomic) NSString *moreLinkUrl; // @dynamic moreLinkUrl;
@property(nonatomic) _Bool pb_hasMore; // @dynamic pb_hasMore;
@property(nonatomic) _Bool split; // @dynamic split;
@property(retain, nonatomic) NSString *templateId; // @dynamic templateId;
@property(retain, nonatomic) NSString *templateJson; // @dynamic templateJson;
@property(nonatomic) int total; // @dynamic total;

@end

