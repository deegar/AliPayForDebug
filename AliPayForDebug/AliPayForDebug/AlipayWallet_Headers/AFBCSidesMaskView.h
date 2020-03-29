//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "AFBCMaskView-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSString, UIButton, UIImageView, UILabel;
@protocol AFBCMaskViewDelegate, AFBCMaskViewPrivateDelegate;

@interface AFBCSidesMaskView : UIView <UIGestureRecognizerDelegate, AFBCMaskView>
{
    _Bool _isLandscape;
    _Bool _needCaptureFrame;
    id <AFBCMaskViewDelegate> _delgate;
    id <AFBCMaskViewPrivateDelegate> _privateDelegate;
    UIView *_topView;
    UIView *_bottomView;
    UIView *_rectangleView;
    UIImageView *_focusImage;
    UIImageView *_guideImage;
    UIImageView *_sampleImage;
    UIImageView *_previewImage;
    UILabel *_sceneText;
    UIButton *_flashBtn;
    UIImageView *_scanGridView;
    struct CGRect _transparentRect;
    struct CGRect _originRectangleFrame;
}

@property(retain, nonatomic) UIImageView *scanGridView; // @synthesize scanGridView=_scanGridView;
@property(retain, nonatomic) UIButton *flashBtn; // @synthesize flashBtn=_flashBtn;
@property(retain, nonatomic) UILabel *sceneText; // @synthesize sceneText=_sceneText;
@property(retain, nonatomic) UIImageView *previewImage; // @synthesize previewImage=_previewImage;
@property(retain, nonatomic) UIImageView *sampleImage; // @synthesize sampleImage=_sampleImage;
@property(retain, nonatomic) UIImageView *guideImage; // @synthesize guideImage=_guideImage;
@property(retain, nonatomic) UIImageView *focusImage; // @synthesize focusImage=_focusImage;
@property(nonatomic) struct CGRect originRectangleFrame; // @synthesize originRectangleFrame=_originRectangleFrame;
@property(retain, nonatomic) UIView *rectangleView; // @synthesize rectangleView=_rectangleView;
@property(retain, nonatomic) UIView *bottomView; // @synthesize bottomView=_bottomView;
@property(retain, nonatomic) UIView *topView; // @synthesize topView=_topView;
@property(nonatomic) _Bool needCaptureFrame; // @synthesize needCaptureFrame=_needCaptureFrame;
@property(nonatomic) struct CGRect transparentRect; // @synthesize transparentRect=_transparentRect;
@property(nonatomic) _Bool isLandscape; // @synthesize isLandscape=_isLandscape;
@property(nonatomic) __weak id <AFBCMaskViewPrivateDelegate> privateDelegate; // @synthesize privateDelegate=_privateDelegate;
@property(nonatomic) __weak id <AFBCMaskViewDelegate> delgate; // @synthesize delgate=_delgate;
- (void).cxx_destruct;
- (void)resetRectWithPercentOfWidth:(double)arg1 andHeight:(double)arg2 orAspectRatio:(double)arg3;
- (void)onFlashClick:(id)arg1;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)previewImageTapGesture:(id)arg1;
- (void)sampleImageTapGesture:(id)arg1;
- (void)viewWillEnterForeground;
- (void)viewWillAppear;
- (void)showScanAnimationIfNeed;
- (void)showScanAnimation:(_Bool)arg1;
- (void)layoutTopBar;
- (void)switchFlashMode:(_Bool)arg1;
- (void)showFlashBtn:(_Bool)arg1;
- (void)showBottomBar:(_Bool)arg1;
- (void)setSceneTextColor:(id)arg1;
- (void)setSceneTextString:(id)arg1;
- (void)setPreviewImageUrl:(id)arg1;
- (void)setSampleImageUrl:(id)arg1;
- (void)setGuideImageUrl:(id)arg1;
- (void)setFocusImageUrl:(id)arg1;
- (struct CGRect)transparentRect:(_Bool)arg1;
- (void)setMaskPrivateDelegate:(id)arg1;
- (void)setMaskDelegate:(id)arg1;
- (void)addCaptureRect:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

