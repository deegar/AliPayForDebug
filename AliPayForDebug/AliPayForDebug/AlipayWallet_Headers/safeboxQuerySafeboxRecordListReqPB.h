//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "APDPBGeneratedMessage.h"

@class NSString, safeboxQuerySafeboxRecordByOuterReqPB;

@interface safeboxQuerySafeboxRecordListReqPB : APDPBGeneratedMessage
{
}

+ (CDStruct_af61540b *)_fieldInfos;

// Remaining properties
@property(retain, nonatomic) NSString *bizSessionId; // @dynamic bizSessionId;
@property(readonly) _Bool hasBizSessionId; // @dynamic hasBizSessionId;
@property(readonly) _Bool hasPageIndex; // @dynamic hasPageIndex;
@property(readonly) _Bool hasPageSize; // @dynamic hasPageSize;
@property(readonly) _Bool hasQuerySafeboxRecordByOuterReq; // @dynamic hasQuerySafeboxRecordByOuterReq;
@property(nonatomic) int pageIndex; // @dynamic pageIndex;
@property(nonatomic) int pageSize; // @dynamic pageSize;
@property(retain, nonatomic) safeboxQuerySafeboxRecordByOuterReqPB *querySafeboxRecordByOuterReq; // @dynamic querySafeboxRecordByOuterReq;

@end
