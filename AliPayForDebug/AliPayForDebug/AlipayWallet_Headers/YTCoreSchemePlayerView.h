//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIGestureRecognizer;

@interface YTCoreSchemePlayerView : UIView
{
    _Bool _needSightEnhance;
    _Bool _needSightEnhanceStatus;
    _Bool _spheer;
    _Bool _gyroscope;
    _Bool _spheerNormalized;
    _Bool _lockScreen;
    _Bool _yellowLine;
    _Bool _renderActive;
    _Bool _spheerAd;
    _Bool _currentIsPlayingVideo;
    _Bool _localPlay;
    _Bool _needStopRenderVideo;
    _Bool _VRMode;
    _Bool _VRModelVertical;
    _Bool _isLiveVideo;
    unsigned long long _gravity;
    unsigned long long _focusGravity;
    UIGestureRecognizer *_gestureRecognizer;
    struct CGRect _eaglFrameRect;
}

@property(nonatomic) _Bool isLiveVideo; // @synthesize isLiveVideo=_isLiveVideo;
@property(nonatomic) _Bool VRModelVertical; // @synthesize VRModelVertical=_VRModelVertical;
@property(nonatomic) _Bool VRMode; // @synthesize VRMode=_VRMode;
@property(readonly, nonatomic) struct CGRect eaglFrameRect; // @synthesize eaglFrameRect=_eaglFrameRect;
@property(nonatomic) _Bool needStopRenderVideo; // @synthesize needStopRenderVideo=_needStopRenderVideo;
@property(nonatomic) _Bool localPlay; // @synthesize localPlay=_localPlay;
@property(nonatomic) _Bool currentIsPlayingVideo; // @synthesize currentIsPlayingVideo=_currentIsPlayingVideo;
@property(nonatomic) _Bool spheerAd; // @synthesize spheerAd=_spheerAd;
@property(readonly, nonatomic) _Bool renderActive; // @synthesize renderActive=_renderActive;
@property(nonatomic) _Bool yellowLine; // @synthesize yellowLine=_yellowLine;
@property(nonatomic) _Bool lockScreen; // @synthesize lockScreen=_lockScreen;
@property(retain, nonatomic) UIGestureRecognizer *gestureRecognizer; // @synthesize gestureRecognizer=_gestureRecognizer;
@property(nonatomic) _Bool spheerNormalized; // @synthesize spheerNormalized=_spheerNormalized;
@property(nonatomic) _Bool gyroscope; // @synthesize gyroscope=_gyroscope;
@property(nonatomic) _Bool spheer; // @synthesize spheer=_spheer;
@property(nonatomic) _Bool needSightEnhanceStatus; // @synthesize needSightEnhanceStatus=_needSightEnhanceStatus;
@property(nonatomic) _Bool needSightEnhance; // @synthesize needSightEnhance=_needSightEnhance;
@property(nonatomic) unsigned long long focusGravity; // @synthesize focusGravity=_focusGravity;
@property(nonatomic) unsigned long long gravity; // @synthesize gravity=_gravity;
- (void).cxx_destruct;
- (void)setRotationMatrix:(const float *)arg1 length:(long long)arg2;
- (void)snapShotOneWithSize:(struct CGSize)arg1 andNotificationKey:(id)arg2;
- (void)enableCoreVideoRender;
- (void)disableCoreVideoRender;
- (void)deinit;
- (void)disableRender;
- (void)enableRender;
- (void)dealloc;

@end

