//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WACameraSourceClient-Protocol.h"
#import "WADetectorClient-Protocol.h"

@class NSDictionary, NSString, WAARFrame, WACameraInfo, WACameraSource, WADetector;
@protocol OS_dispatch_queue, WAIJSBridge;

@interface WAARSession : NSObject <WACameraSourceClient, WADetectorClient>
{
    _Bool _syncDetector;
    WACameraSource *_currentCameraSource;
    NSDictionary *_registeredDetectors;
    NSDictionary *_registeredCameraSources;
    id <WAIJSBridge> _jsBridge;
    id _webview;
    WACameraInfo *_currentCameraInfo;
    WADetector *_currentDetector;
    NSObject<OS_dispatch_queue> *_detectorQueue;
    NSString *_currentDetectorName;
    unsigned long long _cameraState;
    unsigned long long _detectorState;
    WAARFrame *_currentFrame;
}

@property(retain) WAARFrame *currentFrame; // @synthesize currentFrame=_currentFrame;
@property _Bool syncDetector; // @synthesize syncDetector=_syncDetector;
@property unsigned long long detectorState; // @synthesize detectorState=_detectorState;
@property unsigned long long cameraState; // @synthesize cameraState=_cameraState;
@property(retain) NSString *currentDetectorName; // @synthesize currentDetectorName=_currentDetectorName;
@property(retain) NSObject<OS_dispatch_queue> *detectorQueue; // @synthesize detectorQueue=_detectorQueue;
@property(retain) WADetector *currentDetector; // @synthesize currentDetector=_currentDetector;
@property(retain) WACameraInfo *currentCameraInfo; // @synthesize currentCameraInfo=_currentCameraInfo;
@property(nonatomic) __weak id webview; // @synthesize webview=_webview;
@property(nonatomic) __weak id <WAIJSBridge> jsBridge; // @synthesize jsBridge=_jsBridge;
@property(retain) NSDictionary *registeredCameraSources; // @synthesize registeredCameraSources=_registeredCameraSources;
@property(retain) NSDictionary *registeredDetectors; // @synthesize registeredDetectors=_registeredDetectors;
@property(readonly) WACameraSource *currentCameraSource; // @synthesize currentCameraSource=_currentCameraSource;
- (void).cxx_destruct;
- (void)dealloc;
- (unsigned long long)videoRotation;
- (void)setupDetectorCameraInfo;
- (void)releaseDetector;
- (void)stopSession;
- (void)releaseCamera;
- (void)cameraDidStop;
- (void)cameraDidPause;
- (void)cameraDidResume;
- (void)cameraDidFailWithErrorCode:(unsigned long long)arg1;
- (int)authorizationStatusForCamera;
- (void)cameraDidUpdateSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 withUserContext:(id)arg2;
- (void)cameraDidUpdateCameraInfo:(id)arg1 forDetector:(_Bool)arg2;
- (void)cameraDidOpenSuccessWithInfo:(id)arg1;
- (void)sendInitResultToPage:(int)arg1;
- (void)sendResultToPage:(id)arg1 forceEvent:(_Bool)arg2;
- (void)sendResultToPage:(id)arg1;
- (void)setDetectorOption:(id)arg1;
- (unsigned long long)createDetector:(id)arg1 withOpions:(id)arg2;
- (void)openCamera:(id)arg1 withOptions:(id)arg2;
- (void)operateDetectorInQueue:(unsigned long long)arg1;
- (void)operateDetector:(unsigned long long)arg1;
- (id)currentDetectorMetadata;
- (void)bridgeDidClose;
- (id)init;
- (id)takePhotoWithId:(id)arg1 delegate:(id)arg2;

@end

