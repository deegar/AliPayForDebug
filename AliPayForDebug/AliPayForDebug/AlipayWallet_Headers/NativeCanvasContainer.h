//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "CanvasContainerProtocol-Protocol.h"

@class CADisplayLink, CanvasConfigInfo, CanvasContainerView, NSString, NSThread;
@protocol CanvasContainerProtocol;

@interface NativeCanvasContainer : UIView <CanvasContainerProtocol>
{
    CanvasContainerView *_canvasContainerView;
    CanvasConfigInfo *_canvasConfig;
    id <CanvasContainerProtocol> _containerDelegate;
    NSThread *_canvasThread;
    CADisplayLink *_displayLink;
}

@property(retain, nonatomic) CADisplayLink *displayLink; // @synthesize displayLink=_displayLink;
@property(nonatomic) __weak NSThread *canvasThread; // @synthesize canvasThread=_canvasThread;
@property(nonatomic) __weak id <CanvasContainerProtocol> containerDelegate; // @synthesize containerDelegate=_containerDelegate;
@property(retain, nonatomic) CanvasConfigInfo *canvasConfig; // @synthesize canvasConfig=_canvasConfig;
@property(retain, nonatomic) CanvasContainerView *canvasContainerView; // @synthesize canvasContainerView=_canvasContainerView;
- (void).cxx_destruct;
- (void)receiveCanvasException:(id)arg1;
- (void)sendGestureMessage:(id)arg1 data:(id)arg2;
- (void)receiveMessage:(id)arg1 data:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (void)stopAnimationFrame;
- (void)startAnimationFrame;
- (void)changePreferredFramesPerSecond:(long long)arg1;
- (void)displayLink:(id)arg1;
- (void)setupDisplayLink;
- (void)performBlockASyncOnThread:(CDUnknownBlockType)arg1;
- (void)preloadCanvasImage:(id)arg1;
- (void)canvasWillDestory;
- (void)updateCanvasSize:(struct CGSize)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (_Bool)isCanvasReady;
- (id)initWithFrame:(struct CGRect)arg1 Config:(id)arg2 msgDelegate:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

