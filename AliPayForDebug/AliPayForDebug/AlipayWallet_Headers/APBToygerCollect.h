//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface APBToygerCollect : NSObject
{
    _Bool _uploadLivePic;
    _Bool _progressbar;
    _Bool _uploadBestPic;
    _Bool _uploadPoseOkPic;
    _Bool _uploadBigPic;
    _Bool _authorization;
    _Bool _uploadAsynData;
    _Bool _uploadAsynFailData;
    _Bool _asyncUp;
    _Bool _encUp;
    _Bool _guideAnimation;
    _Bool _beauty;
    _Bool _showFace;
    _Bool _asyncCameraOpration;
    _Bool _asyncToyger;
    long long _retry;
    double _minangle;
    double _maxangle;
    double _near;
    double _far;
    long long _minlight;
    long long _time;
    long long _light;
    long long _imageIndex;
    long long _uploadMonitorPic;
    long long _mineDscore;
    long long _mineVideo;
    NSArray *_actionMode;
    NSString *_backgroundColor;
    double _backgroundAlpha;
    double _quitTime;
    double _guideAnimationTime;
    double _showFaceTime;
    double _initShowFaceAlpha;
    double _endShowFaceAlpha;
    long long _uiVersion;
}

+ (id)defaulConfig;
@property(nonatomic) long long uiVersion; // @synthesize uiVersion=_uiVersion;
@property(nonatomic) _Bool asyncToyger; // @synthesize asyncToyger=_asyncToyger;
@property(nonatomic) _Bool asyncCameraOpration; // @synthesize asyncCameraOpration=_asyncCameraOpration;
@property(nonatomic) double endShowFaceAlpha; // @synthesize endShowFaceAlpha=_endShowFaceAlpha;
@property(nonatomic) double initShowFaceAlpha; // @synthesize initShowFaceAlpha=_initShowFaceAlpha;
@property(nonatomic) double showFaceTime; // @synthesize showFaceTime=_showFaceTime;
@property(nonatomic) _Bool showFace; // @synthesize showFace=_showFace;
@property(nonatomic) _Bool beauty; // @synthesize beauty=_beauty;
@property(nonatomic) double guideAnimationTime; // @synthesize guideAnimationTime=_guideAnimationTime;
@property(nonatomic) _Bool guideAnimation; // @synthesize guideAnimation=_guideAnimation;
@property(nonatomic) double quitTime; // @synthesize quitTime=_quitTime;
@property(nonatomic) double backgroundAlpha; // @synthesize backgroundAlpha=_backgroundAlpha;
@property(retain, nonatomic) NSString *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(nonatomic) _Bool encUp; // @synthesize encUp=_encUp;
@property(nonatomic) _Bool asyncUp; // @synthesize asyncUp=_asyncUp;
@property(nonatomic) _Bool uploadAsynFailData; // @synthesize uploadAsynFailData=_uploadAsynFailData;
@property(nonatomic) _Bool uploadAsynData; // @synthesize uploadAsynData=_uploadAsynData;
@property(retain, nonatomic) NSArray *actionMode; // @synthesize actionMode=_actionMode;
@property(nonatomic) long long mineVideo; // @synthesize mineVideo=_mineVideo;
@property(nonatomic) long long mineDscore; // @synthesize mineDscore=_mineDscore;
@property(nonatomic) _Bool authorization; // @synthesize authorization=_authorization;
@property(nonatomic) _Bool uploadBigPic; // @synthesize uploadBigPic=_uploadBigPic;
@property(nonatomic) _Bool uploadPoseOkPic; // @synthesize uploadPoseOkPic=_uploadPoseOkPic;
@property(nonatomic) _Bool uploadBestPic; // @synthesize uploadBestPic=_uploadBestPic;
@property(nonatomic) _Bool progressbar; // @synthesize progressbar=_progressbar;
@property(nonatomic) long long uploadMonitorPic; // @synthesize uploadMonitorPic=_uploadMonitorPic;
@property(nonatomic) _Bool uploadLivePic; // @synthesize uploadLivePic=_uploadLivePic;
@property(nonatomic) long long imageIndex; // @synthesize imageIndex=_imageIndex;
@property(nonatomic) long long light; // @synthesize light=_light;
@property(nonatomic) long long time; // @synthesize time=_time;
@property(nonatomic) long long minlight; // @synthesize minlight=_minlight;
@property(nonatomic) double far; // @synthesize far=_far;
@property(nonatomic) double near; // @synthesize near=_near;
@property(nonatomic) double maxangle; // @synthesize maxangle=_maxangle;
@property(nonatomic) double minangle; // @synthesize minangle=_minangle;
@property(nonatomic) long long retry; // @synthesize retry=_retry;
- (void).cxx_destruct;

@end
