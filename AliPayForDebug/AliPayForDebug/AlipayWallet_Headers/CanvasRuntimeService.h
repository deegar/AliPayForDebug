//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "RTAlipayProtocol-Protocol.h"
#import "RTImageLoaderProtocol-Protocol.h"

@class CanvasConfigInfo, CanvasView, NSString;

@interface CanvasRuntimeService : NSObject <RTAlipayProtocol, RTImageLoaderProtocol>
{
    CanvasConfigInfo *_configInfo;
    CanvasView *_canvasView;
    id _runtimeContext;
}

@property(nonatomic) __weak id runtimeContext; // @synthesize runtimeContext=_runtimeContext;
@property(nonatomic) __weak CanvasView *canvasView; // @synthesize canvasView=_canvasView;
@property(nonatomic) __weak CanvasConfigInfo *configInfo; // @synthesize configInfo=_configInfo;
- (void).cxx_destruct;
- (void)loadImage:(id)arg1 completed:(CDUnknownBlockType)arg2;
- (void)bindDrawable;
- (void)display;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

