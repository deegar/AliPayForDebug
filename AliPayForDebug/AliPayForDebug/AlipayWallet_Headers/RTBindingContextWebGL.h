//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RTBinding.h"

#import "APGTextureProtocol-Protocol.h"
#import "RTRenderContextProtocol-Protocol.h"

@class APGEAGLContext, APGFrameBufferObject, APGGLResource, NSString, RTBindingWebGLTexture, RTWebGLResources;

@interface RTBindingContextWebGL : RTBinding <APGTextureProtocol, RTRenderContextProtocol>
{
    int _ID;
    RTBindingWebGLTexture *_lastTexture;
    long long _drawCount;
    _Bool _isOnScreen;
    _Bool _needDisplay;
    _Bool _UNPACK_FLIP_Y_WEBGL;
    _Bool _PREMULTIPLY_ALPHA_WEBGL;
    float _ratio;
    APGEAGLContext *_apeaglContext;
    APGGLResource *_glResource;
    RTWebGLResources *_webGLResources;
    APGFrameBufferObject *_rtFBO;
    struct CGSize _size;
}

+ (struct OpaqueJSClass *)createJSClassWithPropertyAndFunctions;
@property(nonatomic) __weak APGFrameBufferObject *rtFBO; // @synthesize rtFBO=_rtFBO;
@property(retain, nonatomic) RTWebGLResources *webGLResources; // @synthesize webGLResources=_webGLResources;
@property(nonatomic) __weak APGGLResource *glResource; // @synthesize glResource=_glResource;
@property(nonatomic) _Bool PREMULTIPLY_ALPHA_WEBGL; // @synthesize PREMULTIPLY_ALPHA_WEBGL=_PREMULTIPLY_ALPHA_WEBGL;
@property(nonatomic) _Bool UNPACK_FLIP_Y_WEBGL; // @synthesize UNPACK_FLIP_Y_WEBGL=_UNPACK_FLIP_Y_WEBGL;
@property(nonatomic) _Bool needDisplay; // @synthesize needDisplay=_needDisplay;
@property(nonatomic) struct CGSize size; // @synthesize size=_size;
@property(nonatomic) float ratio; // @synthesize ratio=_ratio;
@property(nonatomic) _Bool isOnScreen; // @synthesize isOnScreen=_isOnScreen;
@property(nonatomic) __weak APGEAGLContext *apeaglContext; // @synthesize apeaglContext=_apeaglContext;
- (void).cxx_destruct;
- (struct OpaqueJSValue *)func_viewport:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)func_vertexAttribPointer:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)func_vertexAttrib4fv:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)func_vertexAttrib3fv:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)func_vertexAttrib2fv:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)func_vertexAttrib1fv:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)func_vertexAttrib4f:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)func_vertexAttrib3f:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)func_vertexAttrib2f:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)func_vertexAttrib1f:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)func_validateProgram:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)func_useProgram:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)func_uniformMatrix4fv:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)func_uniformMatrix3fv:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)func_uniformMatrix2fv:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)func_uniform4iv:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)func_uniform4i:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)func_uniform4fv:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)func_uniform4f:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)func_uniform3iv:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)func_uniform3i:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)func_uniform3fv:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)func_uniform3f:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)func_uniform2iv:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)func_uniform2i:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)func_uniform2fv:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)func_uniform2f:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)func_uniform1iv:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)func_uniform1i:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)func_uniform1fv:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)func_uniform1f:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)func_texSubImage2D:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)func_texParameteri:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)func_texParameterf:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)func_texImage2D:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;
- (id)formatConvert:(id)arg1 objFormat:(int)arg2;
- (id)readTexture:(int)arg1 height:(int)arg2 textureId:(unsigned int)arg3;
- (struct OpaqueJSValue *)func_stencilOpSeparate:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)func_stencilOp:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)func_stencilMaskSeparate:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)func_stencilMask:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)func_stencilFuncSeparate:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)func_stencilFunc:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)func_shaderSource:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)func_scissor:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)func_sampleCoverage:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)func_renderbufferStorage:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)func_readPixels:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)func_polygonOffset:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)func_pixelStorei:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)func_linkProgram:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)func_lineWidth:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)func_isTexture:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)func_isShader:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)func_isRenderbuffer:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)func_isProgram:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)func_isFramebuffer:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)func_isContextLost:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)func_isEnable:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)func_isBuffer:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)func_getVertexAttribOffset:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)func_getVertexAttrib:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)func_getUniformLocation:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)func_getUniform:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)func_getTexParameter:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)func_getSupportedExtensions:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)func_getShaderSource:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)func_getShaderPrecisionFormat:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)func_getShaderParameter:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)func_getShaderInfoLog:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)func_getRenderbufferParameter:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)func_getProgramParameter:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)func_getProgramInfoLog:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)func_getParameter:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)func_getFramebufferAttachmentParameter:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)func_getExtension:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)func_getError:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)func_getContextAttributes:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)func_getBufferParameter:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)func_getAttribLocation:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)func_getAttachedShaders:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)func_getActiveUniform:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)func_getActiveAttrib:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)func_generateMipmap:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)func_frontFace:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)func_framebufferTexture2D:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)func_framebufferRenderbuffer:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)func_finish:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)func_flush:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)func_enableVertexAttribArray:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)func_enable:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)func_drawElements:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)func_drawArrays:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)func_disableVertexAttribArray:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)func_disable:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)func_detachShader:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)func_depthRange:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)func_depthMask:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)func_depthFunc:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)func_deleteTexture:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)func_deleteShader:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)func_deleteRenderbuffer:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)func_deleteProgram:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)func_deleteFramebuffer:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)func_deleteBuffer:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)func_cullFace:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)func_createTexture:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)func_createShader:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)func_createRenderbuffer:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)func_createProgram:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)func_createFramebuffer:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)func_createBuffer:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)func_copyTexSubImage2D:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)func_copyTexImage2D:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)func_compileShader:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)func_colorMask:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)func_clearStencil:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)func_clearDepth:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)func_clearColor:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)func_clear:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)func_checkFramebufferStatus:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)func_bufferSubData:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)func_bufferData:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)func_blendFuncSeparate:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)func_blendFunc:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)func_blendEquationSeparate:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)func_blendEquation:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)func_bindTexture:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)func_blendColor:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)func_bindRenderbuffer:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)func_bindFramebuffer:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)func_bindBuffer:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)func_bindAttribLocation:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)func_attachShader:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)func_activeTexture:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)prop_get_drawingBufferWidth:(struct OpaqueJSContext *)arg1;
- (struct OpaqueJSValue *)prop_get_drawingBufferHeight:(struct OpaqueJSContext *)arg1;
- (void)clearDrawCallCount;
- (long long)getDrawCallCount;
- (void)setCurrentEAGLContext;
- (id)getPixelData;
- (id)getTexture;
- (void)deleteVertexArray:(unsigned int)arg1;
- (void)addVertexArray:(unsigned int)arg1 obj:(struct OpaqueJSValue *)arg2;
- (void)resizeWidth:(short)arg1 height:(short)arg2;
- (void)dealloc;
- (void)destroy;
- (void)setUpWithObject:(struct OpaqueJSValue *)arg1 runtime:(id)arg2 data:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

