//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "APDPBGeneratedMessage.h"

@class LFCPBObjectInfo, NSString;

@interface GetReplyListPBReq : APDPBGeneratedMessage
{
}

+ (CDStruct_af61540b *)_fieldInfos;

// Remaining properties
@property(readonly) _Bool hasLastReplyId; // @dynamic hasLastReplyId;
@property(readonly) _Bool hasObjectInfo; // @dynamic hasObjectInfo;
@property(readonly) _Bool hasOrderBy; // @dynamic hasOrderBy;
@property(readonly) _Bool hasPageSize; // @dynamic hasPageSize;
@property(retain, nonatomic) NSString *lastReplyId; // @dynamic lastReplyId;
@property(retain, nonatomic) LFCPBObjectInfo *objectInfo; // @dynamic objectInfo;
@property(retain, nonatomic) NSString *orderBy; // @dynamic orderBy;
@property(nonatomic) int pageSize; // @dynamic pageSize;

@end

