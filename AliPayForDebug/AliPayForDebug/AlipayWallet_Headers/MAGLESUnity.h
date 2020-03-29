//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class EAGLSharegroup, MAGLES2Shader;

@interface MAGLESUnity : NSObject
{
    struct MALineBuilder {
        CDUnknownFunctionPointerType *;
        float;
        float;
        struct Drawable {
            vector_195fe69b;
            struct vector<MANormalLineBuilder::Vertex, std::__1::allocator<MANormalLineBuilder::Vertex>>;
            vector_195fe69b;
            vector_195fe69b;
        };
        vector_f60ea51c;
        vector_7584168e;
    } *_lineBuilder;
    struct MALineBuilder {
        CDUnknownFunctionPointerType *;
        float;
        float;
        struct Vector4<float>;
        struct Drawable {
            vector_195fe69b;
            struct vector<MAGradientColoredLine::Vertex, std::__1::allocator<MAGradientColoredLine::Vertex>>;
        };
        vector_f60ea51c;
        vector_7584168e;
        struct vector<Vector4<float>, std::__1::allocator<Vector4<float>>>;
    } *_coloredLineBuilder;
    struct MAPolygonClipper *_polygonClipper;
    struct MAPolygonTriangulator *_polygonTriangulator;
    EAGLSharegroup *_shaperGroup;
    MAGLES2Shader *_glES2Shader;
    unsigned int _lineTexture;
    unsigned int _lineDashTexture;
    unsigned int _thinLineTexture;
    unsigned int _thinLineDashTexture;
}

