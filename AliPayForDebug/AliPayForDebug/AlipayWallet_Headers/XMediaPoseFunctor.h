//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMediaBaseFunctor.h"

@class NSDictionary, XMediaAdaptiveRegulator;

@interface XMediaPoseFunctor : XMediaBaseFunctor
{
    struct HumanPoseDetectWrapper *_humanPoseDetector;
    struct HumanPoseScoreWrapper *_humanPoseScore;
    _Bool _adaptiveEnable;
    float _procSuccessCpuUsage;
    int _procType;
    double _poseDetectCostTime;
    NSDictionary *_algoConfig;
    double _processCostTime;
    XMediaAdaptiveRegulator *_adaptiveRegulator;
    double _algoInitTime;
    double _procSuccessTime;
}

@property(nonatomic) int procType; // @synthesize procType=_procType;
@property(nonatomic) _Bool adaptiveEnable; // @synthesize adaptiveEnable=_adaptiveEnable;
@property(nonatomic) float procSuccessCpuUsage; // @synthesize procSuccessCpuUsage=_procSuccessCpuUsage;
@property(nonatomic) double procSuccessTime; // @synthesize procSuccessTime=_procSuccessTime;
@property(nonatomic) double algoInitTime; // @synthesize algoInitTime=_algoInitTime;
@property(retain, nonatomic) XMediaAdaptiveRegulator *adaptiveRegulator; // @synthesize adaptiveRegulator=_adaptiveRegulator;
@property(nonatomic) double processCostTime; // @synthesize processCostTime=_processCostTime;
@property(retain, nonatomic) NSDictionary *algoConfig; // @synthesize algoConfig=_algoConfig;
@property(nonatomic) double poseDetectCostTime; // @synthesize poseDetectCostTime=_poseDetectCostTime;
- (void).cxx_destruct;
- (void)remoteLog;
- (void)algoAdaptiveConfig;
- (id)poseDetectWithFrame:(struct __CVBuffer *)arg1 cameraOrientation:(long long)arg2 isCameraBack:(_Bool)arg3 options:(id)arg4;
- (int)poseScore:(id)arg1 poseIndex:(int)arg2 viewWidth:(int)arg3 viewHeight:(int)arg4;
- (id)poseDetect:(struct __CVBuffer *)arg1 cameraOrientation:(long long)arg2 isFrontCamera:(_Bool)arg3 options:(id)arg4;
- (id)initWithBizId:(id)arg1 modelId:(id)arg2 modelPathArray:(id)arg3 options:(id)arg4;
- (void)dealloc;

@end

