//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "TBCodeRegionDetecterDelegate-Protocol.h"
#import "UIAlertViewDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UIImagePickerControllerDelegate-Protocol.h"
#import "UINavigationControllerDelegate-Protocol.h"
#import "UIPopoverControllerDelegate-Protocol.h"

@class CMMotionManager, NSArray, NSDictionary, NSMutableDictionary, NSString, NSURL, TBCodeRegionDetecter, TBScanCamCaptureManager, UIPinchGestureRecognizer, UIPopoverController, UITapGestureRecognizer, UIView;
@protocol TBScanViewControllerDelegate;

@interface TBScanViewController : UIViewController <UIImagePickerControllerDelegate, UIPopoverControllerDelegate, UINavigationControllerDelegate, UIGestureRecognizerDelegate, TBCodeRegionDetecterDelegate, UIAlertViewDelegate>
{
    unsigned int _soundID;
    _Bool _torchOff;
    double cameraWidth;
    double cameraHeight;
    struct CGSize frameSize;
    _Bool ownerViewDidLoad;
    double initCameraTime;
    int localResultType;
    NSArray *localResults;
    _Bool viewHadAppear;
    _Bool inBackGround;
    _Bool _bMultipleQueueStartCamera;
    _Bool _observeCamera;
    _Bool _cameraParamDowngrade;
    _Bool _bPlaySound;
    _Bool _bPreciseScan;
    _Bool _bResumeScanAtViewAppear;
    _Bool _bAutoZoomEnable;
    _Bool _bGraduallyAutoZoomEnable;
    _Bool _bAutoFocusRangeNearEnable;
    _Bool _bGestureEnable;
    _Bool _bStableStatusMonitorEnable;
    _Bool _shouldReleaseByMemoryWarning;
    _Bool _bAIQRImageDetectEnable;
    _Bool _bAIQRCVDetectEnable;
    _Bool _bReleaseAIQRDetecterAfterFindByAI;
    _Bool _bAIQRCVDetectForZoomEnable;
    _Bool _needSaveFrameASImageWhenDidFind;
    _Bool _needSaveFrameASImageWhenAIDetectedQR;
    _Bool _bImpactFeedBack;
    _Bool _bHadBeenAutoZoom;
    _Bool _bHadBeenGraduallyAutoZoom;
    _Bool _bHadBeenManualZoom;
    _Bool _isStable;
    int _autoZoomDelayFrameCount;
    int _bScanPaused;
    int _scanCount;
    int _continueStableCount;
    int _continueMovingCount;
    int _beginStableStatusCount;
    id <TBScanViewControllerDelegate> _delegate;
    long long _scanType;
    double _cameraWidthPercent;
    long long _imageBufferAIDetectNumInterval;
    long long _imageBufferAIDetectStartNum;
    double _flashOnBrightnessThreshold;
    double _flashOffBrightnessThreshold;
    NSString *_cameraPermissionDeniedTitle;
    NSString *_cameraPermissionDeniedMsg;
    NSString *_cameraPermissionDeniedCancelTitle;
    NSString *_scanPhotoFailedMsg;
    NSString *_scanPhotoFailedCancelTitle;
    NSMutableDictionary *_pluginDict;
    TBScanCamCaptureManager *_captureManager;
    UIView *_videoPreviewView;
    double _cameraWidth2ScreenWidth;
    UIPopoverController *_popoverView;
    double _firstScanTime;
    long long _setupResult;
    UITapGestureRecognizer *_tapGeture;
    UIPinchGestureRecognizer *_pinchGeture;
    double _currentZoomFactory;
    CMMotionManager *_motionManager;
    long long _interfaceOrientation;
    TBCodeRegionDetecter *_qrCodeDetecter;
    NSURL *_mlmodelcURL;
    NSDictionary *_detailDecodeInfoAtPauseCamera;
    struct CGRect _rectOfInterest;
    struct CGRect _animationRect;
}

