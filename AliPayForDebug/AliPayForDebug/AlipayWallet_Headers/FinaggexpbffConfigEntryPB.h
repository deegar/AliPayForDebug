//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "APDPBGeneratedMessage.h"

@class FinaggexpbffAsyncEntryPB, FinaggexpbffTimingRefreshEntryPB, NSArray, NSString;

@interface FinaggexpbffConfigEntryPB : APDPBGeneratedMessage
{
}

+ (CDStruct_af61540b *)_fieldInfos;
+ (id)alt_clientConfigWithDictionary:(id)arg1;
+ (id)alt_clientConfigWithDictionary:(id)arg1;
- (id)description;
- (id)description;

// Remaining properties
@property(retain, nonatomic) NSString *alert; // @dynamic alert;
@property(retain, nonatomic) FinaggexpbffAsyncEntryPB *async; // @dynamic async;
@property(retain, nonatomic) NSString *dataSource; // @dynamic dataSource;
@property(retain, nonatomic) NSString *ext; // @dynamic ext;
@property(retain, nonatomic) NSString *group; // @dynamic group;
@property(readonly) _Bool hasAlert; // @dynamic hasAlert;
@property(readonly) _Bool hasAsync; // @dynamic hasAsync;
@property(readonly) _Bool hasDataSource; // @dynamic hasDataSource;
@property(readonly) _Bool hasExt; // @dynamic hasExt;
@property(readonly) _Bool hasGroup; // @dynamic hasGroup;
@property(readonly) _Bool hasMaxAge; // @dynamic hasMaxAge;
@property(readonly) _Bool hasOperationType; // @dynamic hasOperationType;
@property(readonly) _Bool hasRefreshInterval; // @dynamic hasRefreshInterval;
@property(readonly) _Bool hasRefreshScene; // @dynamic hasRefreshScene;
@property(readonly) _Bool hasShowRedPoint; // @dynamic hasShowRedPoint;
@property(readonly) _Bool hasSpaceId; // @dynamic hasSpaceId;
@property(readonly) _Bool hasSpmId; // @dynamic hasSpmId;
@property(readonly) _Bool hasStyleScene; // @dynamic hasStyleScene;
@property(readonly) _Bool hasStyleValue; // @dynamic hasStyleValue;
@property(readonly) _Bool hasTimingRefresh; // @dynamic hasTimingRefresh;
@property(readonly) _Bool hasType; // @dynamic hasType;
@property(nonatomic) int maxAge; // @dynamic maxAge;
@property(retain, nonatomic) NSString *operationType; // @dynamic operationType;
@property(retain, nonatomic) NSString *refreshInterval; // @dynamic refreshInterval;
@property(nonatomic) int refreshScene; // @dynamic refreshScene;
@property(nonatomic) _Bool showRedPoint; // @dynamic showRedPoint;
@property(retain, nonatomic) NSString *spaceId; // @dynamic spaceId;
@property(retain, nonatomic) NSArray *spmD; // @dynamic spmD;
@property(retain, nonatomic) NSString *spmId; // @dynamic spmId;
@property(retain, nonatomic) NSString *styleScene; // @dynamic styleScene;
@property(retain, nonatomic) NSString *styleValue; // @dynamic styleValue;
@property(retain, nonatomic) FinaggexpbffTimingRefreshEntryPB *timingRefresh; // @dynamic timingRefresh;
@property(retain, nonatomic) NSString *type; // @dynamic type;

@end