+ (void)maGLFinish;
+ (id)createContext;
@property(nonatomic) unsigned int thinLineDashTexture; // @synthesize thinLineDashTexture=_thinLineDashTexture;
@property(nonatomic) unsigned int thinLineTexture; // @synthesize thinLineTexture=_thinLineTexture;
@property(nonatomic) unsigned int lineDashTexture; // @synthesize lineDashTexture=_lineDashTexture;
@property(nonatomic) unsigned int lineTexture; // @synthesize lineTexture=_lineTexture;
- (void).cxx_destruct;
- (void)clearTexture:(unsigned int *)arg1;
- (void)clear;
- (unsigned int)lineTextureForThin:(_Bool)arg1 lineDashed:(_Bool)arg2;
- (struct MAPolygonTriangulator *)PolygonTriangulator;
- (struct MAPolygonClipper *)PolygonClipper;
- (struct MALineBuilder *)ColoredLineBuilder;
- (struct MALineBuilder *)LineBuilder;
- (const vector_195fe69b *)getTriangleIndicesForPoints:(vector_f60ea51c *)arg1;
- (const Drawable_97df83bd *)convertPoints:(vector_f60ea51c *)arg1 ToDrawableWithLineWidth:(double)arg2 Looped:(_Bool)arg3 LineJoinType:(int)arg4 LineCapType:(int)arg5 Limit:(double)arg6 Striped:(_Bool)arg7;
- (const Drawable_97df83bd *)convertPoints:(vector_f60ea51c *)arg1 toDrawableWithdrawStyleIndexes:(vector_195fe69b *)arg2 drawStyleCount:(unsigned long long)arg3 LineWidth:(double)arg4 Looped:(_Bool)arg5 LineJoinType:(int)arg6 LineCapType:(int)arg7 Limit:(double)arg8 Striped:(_Bool)arg9;
- (_Bool)filterOriginPoints:(struct CGPoint *)arg1 count:(unsigned long long)arg2 colorPoints:(id)arg3 withLimit:(double)arg4 toPointList:(vector_f60ea51c *)arg5;
- (long long)getColorIndex:(id)arg1 andCounter:(long long)arg2;
- (_Bool)filterOriginPoints:(struct CGPoint *)arg1 count:(unsigned long long)arg2 drawStyleIndexes:(id)arg3 withLimit:(double)arg4 toPointList:(vector_f60ea51c *)arg5 drawStyleIndexes:(vector_195fe69b *)arg6;
- (void)reducePoints:(struct CGPoint *)arg1 pointCount:(unsigned long long)arg2 colorPoints:(id)arg3 pointsType:(int)arg4 limit:(double)arg5 looped:(_Bool)arg6 resultIn:(vector_aac46ba0 *)arg7 clipperWindow:(struct MAMapPoint *)arg8;
- (void)reducePoints:(struct CGPoint *)arg1 pointCount:(unsigned long long)arg2 pointsType:(int)arg3 drawStyleIndexes:(id)arg4 limit:(double)arg5 looped:(_Bool)arg6 resultIn:(vector_f60ea51c *)arg7 drawStyleIndexes:(vector_195fe69b *)arg8;
- (void)drawRegionWithPoints:(vector_f60ea51c *)arg1 Indices:(const vector_195fe69b *)arg2 fillColor:(id)arg3 alpha:(double)arg4 usingFan:(_Bool)arg5 viewMatrix:(float *)arg6 projectionMatrix:(float *)arg7;
- (void)drawLinesWithDrawable:(const Drawable_97df83bd *)arg1 strokeColor:(id)arg2 textureID:(unsigned int)arg3 alpha:(double)arg4 viewMatrix:(float *)arg5 projectionMatrix:(float *)arg6;
- (void)drawLinesWithDrawable:(const Drawable_97df83bd *)arg1 strokeColors:(id)arg2 textureID:(unsigned int)arg3 alpha:(double)arg4 viewMatrix:(float *)arg5 projectionMatrix:(float *)arg6;
- (void)drawLinesWithDrawable:(const Drawable_97df83bd *)arg1 textureIDs:(id)arg2 alpha:(double)arg3 viewMatrix:(float *)arg4 projectionMatrix:(float *)arg5;
- (void)drawLinesWithDrawable:(const Drawable_98991264 *)arg1 textureID:(unsigned int)arg2 alpha:(double)arg3 viewMatrix:(float *)arg4 projectionMatrix:(float *)arg5;
- (void)drawLinesWithPointsES2:(struct CGPoint *)arg1 pointCount:(unsigned long long)arg2 viewMatrix:(float *)arg3 projectionMatrix:(float *)arg4 strokeColor:(id)arg5 textureID:(unsigned int)arg6 alpha:(double)arg7 lineWidth:(double)arg8 looped:(_Bool)arg9 LineJoinType:(int)arg10 LineCapType:(int)arg11 lineDash:(_Bool)arg12 limit:(double)arg13 clipperWindow:(struct MAMapPoint *)arg14;
- (void)drawLinesWithPointsES2:(struct CGPoint *)arg1 pointCount:(unsigned long long)arg2 viewMatrix:(float *)arg3 projectionMatrix:(float *)arg4 strokeColors:(id)arg5 textureIDs:(id)arg6 alpha:(double)arg7 drawStyleIndexes:(id)arg8 isGradient:(_Bool)arg9 lineWidth:(double)arg10 looped:(_Bool)arg11 LineJoinType:(int)arg12 LineCapType:(int)arg13 lineDash:(_Bool)arg14 limit:(double)arg15 clipperWindow:(struct MAMapPoint *)arg16;
- (void)drawTexturedLinesWithPointsES2:(struct CGPoint *)arg1 pointCount:(unsigned long long)arg2 viewMatrix:(float *)arg3 projectionMatrix:(float *)arg4 textureIDs:(id)arg5 alpha:(double)arg6 drawStyleIndexes:(id)arg7 lineWidth:(double)arg8 looped:(_Bool)arg9 limit:(double)arg10 clipperWindow:(struct MAMapPoint *)arg11;
- (void)drawTexturedLinesWithPointsES2:(struct CGPoint *)arg1 pointCount:(unsigned long long)arg2 viewMatrix:(float *)arg3 projectionMatrix:(float *)arg4 textureID:(unsigned int)arg5 alpha:(double)arg6 lineWidth:(double)arg7 looped:(_Bool)arg8 limit:(double)arg9 clipperWindow:(struct MAMapPoint *)arg10;
- (void)drawColoredLinesWithPointsES2:(struct CGPoint *)arg1 pointCount:(unsigned long long)arg2 viewMatrix:(float *)arg3 projectionMatrix:(float *)arg4 strokeColor:(id)arg5 alpha:(double)arg6 lineWidth:(double)arg7 looped:(_Bool)arg8 LineJoinType:(int)arg9 LineCapType:(int)arg10 lineDash:(_Bool)arg11 limit:(double)arg12 clipperWindow:(struct MAMapPoint *)arg13;
- (void)drawIconWithTextureIDES2:(unsigned int)arg1 mapPoints:(struct CGPoint *)arg2 pointCount:(unsigned long long)arg3 modulateColor:(id)arg4 alpha:(double)arg5 viewMatrix:(float *)arg6 projectionMatrix:(float *)arg7;
- (void)drawRegionUsingTriangleFanES2:(_Bool)arg1 mapPoint:(struct CGPoint *)arg2 pointCount:(unsigned long long)arg3 viewMatrix:(float *)arg4 projectionMatrix:(float *)arg5 fillColor:(id)arg6 strokeLineWidth:(double)arg7 strokeColor:(id)arg8 strokeTexture:(unsigned int)arg9 alpha:(double)arg10 strokeLineDash:(_Bool)arg11 strokeLineJoinType:(int)arg12 limit:(double)arg13 clipperWindow:(struct MAMapPoint *)arg14;
- (void)loadTextureImage:(id)arg1 textureID:(unsigned int *)arg2 textureTRepeat:(_Bool)arg3;
- (void)loadTextureBuffer:(id)arg1 bufferSize:(struct CGSize)arg2 textureID:(unsigned int *)arg3 textureTRepeat:(_Bool)arg4;
- (void)maGlFlush;
- (id)init;
- (void)MAGLESUnityDeallocOperation;
- (void)dealloc;

@end

