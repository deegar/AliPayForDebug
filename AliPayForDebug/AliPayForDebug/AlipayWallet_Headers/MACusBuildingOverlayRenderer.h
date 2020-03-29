//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MAOverlayRenderer.h"

@class NSArray, NSMutableDictionary;

@interface MACusBuildingOverlayRenderer : MAOverlayRenderer
{
    int _perRange;
    int _totalSize;
    NSArray *_buildingsArray;
    unsigned int _program;
    unsigned int _vertexShader;
    unsigned int _fragmentShader;
    unsigned int _vertexLocation;
    unsigned int _indicesLocation;
    unsigned int _offsetLocation;
    unsigned int _viewMatrixLocation;
    unsigned int _projectionMatrixLocation;
    unsigned int _attribLocationTextureCode;
    unsigned int _offsetBuffer;
    unsigned int *_textureIDs;
    unsigned int *_vertexVBOs;
    unsigned int *_texcoordVBOs;
    vector_7584168e _offsetVector;
    NSMutableDictionary *_textureDic;
    NSMutableDictionary *_drawDic;
    struct MAMapPoint _mapPoints[4];
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)MACusBuildingOverlayRendererDeallocOperation;
- (void)dealloc;
- (id)initWithCusBuildingOverlay:(id)arg1;
- (void)initShader;
- (void)subGLRenderWithBuilding:(id)arg1 offset:(unsigned int)arg2 andDrawArray:(id)arg3;
- (void)glRender;
- (id)cusBuildingOverlay;
- (_Bool)checkInMapRect:(struct MAMapPoint)arg1;
- (_Bool)isInsideClipWindow:(struct MAMapPoint)arg1 andP1:(struct MAMapPoint)arg2 andP2:(struct MAMapPoint)arg3;

@end

