//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "APDPBGeneratedMessage.h"

#import "NSCoding-Protocol.h"

@class NSString;

@interface COMStickFeed : APDPBGeneratedMessage <NSCoding>
{
}

+ (CDStruct_af61540b *)_fieldInfos;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

// Remaining properties
@property(retain, nonatomic) NSString *digest; // @dynamic digest;
@property(retain, nonatomic) NSString *feedId; // @dynamic feedId;
@property(readonly) _Bool hasDigest; // @dynamic hasDigest;
@property(readonly) _Bool hasFeedId; // @dynamic hasFeedId;
@property(readonly) _Bool hasSchema; // @dynamic hasSchema;
@property(readonly) _Bool hasType; // @dynamic hasType;
@property(retain, nonatomic) NSString *schema; // @dynamic schema;
@property(nonatomic) int type; // @dynamic type;

@end

