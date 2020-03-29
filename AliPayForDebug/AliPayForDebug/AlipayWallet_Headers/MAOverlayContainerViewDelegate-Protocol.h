//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MACircle, MACircleRenderer, MAGLESUnity, MAOverlayRenderer, NSArray, NSString;
@protocol MAOverlay;

@protocol MAOverlayContainerViewDelegate <NSObject>
- (MAGLESUnity *)glesUnityInstance;
- (void)deleteTextures:(NSArray *)arg1;
- (double)getMapZoomLevel;
- (double)metersPerPixelAtMapZoomLevel:(double)arg1;
- (NSArray *)privateGetCurrentBuildingTileWithGridName:(NSString *)arg1;
- (double)rendererContentScale;
- (float *)getProjectionMatrix;
- (float *)getViewMatrix;
- (struct MAMapPoint)getCurrentOffsetPoint;
- (NSArray *)getCurrentGeometryTiles;
- (NSArray *)getCurrentTiles;
- (void)privateGetCurrentMAMapPoints:(struct MAMapPoint *)arg1;
- (struct CGRect)privateGetCurrentWinRect;
- (struct MAMapPoint)privateGetMAMapPointWithPoint:(struct CGPoint)arg1;
- (struct CGPoint)privateGetWinPointWithMAMapPoint:(struct MAMapPoint)arg1;
- (double)privateGetCurrentZoomLevel;
- (struct CGPoint)privateGetCurrentRotateDegreeAndCameraDegree;
- (struct CGPoint)privateGetPhysicalResolutionForPoint:(struct CGPoint)arg1;
- (double)privateGetMapPointLenForWinLen:(double)arg1;
- (struct CGPoint)privateGetGlPointForMapPoint:(struct MAMapPoint)arg1;
- (double)privateGetMapLenForPixelLen:(int)arg1;
- (MACircleRenderer *)userLocationCircleRendererWithCircle:(MACircle *)arg1;
- (_Bool)customizeUserLocationAccuracyCircleRepresentation;
- (_Bool)isUserLocationCircle:(id <MAOverlay>)arg1;
- (MAOverlayRenderer *)createDrawableForOverlay:(id <MAOverlay>)arg1;
- (void)overlayContainerAddedDrawables:(NSArray *)arg1;
- (struct MAMapRect)visibleMapRect;
@end

