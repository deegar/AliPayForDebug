//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "APDPBGeneratedMessage.h"

@class NSString;

@interface COMQueryTopicHomeReq : APDPBGeneratedMessage
{
}

+ (CDStruct_af61540b *)_fieldInfos;

// Remaining properties
@property(nonatomic) _Bool cache; // @dynamic cache;
@property(retain, nonatomic) NSString *communityId; // @dynamic communityId;
@property(retain, nonatomic) NSString *encodedJsonExtData; // @dynamic encodedJsonExtData;
@property(readonly) _Bool hasCache; // @dynamic hasCache;
@property(readonly) _Bool hasCommunityId; // @dynamic hasCommunityId;
@property(readonly) _Bool hasEncodedJsonExtData; // @dynamic hasEncodedJsonExtData;
@property(readonly) _Bool hasTopicId; // @dynamic hasTopicId;
@property(retain, nonatomic) NSString *topicId; // @dynamic topicId;

@end

