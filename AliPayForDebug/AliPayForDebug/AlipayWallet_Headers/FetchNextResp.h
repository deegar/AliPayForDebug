//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "APDPBGeneratedMessage.h"

@class NSArray, ZHomeBaseRpcResult;

@interface FetchNextResp : APDPBGeneratedMessage
{
}

+ (CDStruct_af61540b *)_fieldInfos;

// Remaining properties
@property(retain, nonatomic) ZHomeBaseRpcResult *base; // @dynamic base;
@property(retain, nonatomic) NSArray *feed; // @dynamic feed;
@property(readonly) _Bool hasBase; // @dynamic hasBase;
@property(readonly) _Bool hasPb_hasMore; // @dynamic hasPb_hasMore;
@property(nonatomic) _Bool pb_hasMore; // @dynamic pb_hasMore;

@end

