//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "APMOCRCameraViewDelegate-Protocol.h"

@class APMOCRCameraViewController, APMOCRConfigure, NSDictionary, NSString, UIImage;
@protocol APMOCRManagerDelegate;

@interface APMOCRManager : NSObject <APMOCRCameraViewDelegate>
{
    _Bool _imageUploaded;
    id <APMOCRManagerDelegate> _delegate;
    APMOCRConfigure *_ocrConfig;
    APMOCRCameraViewController *_cameraVC;
    NSString *_detectResult;
    UIImage *_uploadImage;
    NSString *_modelFileId;
    NSString *_modelFileMd5;
    NSDictionary *_ocrModelConfig;
}

+ (_Bool)isOcrSupported;
@property(retain, nonatomic) NSDictionary *ocrModelConfig; // @synthesize ocrModelConfig=_ocrModelConfig;
@property(retain, nonatomic) NSString *modelFileMd5; // @synthesize modelFileMd5=_modelFileMd5;
@property(retain, nonatomic) NSString *modelFileId; // @synthesize modelFileId=_modelFileId;
@property(retain, nonatomic) UIImage *uploadImage; // @synthesize uploadImage=_uploadImage;
@property(nonatomic) _Bool imageUploaded; // @synthesize imageUploaded=_imageUploaded;
@property(copy, nonatomic) NSString *detectResult; // @synthesize detectResult=_detectResult;
@property(retain, nonatomic) APMOCRCameraViewController *cameraVC; // @synthesize cameraVC=_cameraVC;
@property(retain, nonatomic) APMOCRConfigure *ocrConfig; // @synthesize ocrConfig=_ocrConfig;
@property(nonatomic) __weak id <APMOCRManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)onOCRCameraViewResult:(id)arg1 uploadCardImage:(id)arg2;
- (void)remoteLogWithDetectResult:(int)arg1 imageCloudId:(id)arg2 ocrRst:(id)arg3 subRst:(id)arg4;
- (id)getParamsWithResult:(int)arg1 fileSize:(id)arg2 time:(double)arg3;
- (id)getConfigDictionaryWithKey:(id)arg1;
- (void)uploadDetectFaildCardImageWithSubmitResult:(id)arg1;
- (void)downloadModelFileWith:(id)arg1 md5:(id)arg2;
- (void)downloadOCRModel;
- (_Bool)checkModelsExistedWithDirPath:(id)arg1;
- (void)ocrDetectErrorWithCode:(long long)arg1 errMsg:(id)arg2;
- (void)submitResult:(id)arg1;
- (id)pushCameraControllerWithContainer:(id)arg1;
- (void)dealloc;
- (id)initWithOCRConfigure:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

