//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NBComponent.h"

#import "TEXImageOutputDelegate-Protocol.h"
#import "TEXRawDataOutputDelegate-Protocol.h"

@class NSString, TEXCameraView, TEXImageOutput, TEXRawDataOutput, TEXRecorder;

@interface NBCameraComponent : NBComponent <TEXRawDataOutputDelegate, TEXImageOutputDelegate>
{
    _Bool _isSendToRender;
    _Bool _isRecordVideoOnly;
    _Bool _cameraFrameCallbacked;
    _Bool _isRunning;
    float _ISO;
    TEXCameraView *_cameraView;
    TEXRecorder *_recorder;
    TEXRawDataOutput *_rawDataOutput;
    TEXImageOutput *_imageOutput;
    CDUnknownBlockType _finishedCallBack;
    unsigned long long _cameraMode;
    NSString *_flashMode;
    NSString *_frameFormat;
    double _frameInterval;
    double _tempFrameInterval;
    long long _exposureCompensation;
    CDStruct_1b6d18a9 _exposureDuration;
    struct CGRect _roiRect;
}

@property(nonatomic) _Bool isRunning; // @synthesize isRunning=_isRunning;
@property(nonatomic) float ISO; // @synthesize ISO=_ISO;
@property(nonatomic) long long exposureCompensation; // @synthesize exposureCompensation=_exposureCompensation;
@property(nonatomic) CDStruct_1b6d18a9 exposureDuration; // @synthesize exposureDuration=_exposureDuration;
@property(nonatomic) struct CGRect roiRect; // @synthesize roiRect=_roiRect;
@property(nonatomic) _Bool cameraFrameCallbacked; // @synthesize cameraFrameCallbacked=_cameraFrameCallbacked;
@property(nonatomic) _Bool isRecordVideoOnly; // @synthesize isRecordVideoOnly=_isRecordVideoOnly;
@property(nonatomic) double tempFrameInterval; // @synthesize tempFrameInterval=_tempFrameInterval;
@property(nonatomic) double frameInterval; // @synthesize frameInterval=_frameInterval;
@property(nonatomic) _Bool isSendToRender; // @synthesize isSendToRender=_isSendToRender;
@property(copy, nonatomic) NSString *frameFormat; // @synthesize frameFormat=_frameFormat;
@property(copy, nonatomic) NSString *flashMode; // @synthesize flashMode=_flashMode;
@property(nonatomic) unsigned long long cameraMode; // @synthesize cameraMode=_cameraMode;
@property(copy, nonatomic) CDUnknownBlockType finishedCallBack; // @synthesize finishedCallBack=_finishedCallBack;
@property(retain, nonatomic) TEXImageOutput *imageOutput; // @synthesize imageOutput=_imageOutput;
@property(retain, nonatomic) TEXRawDataOutput *rawDataOutput; // @synthesize rawDataOutput=_rawDataOutput;
@property(retain, nonatomic) TEXRecorder *recorder; // @synthesize recorder=_recorder;
@property(retain, nonatomic) TEXCameraView *cameraView; // @synthesize cameraView=_cameraView;
- (void).cxx_destruct;
- (void)dealloc;
- (void)imageOutputDidReceiveNewFrame:(id)arg1;
- (void)rawDataOutputDidReceiveNewFrame:(id)arg1;
- (void)handleVideoSoureceNotification:(id)arg1;
- (id)handleError:(id)arg1;
- (id)getLocalIdByImage:(id)arg1 qualityNum:(unsigned long long)arg2;
- (void)setRecorderSettingWithSize:(unsigned long long)arg1;
- (void)actionStopRecordWithData:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)startRecordWithCallback:(CDUnknownBlockType)arg1;
- (void)willStartRecordWithCallback:(CDUnknownBlockType)arg1;
- (void)actionStartRecordWithData:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)snapshotWithData:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)takePictureWithData:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)actionTakePhotoWithData:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)componentReceiveMessage:(id)arg1 data:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (void)setDataWithExtraInfo:(id)arg1;
- (void)componentDataDidChangeWithData:(id)arg1;
- (void)componentDidPause;
- (void)componentWillDestory;
- (id)contentView;
- (id)initWithConfig:(id)arg1 messageDelegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

