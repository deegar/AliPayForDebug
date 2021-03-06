//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSLock, NSString;

@interface MaterialManager : NSObject
{
    char *frameData;
    char *materialdata;
    long long currentMaterialN;
    int nFace;
    float facevertex[3][8];
    _Bool isContinueDetectNoFace;
    _Bool isMirror;
    _Bool isToUpdateMaterial;
    NSLock *headlock;
    struct CFaceTrackEngine *pFaceTrackCls;
    struct Falcon_FACE_TRACKING_RESULT face_tracking_result[3];
    _Bool isInitFaceDataSuccess;
    struct FrameFaceInfo preFaceInfo[3];
    long long noFaceIndex;
    long long currentFrameN;
    NSString *oldpath;
    NSDictionary *JsonObject;
    _Bool isPreLoadImgOk;
    long long preVideoOrientation;
    _Bool _faceModelDownloading;
    NSString *_faceModelPath;
}

@property(nonatomic) _Bool faceModelDownloading; // @synthesize faceModelDownloading=_faceModelDownloading;
@property(retain, nonatomic) NSString *faceModelPath; // @synthesize faceModelPath=_faceModelPath;
- (void).cxx_destruct;
- (void)dealloc;
- (long long)getSingleFrameRenderMaterial:(id)arg1 width:(long long)arg2 height:(long long)arg3 widestep:(long long)arg4 VideoOrientation:(long long)arg5;
- (_Bool)calCurrentMaterialN:(id)arg1;
- (_Bool)getDataFromImg:(id)arg1;
- (_Bool)readJson:(id)arg1;
- (struct CGRect)ImgResizeForHead:(id)arg1 FrameW:(long long)arg2 FrameH:(long long)arg3;
- (_Bool)updateMaterialDataAndCalVertex:(long long)arg1 framewidth:(long long)arg2 frameheight:(long long)arg3;
- (void)correctFacePT:(long long)arg1 imgw:(long long)arg2 imgh:(long long)arg3;
- (void)scaleFacePT:(float)arg1 offsetx:(float)arg2 ratioy:(float)arg3 offsety:(float)arg4;
- (id)getImgFeaturePoint:(id)arg1;
- (id)init:(long long)arg1 height:(long long)arg2;
- (id)initForIntelligentCut;
- (void)processFace:(long long)arg1 height:(long long)arg2 widestep:(long long)arg3;
- (_Bool)loadYunOSFaceData:(long long)arg1 height:(long long)arg2;

@end

