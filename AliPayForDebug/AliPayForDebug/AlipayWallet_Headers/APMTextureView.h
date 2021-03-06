//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CAEAGLLayer, EAGLContext;

@interface APMTextureView : UIView
{
    unsigned int position;
    unsigned int inputTextureCoordinate;
    int inputImageTexture;
    unsigned int program;
    unsigned int vertShader;
    unsigned int fragShader;
    unsigned int displayRenderbuffer;
    unsigned int displayFramebuffer;
    int backingWidth;
    int backingHeight;
    float imageVertices[8];
    float textureCoordinates[8];
    struct CGSize _size;
    EAGLContext *_context;
    CAEAGLLayer *_cachedLayer;
    _Bool isInit;
    _Bool _renderingEnabled;
    _Bool _inputTextureOpenGLCoordinatesSystem;
    struct CGSize _dimension;
}

+ (Class)layerClass;
@property(nonatomic, getter=isInputTextureOpenGLCoordinatesSystem) _Bool inputTextureOpenGLCoordinatesSystem; // @synthesize inputTextureOpenGLCoordinatesSystem=_inputTextureOpenGLCoordinatesSystem;
@property(nonatomic) struct CGSize dimension; // @synthesize dimension=_dimension;
- (void).cxx_destruct;
@property(nonatomic) _Bool renderingEnabled;
- (void)updateTextureCoordinates;
- (void)updateImageVertices;
- (void)render:(unsigned int)arg1 context:(id)arg2;
- (_Bool)setupGL;
- (void)reset;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

