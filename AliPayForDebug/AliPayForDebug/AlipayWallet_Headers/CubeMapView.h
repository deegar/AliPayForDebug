//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "CKWidgetProtocol-Protocol.h"

@class APMapView, NBComponentTest, NSString;

@interface CubeMapView : UIView <CKWidgetProtocol>
{
    NSString *_pageId;
    APMapView *_mapView;
    NBComponentTest *_mapComponent;
}

+ (id)mq_export_method_async_177;
+ (id)mq_export_method_async_170;
+ (id)mq_export_method_async_163;
+ (id)mq_export_method_async_156;
+ (id)mq_export_method_async_149;
+ (id)mq_export_method_async_140;
+ (id)mq_export_method_async_131;
+ (id)mq_export_method_async_122;
+ (id)mq_export_method_async_109;
+ (id)mq_export_method_async_100;
+ (id)mq_export_method_async_91;
+ (id)mq_export_method_async_82;
+ (id)mq_export_method_async_69;
+ (id)mq_export_method_async_56;
+ (id)createView:(id)arg1 reuse:(id)arg2 size:(struct CGSize)arg3;
@property(retain, nonatomic) NBComponentTest *mapComponent; // @synthesize mapComponent=_mapComponent;
@property(retain, nonatomic) APMapView *mapView; // @synthesize mapView=_mapView;
@property(copy, nonatomic) NSString *pageId; // @synthesize pageId=_pageId;
- (void).cxx_destruct;
- (void)sendMsgToFront:(id)arg1 data:(id)arg2;
- (void)getMapProperties:(id)arg1;
- (void)calculateDistance:(id)arg1;
- (void)smoothMovePolyline:(id)arg1;
- (void)smoothMoveMarker:(id)arg1;
- (void)getRegion:(id)arg1;
- (void)translateMarker:(id)arg1;
- (void)updateComponents:(id)arg1;
- (void)clearRoute:(id)arg1;
- (void)showRoute:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)showsCompass:(id)arg1;
- (void)showsScale:(id)arg1;
- (void)gestureEnable:(id)arg1;
- (void)moveToLocation:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)getCenterLocation:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)updateComponentData:(id)arg1;
- (id)initWithData:(id)arg1 size:(struct CGSize)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

