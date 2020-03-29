//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MAOverlay-Protocol.h"
#import "RVMapCircleProtocol-Protocol.h"

@class NSString, UIColor;

@interface RVMAMapCircle : NSObject <MAOverlay, RVMapCircleProtocol>
{
    UIColor *color;
    UIColor *fillColor;
    double latitude;
    double longitude;
    double radius;
    double strokeWidth;
}

@property(nonatomic) double strokeWidth; // @synthesize strokeWidth;
@property(nonatomic) double radius; // @synthesize radius;
@property(nonatomic) double longitude; // @synthesize longitude;
@property(nonatomic) double latitude; // @synthesize latitude;
@property(retain, nonatomic) UIColor *fillColor; // @synthesize fillColor;
@property(retain, nonatomic) UIColor *color; // @synthesize color;
- (void).cxx_destruct;
- (id)initWithMapCircle:(id)arg1;

// Remaining properties
@property(readonly, nonatomic) struct MAMapRect boundingMapRect;
@property(readonly, nonatomic) struct CLLocationCoordinate2D coordinate;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) NSString *subtitle;
@property(readonly) Class superclass;
@property(copy, nonatomic) NSString *title;

@end