@property(retain, nonatomic) NSDictionary *detailDecodeInfoAtPauseCamera; // @synthesize detailDecodeInfoAtPauseCamera=_detailDecodeInfoAtPauseCamera;
@property(retain, nonatomic) NSURL *mlmodelcURL; // @synthesize mlmodelcURL=_mlmodelcURL;
@property(retain, nonatomic) TBCodeRegionDetecter *qrCodeDetecter; // @synthesize qrCodeDetecter=_qrCodeDetecter;
@property(nonatomic) long long interfaceOrientation; // @synthesize interfaceOrientation=_interfaceOrientation;
@property(nonatomic) int beginStableStatusCount; // @synthesize beginStableStatusCount=_beginStableStatusCount;
@property(nonatomic) int continueMovingCount; // @synthesize continueMovingCount=_continueMovingCount;
@property(nonatomic) int continueStableCount; // @synthesize continueStableCount=_continueStableCount;
@property(nonatomic) _Bool isStable; // @synthesize isStable=_isStable;
@property(retain, nonatomic) CMMotionManager *motionManager; // @synthesize motionManager=_motionManager;
@property(nonatomic) double currentZoomFactory; // @synthesize currentZoomFactory=_currentZoomFactory;
@property(nonatomic) _Bool bHadBeenManualZoom; // @synthesize bHadBeenManualZoom=_bHadBeenManualZoom;
@property(nonatomic) _Bool bHadBeenGraduallyAutoZoom; // @synthesize bHadBeenGraduallyAutoZoom=_bHadBeenGraduallyAutoZoom;
@property(nonatomic) _Bool bHadBeenAutoZoom; // @synthesize bHadBeenAutoZoom=_bHadBeenAutoZoom;
@property(retain, nonatomic) UIPinchGestureRecognizer *pinchGeture; // @synthesize pinchGeture=_pinchGeture;
@property(retain, nonatomic) UITapGestureRecognizer *tapGeture; // @synthesize tapGeture=_tapGeture;
@property(nonatomic) long long setupResult; // @synthesize setupResult=_setupResult;
@property(nonatomic) double firstScanTime; // @synthesize firstScanTime=_firstScanTime;
@property(nonatomic) int scanCount; // @synthesize scanCount=_scanCount;
@property(retain, nonatomic) UIPopoverController *popoverView; // @synthesize popoverView=_popoverView;
@property(nonatomic) double cameraWidth2ScreenWidth; // @synthesize cameraWidth2ScreenWidth=_cameraWidth2ScreenWidth;
@property(nonatomic) int bScanPaused; // @synthesize bScanPaused=_bScanPaused;
@property(retain, nonatomic) UIView *videoPreviewView; // @synthesize videoPreviewView=_videoPreviewView;
@property(retain, nonatomic) TBScanCamCaptureManager *captureManager; // @synthesize captureManager=_captureManager;
@property(retain, nonatomic) NSMutableDictionary *pluginDict; // @synthesize pluginDict=_pluginDict;
@property(retain, nonatomic) NSString *scanPhotoFailedCancelTitle; // @synthesize scanPhotoFailedCancelTitle=_scanPhotoFailedCancelTitle;
@property(retain, nonatomic) NSString *scanPhotoFailedMsg; // @synthesize scanPhotoFailedMsg=_scanPhotoFailedMsg;
@property(retain, nonatomic) NSString *cameraPermissionDeniedCancelTitle; // @synthesize cameraPermissionDeniedCancelTitle=_cameraPermissionDeniedCancelTitle;
@property(retain, nonatomic) NSString *cameraPermissionDeniedMsg; // @synthesize cameraPermissionDeniedMsg=_cameraPermissionDeniedMsg;
@property(retain, nonatomic) NSString *cameraPermissionDeniedTitle; // @synthesize cameraPermissionDeniedTitle=_cameraPermissionDeniedTitle;
@property(nonatomic) _Bool bImpactFeedBack; // @synthesize bImpactFeedBack=_bImpactFeedBack;
@property(nonatomic) _Bool needSaveFrameASImageWhenAIDetectedQR; // @synthesize needSaveFrameASImageWhenAIDetectedQR=_needSaveFrameASImageWhenAIDetectedQR;
@property(nonatomic) _Bool needSaveFrameASImageWhenDidFind; // @synthesize needSaveFrameASImageWhenDidFind=_needSaveFrameASImageWhenDidFind;
@property(nonatomic) double flashOffBrightnessThreshold; // @synthesize flashOffBrightnessThreshold=_flashOffBrightnessThreshold;
@property(nonatomic) double flashOnBrightnessThreshold; // @synthesize flashOnBrightnessThreshold=_flashOnBrightnessThreshold;
@property(nonatomic) struct CGRect animationRect; // @synthesize animationRect=_animationRect;
@property(nonatomic) long long imageBufferAIDetectStartNum; // @synthesize imageBufferAIDetectStartNum=_imageBufferAIDetectStartNum;
@property(nonatomic) long long imageBufferAIDetectNumInterval; // @synthesize imageBufferAIDetectNumInterval=_imageBufferAIDetectNumInterval;
@property(nonatomic) _Bool bAIQRCVDetectForZoomEnable; // @synthesize bAIQRCVDetectForZoomEnable=_bAIQRCVDetectForZoomEnable;
@property(nonatomic) _Bool bReleaseAIQRDetecterAfterFindByAI; // @synthesize bReleaseAIQRDetecterAfterFindByAI=_bReleaseAIQRDetecterAfterFindByAI;
@property(nonatomic) _Bool bAIQRCVDetectEnable; // @synthesize bAIQRCVDetectEnable=_bAIQRCVDetectEnable;
@property(nonatomic) _Bool bAIQRImageDetectEnable; // @synthesize bAIQRImageDetectEnable=_bAIQRImageDetectEnable;
@property(nonatomic) _Bool shouldReleaseByMemoryWarning; // @synthesize shouldReleaseByMemoryWarning=_shouldReleaseByMemoryWarning;
@property(nonatomic) _Bool bStableStatusMonitorEnable; // @synthesize bStableStatusMonitorEnable=_bStableStatusMonitorEnable;
@property(nonatomic) _Bool bGestureEnable; // @synthesize bGestureEnable=_bGestureEnable;
@property(nonatomic) int autoZoomDelayFrameCount; // @synthesize autoZoomDelayFrameCount=_autoZoomDelayFrameCount;
@property(nonatomic) _Bool bAutoFocusRangeNearEnable; // @synthesize bAutoFocusRangeNearEnable=_bAutoFocusRangeNearEnable;
@property(nonatomic) _Bool bGraduallyAutoZoomEnable; // @synthesize bGraduallyAutoZoomEnable=_bGraduallyAutoZoomEnable;
@property(nonatomic, setter=setBAutoZoomEnable:) _Bool bAutoZoomEnable; // @synthesize bAutoZoomEnable=_bAutoZoomEnable;
@property(nonatomic) _Bool bResumeScanAtViewAppear; // @synthesize bResumeScanAtViewAppear=_bResumeScanAtViewAppear;
@property(nonatomic) _Bool bPreciseScan; // @synthesize bPreciseScan=_bPreciseScan;
@property(nonatomic) _Bool bPlaySound; // @synthesize bPlaySound=_bPlaySound;
@property(nonatomic) double cameraWidthPercent; // @synthesize cameraWidthPercent=_cameraWidthPercent;
@property(nonatomic) struct CGRect rectOfInterest; // @synthesize rectOfInterest=_rectOfInterest;
@property(nonatomic) long long scanType; // @synthesize scanType=_scanType;
@property(nonatomic) __weak id <TBScanViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (float)getCameraZoomFactor;
- (id)getAIDetecter;
- (long long)getCurrentInterfaceOrientation;
- (struct CGSize)getFrameSize;
- (double)getCameraHeight;
- (double)getCameraWidth;
- (double)getCameraWidth2ScreenWidth;
- (void)userTrack_private:(id)arg1 args:(id)arg2;
- (void)userTrack_private:(id)arg1;
- (void)alipayLog_private:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (long long)preferredInterfaceOrientationForPresentation;
- (_Bool)shouldAutorotate;
- (unsigned long long)supportedInterfaceOrientations;
- (void)detectedQRCodeRegions:(id)arg1 AtFrameCount:(long long)arg2;
- (void)initAIDetecter;
- (void)brightnessValue:(double)arg1;
- (void)changeCameraZoomWidthLimitFactor:(double)arg1 ByTrigger:(unsigned long long)arg2;
- (void)changeCameraZoomViaQRWidth:(double)arg1 ByTrigger:(unsigned long long)arg2;
- (void)changeCameraZoom:(double)arg1;
- (void)showRecognizeImage:(id)arg1;
- (_Bool)hasTorch;
- (_Bool)isBHadBeenManualZoom;
- (_Bool)isBHadBeenAutoZoom;
- (void)didPinch:(id)arg1;
- (void)didDoubleTap:(id)arg1;
- (void)aiModelInitError:(id)arg1;
- (void)configurationFailed:(id)arg1;
- (void)acquiringDeviceLockFailedWithError:(id)arg1;
- (void)checkStableStatus;
- (void)processPreview:(struct opaqueCMSampleBuffer *)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)enterBackground;
- (void)willEnterForeground;
- (void)captureSessionRuntimeErrorNotification:(id)arg1;
- (void)captureSessionInterruptionEndedNotification:(id)arg1;
- (void)captureSessionWasInterruptedNotification:(id)arg1;
- (void)deviceOrientationDidChangeNotification:(id)arg1;
- (void)avCaptureInputPortFormatDescriptionDidChangeNotification:(id)arg1;
- (void)continueScan;
- (void)cameraStarted:(id)arg1;
- (void)scanLocalPhotoError;
- (void)showLocalPhotoResult;
- (void)logToServerWith:(id)arg1;
- (id)decodeUIImage:(id)arg1;
- (_Bool)isCodeBounds:(struct CGRect)arg1 InImageMiddle:(struct CGSize)arg2;
- (id)decodeByAIQRDetectWithImage:(id)arg1 WithRecord:(id)arg2;
- (void)scanPhotoImage:(id)arg1;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)imagePickerControllerDidCancel:(id)arg1;
- (void)scanPhotoLibrary:(struct CGRect)arg1 permittedArrowDirections:(unsigned long long)arg2 with:(id)arg3;
- (void)scanPhotoLibrary;
- (_Bool)canSetSession:(id)arg1;
- (void)playSound;
- (void)impactShock;
- (_Bool)isUsingFrontCamera;
- (int)torchMode;
- (void)onTorch;
- (void)exitScan;
- (void)pauseScan;
- (void)resumeScan;
- (void)resumeCaptureSession;
- (void)pauseCaptureSession;
- (void)initCamera4LayoutSubviews;
- (void)onDismiss;
- (void)barCodeQRRecognized;
- (void)stopGyroUpdates;
- (void)setPreviewRectByPreset;
- (void)setCameraWidth:(double)arg1;
- (void)initCameraSize:(struct CGSize)arg1;
- (id)getDecodeDetailInfo;
- (void)startCameraWithConfig:(id)arg1;
- (void)processPlugin:(long long)arg1 withInfo:(id)arg2;
- (void)registerPlugin:(id)arg1 withType:(long long)arg2;
- (id)getPluginByType:(long long)arg1;
- (void)releaseMemory;
- (void)checkAuthorized;
- (void)setScanOn;
- (void)setTorchImage;
- (_Bool)checkPhotoLibrary;
- (void)setupView;
- (void)setUpCoreMotion;
- (void)setupCamera;
- (void)initMemory;
- (void)updateView;
- (void)becomeActive;
- (void)initCritical;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (void)viewWillLayoutSubviews;
- (void)viewWillHide;
- (void)viewWillShow;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)saveCameraDimension:(double)arg1 height:(double)arg2;
- (struct CGSize)cameraDimensionSize;
- (void)setupConfig:(id)arg1;
- (id)initWithConfig:(id)arg1;
- (void)override_viewWillShow;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

