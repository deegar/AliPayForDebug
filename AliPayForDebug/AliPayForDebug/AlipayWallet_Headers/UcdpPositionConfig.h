//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "UcdpMerging-Protocol.h"

@class NSArray, NSDictionary, NSString, UcdpDataSource;

@interface UcdpPositionConfig : NSObject <UcdpMerging>
{
    int _refreshScene;
    int _realtimeReport;
    int _maxCount;
    int _positionHeight;
    long long _serverTimestamp;
    NSString *_configTag;
    NSString *_renderType;
    NSDictionary *_renderParams;
    NSString *_spmId;
    NSString *_logBizType;
    NSDictionary *_extInfoMap;
    UcdpDataSource *_dataSource;
    NSString *_type;
    NSArray *_viewPlaceList;
    NSString *_location;
    NSString *_updatePolicy;
    NSArray *_ruleList;
    NSArray *_fatigueList;
    NSString *_scm;
}

+ (id)positionConfigWithPositionConfigPB:(id)arg1;
@property(copy, nonatomic) NSString *scm; // @synthesize scm=_scm;
@property(copy, nonatomic) NSArray *fatigueList; // @synthesize fatigueList=_fatigueList;
@property(copy, nonatomic) NSArray *ruleList; // @synthesize ruleList=_ruleList;
@property(nonatomic) int positionHeight; // @synthesize positionHeight=_positionHeight;
@property(copy, nonatomic) NSString *updatePolicy; // @synthesize updatePolicy=_updatePolicy;
@property(nonatomic) int maxCount; // @synthesize maxCount=_maxCount;
@property(copy, nonatomic) NSString *location; // @synthesize location=_location;
@property(copy, nonatomic) NSArray *viewPlaceList; // @synthesize viewPlaceList=_viewPlaceList;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(retain, nonatomic) UcdpDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(copy, nonatomic) NSDictionary *extInfoMap; // @synthesize extInfoMap=_extInfoMap;
@property(nonatomic) int realtimeReport; // @synthesize realtimeReport=_realtimeReport;
@property(copy, nonatomic) NSString *logBizType; // @synthesize logBizType=_logBizType;
@property(copy, nonatomic) NSString *spmId; // @synthesize spmId=_spmId;
@property(copy, nonatomic) NSDictionary *renderParams; // @synthesize renderParams=_renderParams;
@property(copy, nonatomic) NSString *renderType; // @synthesize renderType=_renderType;
@property(nonatomic) int refreshScene; // @synthesize refreshScene=_refreshScene;
@property(copy, nonatomic) NSString *configTag; // @synthesize configTag=_configTag;
@property(nonatomic) long long serverTimestamp; // @synthesize serverTimestamp=_serverTimestamp;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

