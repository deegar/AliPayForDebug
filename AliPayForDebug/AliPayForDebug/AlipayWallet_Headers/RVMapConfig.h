//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol RVCConfigService;

@interface RVMapConfig : NSObject
{
    id <RVCConfigService> _configService;
    NSMutableDictionary *_markerLimitConfig;
}

+ (id)shared;
@property(retain, nonatomic) NSMutableDictionary *markerLimitConfig; // @synthesize markerLimitConfig=_markerLimitConfig;
@property(retain, nonatomic) id <RVCConfigService> configService; // @synthesize configService=_configService;
- (void).cxx_destruct;
- (id)arrayValue:(id)arg1;
- (id)dicValue:(id)arg1;
- (id)stringValue:(id)arg1;
- (_Bool)enableWorldVectorMap:(id)arg1;
- (id)APMultiMediaConfig:(id)arg1;
- (long long)maxImageCacheNumber;
- (_Bool)openImageDownsampleWithAppId:(id)arg1;
- (_Bool)degradeClusterChange;
- (_Bool)closeMemoryRelease;
- (_Bool)closePolylinePause;
- (id)useAPImageCacheUrlPrefix:(id)arg1;
- (_Bool)degradePreCreateTree;
- (_Bool)degradeLazyCreate;
- (_Bool)enableMapLoadingNotify:(id)arg1;
- (_Bool)enableLazyCall;
- (long long)maxDSLCacheNumber;
- (_Bool)enableWorldMap:(id)arg1;
- (_Bool)enableCacheUpdate:(id)arg1;
- (_Bool)openMarkerDiff:(id)arg1;
- (_Bool)enableDSL;
- (_Bool)enableDSLCache;
- (_Bool)degradeCalculate;
- (_Bool)degradePolylineAni;
- (_Bool)closeSkewDelay:(id)arg1;
- (_Bool)openRestoreMsg;
- (_Bool)degradeConvertImage;
- (_Bool)openScaleWithIncludePointAppId:(id)arg1;
- (_Bool)closeIncludePointDelay:(id)arg1;
- (_Bool)closeDelayRelease;
- (_Bool)closeDelayCreate;
- (_Bool)enableClusterControl;
- (_Bool)degradeLocationFallback;
- (_Bool)getOpenAuthApply;
- (_Bool)enableLimitRegion;
- (_Bool)openDataLogWithAppId:(id)arg1;
- (_Bool)useAppxMapOptimize;
- (_Bool)useClusterMarker;
- (_Bool)needResetIncludePointWithAppId:(id)arg1;
- (_Bool)scaledependOnIncludePiontConfig;
- (_Bool)closeDefaultMarkerImageWithConfig;
- (id)maxMarkerConfigWithAppId:(id)arg1;
- (long long)maxMarkerCountWithAppId:(id)arg1;
- (_Bool)allowsAnnotationViewSortingWithAppId:(id)arg1;
- (id)initInPrivate;

@end

