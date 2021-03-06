//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMediaBaseFunctor.h"

@class NSDictionary, XMediaAdaptiveRegulator, XMediaDetectResult;

@interface XMediaGestureFunctor : XMediaBaseFunctor
{
    struct HandGestureDetectWrapper *_handGestureDetectWrapper;
    _Bool _outputResultDetectFrame;
    _Bool _roiImageOutputOption;
    _Bool _adaptiveEnable;
    float _gestureDetectThreshold;
    float _gestureClassifyThreshold;
    float _procSuccessCpuUsage;
    int _procType;
    XMediaDetectResult *_gestureDetect;
    NSDictionary *_detectTargets;
    double _gestureDetectCostTime;
    double _lastFrameTime;
    double _jumpFrameInterval;
    XMediaAdaptiveRegulator *_adaptiveRegulator;
    double _procSuccessTime;
    double _algoInitTime;
}

+ (_Bool)isSupported;
@property(nonatomic) int procType; // @synthesize procType=_procType;
@property(nonatomic) double algoInitTime; // @synthesize algoInitTime=_algoInitTime;
@property(nonatomic) double procSuccessTime; // @synthesize procSuccessTime=_procSuccessTime;
@property(nonatomic) float procSuccessCpuUsage; // @synthesize procSuccessCpuUsage=_procSuccessCpuUsage;
@property(nonatomic) _Bool adaptiveEnable; // @synthesize adaptiveEnable=_adaptiveEnable;
@property(retain, nonatomic) XMediaAdaptiveRegulator *adaptiveRegulator; // @synthesize adaptiveRegulator=_adaptiveRegulator;
@property(nonatomic) double jumpFrameInterval; // @synthesize jumpFrameInterval=_jumpFrameInterval;
@property(nonatomic) double lastFrameTime; // @synthesize lastFrameTime=_lastFrameTime;
@property(nonatomic) double gestureDetectCostTime; // @synthesize gestureDetectCostTime=_gestureDetectCostTime;
@property(nonatomic) float gestureClassifyThreshold; // @synthesize gestureClassifyThreshold=_gestureClassifyThreshold;
@property(nonatomic) float gestureDetectThreshold; // @synthesize gestureDetectThreshold=_gestureDetectThreshold;
@property(retain, nonatomic) NSDictionary *detectTargets; // @synthesize detectTargets=_detectTargets;
@property(nonatomic) _Bool roiImageOutputOption; // @synthesize roiImageOutputOption=_roiImageOutputOption;
@property(nonatomic) _Bool outputResultDetectFrame; // @synthesize outputResultDetectFrame=_outputResultDetectFrame;
@property(copy, nonatomic) XMediaDetectResult *gestureDetect; // @synthesize gestureDetect=_gestureDetect;
- (void).cxx_destruct;
- (void)remoteLog;
- (id)gestureDetectWithFrame:(struct __CVBuffer *)arg1 cameraOrientation:(long long)arg2 isFrontCamera:(_Bool)arg3 options:(id)arg4;
- (void)algoAdaptiveConfig;
- (float)gestureScore:(id)arg1 gestureId:(id)arg2;
- (id)gestureDetect:(struct __CVBuffer *)arg1 cameraOrientation:(long long)arg2 isFrontCamera:(_Bool)arg3 options:(id)arg4;
- (id)initWithBizId:(id)arg1 modelId:(id)arg2 modelPathArray:(id)arg3 options:(id)arg4;
- (void)dealloc;

@end

