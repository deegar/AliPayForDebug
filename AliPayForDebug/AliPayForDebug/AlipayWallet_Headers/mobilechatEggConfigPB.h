//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "APDPBGeneratedMessage.h"

@class NSString;

@interface mobilechatEggConfigPB : APDPBGeneratedMessage
{
}

+ (CDStruct_af61540b *)_fieldInfos;
- (id)description;

// Remaining properties
@property(retain, nonatomic) NSString *eggId; // @dynamic eggId;
@property(retain, nonatomic) NSString *eggName; // @dynamic eggName;
@property(nonatomic) long long expireTime; // @dynamic expireTime;
@property(readonly) _Bool hasEggId; // @dynamic hasEggId;
@property(readonly) _Bool hasEggName; // @dynamic hasEggName;
@property(readonly) _Bool hasExpireTime; // @dynamic hasExpireTime;
@property(readonly) _Bool hasKeyword; // @dynamic hasKeyword;
@property(readonly) _Bool hasResourceId; // @dynamic hasResourceId;
@property(readonly) _Bool hasStartTime; // @dynamic hasStartTime;
@property(readonly) _Bool hasTag; // @dynamic hasTag;
@property(readonly) _Bool hasType; // @dynamic hasType;
@property(readonly) _Bool hasUrl; // @dynamic hasUrl;
@property(retain, nonatomic) NSString *keyword; // @dynamic keyword;
@property(retain, nonatomic) NSString *resourceId; // @dynamic resourceId;
@property(nonatomic) long long startTime; // @dynamic startTime;
@property(retain, nonatomic) NSString *tag; // @dynamic tag;
@property(retain, nonatomic) NSString *type; // @dynamic type;
@property(retain, nonatomic) NSString *url; // @dynamic url;

@end

