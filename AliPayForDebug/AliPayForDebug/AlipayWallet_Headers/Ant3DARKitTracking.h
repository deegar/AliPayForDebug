//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "Ant3DTracking.h"

#import "ARSessionDelegate-Protocol.h"
#import "Ant3DARKitOptimizeDelegate-Protocol.h"

@class ARSession, Ant3DARKitOptimize, NSDictionary, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface Ant3DARKitTracking : Ant3DTracking <ARSessionDelegate, Ant3DARKitOptimizeDelegate>
{
    ARSession *_session;
    NSObject<OS_dispatch_queue> *_queue;
    NSDictionary *_stateMap;
    NSDictionary *_reasonMap;
    _Bool _firstFrame;
    _Bool _initialized;
    _Bool _firstUnlimitedTracking;
    _Bool _needsUpdateAnchors;
    float _scale;
    double _lastTimestamp;
    Ant3DARKitOptimize *_arkitOptimize;
    unsigned long long _trackingStatus;
    _Bool _initializedResetProjection;
    _Bool _initializedResetPlane;
    union _GLKMatrix4 _arkitProjection;
    double _slamFovy;
    struct CGPoint _anchorPoint;
    struct CGSize _dimension;
    NSString *_modelId;
    float _distance;
    unsigned long long _resultType;
    NSString *_identifier;
    unsigned long long _updateNum;
    float _aspectRatio;
    _Bool _initUseSlam;
}

+ (_Bool)isSupported;
@property(nonatomic) _Bool initUseSlam; // @synthesize initUseSlam=_initUseSlam;
- (void).cxx_destruct;
- (void)updateRealPlaneWithDistance:(float)arg1 identifier:(id)arg2 hitResultType:(unsigned long long)arg3;
- (void)setARKitProjection;
- (void)setSlamProjection;
- (void)updateAnchors;
- (void)hitTestWithAnchor:(id)arg1;
- (void)adjustAnchor:(id)arg1;
- (void)updateAnchor:(id)arg1 withResult:(id)arg2;
-     // Error parsing type: (_GLKMatrix4={?=ffffffffffffffff}[16f])80@0:8{?=[4]}16, name: convertToGLKMatrix:
-     // Error parsing type: (_GLKMatrix4={?=ffffffffffffffff}[16f])84@0:8{?=[4]}16B80, name: adjustMatrix:rotate:
- (void)resetPlaneAndResetModel;
- (void)slamDidFinishInitializingWithFovy:(float)arg1;
- (void)didAddAnchor:(id)arg1;
- (void)sessionInterruptionEnded:(id)arg1;
- (void)sessionWasInterrupted:(id)arg1;
- (void)session:(id)arg1 didFailWithError:(id)arg2;
- (void)session:(id)arg1 cameraDidChangeTrackingState:(id)arg2;
- (void)session:(id)arg1 didUpdateAnchors:(id)arg2;
- (void)session:(id)arg1 didAddAnchors:(id)arg2;
- (void)session:(id)arg1 didUpdateFrame:(id)arg2;
- (id)getPlaneHitResultWithPoint:(struct CGPoint)arg1 withModelId:(id)arg2 dimension:(struct CGSize)arg3;
- (id)hitTestWithPoint:(struct CGPoint)arg1 viewSize:(struct CGSize)arg2;
- (void)setConfiguration:(id)arg1;
- (void)setDistance:(float)arg1;
- (void)willAddAnchor:(id)arg1;
- (void)stopTracking;
- (void)startTracking;
- (void)dealloc;
- (id)initWithCameraView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

