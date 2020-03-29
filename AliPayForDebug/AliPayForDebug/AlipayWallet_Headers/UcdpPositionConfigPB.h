//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "APDPBGeneratedMessage.h"

@class NSArray, NSString, PBMapStringString, UcdpDataSourcePB;

@interface UcdpPositionConfigPB : APDPBGeneratedMessage
{
}

+ (CDStruct_af61540b *)_fieldInfos;

// Remaining properties
@property(retain, nonatomic) NSString *configTag; // @dynamic configTag;
@property(retain, nonatomic) UcdpDataSourcePB *dataSource; // @dynamic dataSource;
@property(retain, nonatomic) PBMapStringString *extInfoMap; // @dynamic extInfoMap;
@property(retain, nonatomic) NSArray *fatigueList; // @dynamic fatigueList;
@property(readonly) _Bool hasConfigTag; // @dynamic hasConfigTag;
@property(readonly) _Bool hasDataSource; // @dynamic hasDataSource;
@property(readonly) _Bool hasExtInfoMap; // @dynamic hasExtInfoMap;
@property(readonly) _Bool hasLocation; // @dynamic hasLocation;
@property(readonly) _Bool hasLogBizType; // @dynamic hasLogBizType;
@property(readonly) _Bool hasMaxCount; // @dynamic hasMaxCount;
@property(readonly) _Bool hasPositionHeight; // @dynamic hasPositionHeight;
@property(readonly) _Bool hasRealtimeReport; // @dynamic hasRealtimeReport;
@property(readonly) _Bool hasRefreshScene; // @dynamic hasRefreshScene;
@property(readonly) _Bool hasRenderParams; // @dynamic hasRenderParams;
@property(readonly) _Bool hasRenderType; // @dynamic hasRenderType;
@property(readonly) _Bool hasScm; // @dynamic hasScm;
@property(readonly) _Bool hasServerTimestamp; // @dynamic hasServerTimestamp;
@property(readonly) _Bool hasSpmId; // @dynamic hasSpmId;
@property(readonly) _Bool hasType; // @dynamic hasType;
@property(readonly) _Bool hasUpdatePolicy; // @dynamic hasUpdatePolicy;
@property(retain, nonatomic) NSString *location; // @dynamic location;
@property(retain, nonatomic) NSString *logBizType; // @dynamic logBizType;
@property(nonatomic) int maxCount; // @dynamic maxCount;
@property(nonatomic) int positionHeight; // @dynamic positionHeight;
@property(nonatomic) int realtimeReport; // @dynamic realtimeReport;
@property(nonatomic) int refreshScene; // @dynamic refreshScene;
@property(retain, nonatomic) PBMapStringString *renderParams; // @dynamic renderParams;
@property(retain, nonatomic) NSString *renderType; // @dynamic renderType;
@property(retain, nonatomic) NSArray *ruleList; // @dynamic ruleList;
@property(retain, nonatomic) NSString *scm; // @dynamic scm;
@property(nonatomic) long long serverTimestamp; // @dynamic serverTimestamp;
@property(retain, nonatomic) NSString *spmId; // @dynamic spmId;
@property(retain, nonatomic) NSString *type; // @dynamic type;
@property(retain, nonatomic) NSString *updatePolicy; // @dynamic updatePolicy;
@property(retain, nonatomic) NSArray *viewPlaceList; // @dynamic viewPlaceList;

@end

