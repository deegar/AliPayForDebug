//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, NSString;

@interface SPMBehaviorBuilder : NSObject <NSCopying>
{
    _Bool _isTrace;
    _Bool _isChainEnable;
    _Bool _isCommonParamsEnable;
    _Bool _traceEnable;
    _Bool _oneStepTraceEnable;
    _Bool _chainEnable;
    NSString *_spmId;
    NSString *_bizCode;
    NSObject *_view;
    NSString *_pageId;
    NSString *_entityId;
    NSString *_scm;
    NSString *_nChinfo;
    NSDictionary *_param4;
    NSString *_logLevel;
    NSString *_appId;
    NSString *_ucId;
    NSMutableDictionary *_mParam5;
    NSMutableArray *_mExpourseList;
    NSArray *_expourseList;
    NSDictionary *_commonParams;
    NSDictionary *_param5;
}

@property(readonly, nonatomic) _Bool chainEnable; // @synthesize chainEnable=_chainEnable;
@property(readonly, nonatomic) _Bool oneStepTraceEnable; // @synthesize oneStepTraceEnable=_oneStepTraceEnable;
@property(readonly, nonatomic) _Bool traceEnable; // @synthesize traceEnable=_traceEnable;
@property(readonly, copy, nonatomic) NSDictionary *param5; // @synthesize param5=_param5;
@property(copy, nonatomic) NSDictionary *commonParams; // @synthesize commonParams=_commonParams;
@property(retain, nonatomic) NSArray *expourseList; // @synthesize expourseList=_expourseList;
@property(retain, nonatomic) NSMutableArray *mExpourseList; // @synthesize mExpourseList=_mExpourseList;
@property(retain, nonatomic) NSMutableDictionary *mParam5; // @synthesize mParam5=_mParam5;
@property(nonatomic) _Bool isCommonParamsEnable; // @synthesize isCommonParamsEnable=_isCommonParamsEnable;
@property(nonatomic) _Bool isChainEnable; // @synthesize isChainEnable=_isChainEnable;
@property(nonatomic) _Bool isTrace; // @synthesize isTrace=_isTrace;
@property(copy, nonatomic) NSString *ucId; // @synthesize ucId=_ucId;
@property(copy, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(copy, nonatomic) NSString *logLevel; // @synthesize logLevel=_logLevel;
@property(copy, nonatomic) NSDictionary *param4; // @synthesize param4=_param4;
@property(copy, nonatomic) NSString *nChinfo; // @synthesize nChinfo=_nChinfo;
@property(copy, nonatomic) NSString *scm; // @synthesize scm=_scm;
@property(copy, nonatomic) NSString *entityId; // @synthesize entityId=_entityId;
@property(copy, nonatomic) NSString *pageId; // @synthesize pageId=_pageId;
@property(retain, nonatomic) NSObject *view; // @synthesize view=_view;
@property(copy, nonatomic) NSString *bizCode; // @synthesize bizCode=_bizCode;
@property(copy, nonatomic) NSString *spmId; // @synthesize spmId=_spmId;
- (void).cxx_destruct;
- (_Bool)checkIfExposureItemVaild:(id)arg1;
- (_Bool)checkIfPropertyVaild;
- (void)setupForType:(long long)arg1;
- (void)appendExposureItemList:(id)arg1;
- (void)appendExposureItem:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

