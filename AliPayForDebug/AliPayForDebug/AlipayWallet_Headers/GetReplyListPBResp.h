//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "APDPBGeneratedMessage.h"

@class LFCPBRpcResult, NSArray;

@interface GetReplyListPBResp : APDPBGeneratedMessage
{
}

+ (CDStruct_af61540b *)_fieldInfos;

// Remaining properties
@property(nonatomic) int count; // @dynamic count;
@property(readonly) _Bool hasCount; // @dynamic hasCount;
@property(readonly) _Bool hasPb_hasMore; // @dynamic hasPb_hasMore;
@property(readonly) _Bool hasResult; // @dynamic hasResult;
@property(nonatomic) _Bool pb_hasMore; // @dynamic pb_hasMore;
@property(retain, nonatomic) NSArray *replyList; // @dynamic replyList;
@property(retain, nonatomic) LFCPBRpcResult *result; // @dynamic result;

@end

