//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSDate, NSDictionary, NSMutableArray, NSString;

@interface ACStageView : NSObject <NSCoding, NSCopying>
{
    _Bool _needReport;
    _Bool _isLimited;
    int _reportType;
    NSString *_stageCode;
    NSString *_stageName;
    NSString *_locale;
    NSString *_parentStageCode;
    NSString *_dataVersion;
    NSDictionary *_configMap;
    NSMutableArray *_appIdList;
    NSDate *_lastRefreshDate;
    NSDate *_lastReportDate;
    NSMutableArray *_shades;
}

+ (id)stageWithSyncInfo:(id)arg1 stageCode:(id)arg2;
+ (id)stageWithDictionary:(id)arg1 parentCode:(id)arg2 language:(id)arg3;
@property(nonatomic) int reportType; // @synthesize reportType=_reportType;
@property(retain, nonatomic) NSMutableArray *shades; // @synthesize shades=_shades;
@property(nonatomic) _Bool isLimited; // @synthesize isLimited=_isLimited;
@property(nonatomic) _Bool needReport; // @synthesize needReport=_needReport;
@property(retain, nonatomic) NSDate *lastReportDate; // @synthesize lastReportDate=_lastReportDate;
@property(retain, nonatomic) NSDate *lastRefreshDate; // @synthesize lastRefreshDate=_lastRefreshDate;
@property(retain, nonatomic) NSMutableArray *appIdList; // @synthesize appIdList=_appIdList;
@property(retain, nonatomic) NSDictionary *configMap; // @synthesize configMap=_configMap;
@property(copy, nonatomic) NSString *dataVersion; // @synthesize dataVersion=_dataVersion;
@property(copy, nonatomic) NSString *parentStageCode; // @synthesize parentStageCode=_parentStageCode;
@property(copy, nonatomic) NSString *locale; // @synthesize locale=_locale;
@property(copy, nonatomic) NSString *stageName; // @synthesize stageName=_stageName;
@property(copy, nonatomic) NSString *stageCode; // @synthesize stageCode=_stageCode;
- (void).cxx_destruct;
@property(nonatomic) _Bool edited;
- (id)allAppId;
- (id)sortPolicy;
- (void)removeTimeLimitAppConfig;
- (id)arhatTag;
- (id)timeLimitInfo;
- (_Bool)findAppId:(id)arg1;
- (_Bool)needHide;
- (double)currentRefreshInterval;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

