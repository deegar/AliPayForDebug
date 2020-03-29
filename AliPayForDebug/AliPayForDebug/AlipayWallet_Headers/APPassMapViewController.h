//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTViewController.h"

#import "MKAnnotation-Protocol.h"
#import "MKMapViewDelegate-Protocol.h"

@class CLGeocoder, MKMapView, MKPlacemark, NSString;

@interface APPassMapViewController : DTViewController <MKMapViewDelegate, MKAnnotation>
{
    MKMapView *_map;
    CLGeocoder *_geocoder;
    MKPlacemark *_placemark;
}

@property(retain, nonatomic) MKPlacemark *placemark; // @synthesize placemark=_placemark;
@property(retain, nonatomic) CLGeocoder *geocoder; // @synthesize geocoder=_geocoder;
@property(retain, nonatomic) MKMapView *map; // @synthesize map=_map;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *title;
@property(readonly, nonatomic) struct CLLocationCoordinate2D coordinate;
- (void)displayPlacemarks:(id)arg1;
- (void)findPlaceByName:(id)arg1;
- (void)createMapView;
- (void)viewDidLoad;
- (void)findDestLocation:(id)arg1;
- (id)initWithQuery:(id)arg1 params:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) NSString *subtitle;
@property(readonly) Class superclass;

@end

