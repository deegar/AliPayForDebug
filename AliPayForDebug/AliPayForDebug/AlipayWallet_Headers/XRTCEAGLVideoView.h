//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "GLKViewDelegate-Protocol.h"
#import "XRTCVideoRenderer-Protocol.h"

@class EAGLContext, GLKView, NSString, XRTCDisplayLinkTimer, XRTCI420TextureCache, XRTCNV12TextureCache, XRTCVideoFrame;
@protocol RTCVideoViewDelegate, XRTCVideoViewShading;

@interface XRTCEAGLVideoView : UIView <GLKViewDelegate, XRTCVideoRenderer>
{
    XRTCDisplayLinkTimer *_timer;
    EAGLContext *_glContext;
    _Bool _isDirty;
    id <XRTCVideoViewShading> _shader;
    XRTCNV12TextureCache *_nv12TextureCache;
    XRTCI420TextureCache *_i420TextureCache;
    long long _lastDrawnFrameTimeStampNs;
    struct _opaque_pthread_mutex_t _videoFrameMutex;
    _Bool _isFirstFrame;
    id <RTCVideoViewDelegate> _delegate;
    XRTCVideoFrame *_videoFrame;
    GLKView *_glkView;
}

@property(readonly, nonatomic) GLKView *glkView; // @synthesize glkView=_glkView;
@property(retain) XRTCVideoFrame *videoFrame; // @synthesize videoFrame=_videoFrame;
@property(nonatomic) __weak id <RTCVideoViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)ensureGLContext;
- (void)willResignActive;
- (void)didBecomeActive;
- (void)teardownGL;
- (void)setupGL;
- (void)displayLinkTimerDidFire;
- (void)renderFrame:(id)arg1;
- (void)setSize:(struct CGSize)arg1;
- (void)glkView:(id)arg1 drawInRect:(struct CGRect)arg2;
- (void)layoutSubviews;
- (void)setNeedsDisplayInRect:(struct CGRect)arg1;
- (void)setNeedsDisplay;
- (struct __CVBuffer *)CVPixelBufferRefWithRotation:(int *)arg1 mirror:(_Bool *)arg2 needRelease:(_Bool *)arg3;
- (void)dealloc;
- (_Bool)configure;
- (id)initWithCoder:(id)arg1 shader:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1 shader:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

