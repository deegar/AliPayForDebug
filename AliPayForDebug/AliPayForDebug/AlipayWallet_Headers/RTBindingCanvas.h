//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RTBinding.h"

@class APGEAGLContext;
@protocol APGTextureProtocol, RTBindingCanvasProtocol;

@interface RTBindingCanvas : RTBinding
{
    _Bool _isOnScreen;
    _Bool _isMini;
    short _contextType;
    short _width;
    short _height;
    short _ID;
    float _ratio;
    int _canvasWidth;
    int _canvasHeight;
    RTBinding<APGTextureProtocol> *_renderContext;
    id <RTBindingCanvasProtocol> _delegate;
    APGEAGLContext *_apeaglContext;
    struct OpaqueJSValue *_jsContext2D;
    struct OpaqueJSValue *_jsContextWebGL;
}

+ (struct OpaqueJSClass *)createJSClassWithPropertyAndFunctions;
@property(nonatomic) struct OpaqueJSValue *jsContextWebGL; // @synthesize jsContextWebGL=_jsContextWebGL;
@property(nonatomic) struct OpaqueJSValue *jsContext2D; // @synthesize jsContext2D=_jsContext2D;
@property(nonatomic) __weak APGEAGLContext *apeaglContext; // @synthesize apeaglContext=_apeaglContext;
@property(nonatomic) int canvasHeight; // @synthesize canvasHeight=_canvasHeight;
@property(nonatomic) int canvasWidth; // @synthesize canvasWidth=_canvasWidth;
@property(nonatomic) _Bool isMini; // @synthesize isMini=_isMini;
@property(nonatomic) _Bool isOnScreen; // @synthesize isOnScreen=_isOnScreen;
@property(nonatomic) short ID; // @synthesize ID=_ID;
@property(nonatomic) short height; // @synthesize height=_height;
@property(nonatomic) short width; // @synthesize width=_width;
@property(nonatomic) float ratio; // @synthesize ratio=_ratio;
@property(nonatomic) __weak id <RTBindingCanvasProtocol> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak RTBinding<APGTextureProtocol> *renderContext; // @synthesize renderContext=_renderContext;
@property(nonatomic) short contextType; // @synthesize contextType=_contextType;
- (void).cxx_destruct;
- (struct OpaqueJSValue *)func_toDataURL:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)func_cancelAnimationFrame:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)func_requestAnimationFrame:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)func_canvas_createImage:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)func_getContext:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)prop_get_offsetHeight:(struct OpaqueJSContext *)arg1;
- (struct OpaqueJSValue *)prop_get_offsetWidth:(struct OpaqueJSContext *)arg1;
- (void)prop_set_height:(struct OpaqueJSContext *)arg1 value:(struct OpaqueJSValue *)arg2;
- (struct OpaqueJSValue *)prop_get_height:(struct OpaqueJSContext *)arg1;
- (void)prop_set_width:(struct OpaqueJSContext *)arg1 value:(struct OpaqueJSValue *)arg2;
- (struct OpaqueJSValue *)prop_get_width:(struct OpaqueJSContext *)arg1;
- (void)destroy;
- (void)dealloc;
- (void)offscreenResize;
- (_Bool)setCanvasWidth:(short)arg1 height:(short)arg2;
- (void)updateCanvasDimension:(struct CGSize)arg1;
- (void)contextResize;
- (void)updateCanvasSize:(struct CGSize)arg1;
- (void)setUpWithObject:(struct OpaqueJSValue *)arg1 runtime:(id)arg2 data:(id)arg3;

@end

