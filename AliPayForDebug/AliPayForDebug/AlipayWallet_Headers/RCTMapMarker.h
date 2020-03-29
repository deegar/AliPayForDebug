//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MAAnnotation-Protocol.h"

@class NSString, UIImage;

@interface RCTMapMarker : NSObject <MAAnnotation>
{
    _Bool _hasLeftCallout;
    _Bool _hasRightCallout;
    NSString *_identifier;
    double _latitude;
    double _longitude;
    NSString *_title;
    NSString *_subtitle;
    NSString *_iconSrc;
    UIImage *_icon;
    double _rotate;
    double _alpha;
    double _width;
    double _height;
    double _anchorX;
    double _anchorY;
    UIImage *_imageForAnnotation;
    unsigned long long _viewIndex;
    unsigned long long _leftCalloutViewIndex;
    unsigned long long _rightCalloutViewIndex;
    unsigned long long _detailCalloutViewIndex;
    struct CLLocationCoordinate2D _coordinate;
}

@property(nonatomic) _Bool hasRightCallout; // @synthesize hasRightCallout=_hasRightCallout;
@property(nonatomic) _Bool hasLeftCallout; // @synthesize hasLeftCallout=_hasLeftCallout;
@property(nonatomic) unsigned long long detailCalloutViewIndex; // @synthesize detailCalloutViewIndex=_detailCalloutViewIndex;
@property(nonatomic) unsigned long long rightCalloutViewIndex; // @synthesize rightCalloutViewIndex=_rightCalloutViewIndex;
@property(nonatomic) unsigned long long leftCalloutViewIndex; // @synthesize leftCalloutViewIndex=_leftCalloutViewIndex;
@property(nonatomic) unsigned long long viewIndex; // @synthesize viewIndex=_viewIndex;
@property(retain, nonatomic) UIImage *imageForAnnotation; // @synthesize imageForAnnotation=_imageForAnnotation;
@property(nonatomic) double anchorY; // @synthesize anchorY=_anchorY;
@property(nonatomic) double anchorX; // @synthesize anchorX=_anchorX;
@property(nonatomic) double height; // @synthesize height=_height;
@property(nonatomic) double width; // @synthesize width=_width;
@property(nonatomic) double alpha; // @synthesize alpha=_alpha;
@property(nonatomic) double rotate; // @synthesize rotate=_rotate;
@property(copy, nonatomic) UIImage *icon; // @synthesize icon=_icon;
@property(copy, nonatomic) NSString *iconSrc; // @synthesize iconSrc=_iconSrc;
@property(copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) double longitude; // @synthesize longitude=_longitude;
@property(nonatomic) double latitude; // @synthesize latitude=_latitude;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) struct CLLocationCoordinate2D coordinate; // @synthesize coordinate=_coordinate;
- (void).cxx_destruct;
- (id)applyImage:(id)arg1 byAlpha:(double)arg2;
- (id)rotateImage:(id)arg1 byDegrees:(double)arg2;
- (id)scaleImage:(id)arg1 toSize:(struct CGSize)arg2;
- (void)prepareForAnnotation;
- (id)init;
- (id)initWithLongitude:(double)arg1 latitude:(double)arg2 andIcon:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
