//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AMapSearchObject.h"

@class AMapGeoPoint, NSArray;

@interface AMapWalking : AMapSearchObject
{
    AMapGeoPoint *_origin;
    AMapGeoPoint *_destination;
    long long _distance;
    long long _duration;
    NSArray *_steps;
}

+ (id)ajo_arrayClassMapping;
+ (id)ajo_mapping;
@property(retain, nonatomic) NSArray *steps; // @synthesize steps=_steps;
@property(nonatomic) long long duration; // @synthesize duration=_duration;
@property(nonatomic) long long distance; // @synthesize distance=_distance;
@property(copy, nonatomic) AMapGeoPoint *destination; // @synthesize destination=_destination;
@property(copy, nonatomic) AMapGeoPoint *origin; // @synthesize origin=_origin;
- (void).cxx_destruct;
- (_Bool)ajo_validateValue:(inout id *)arg1 forKey:(id)arg2 error:(out id *)arg3;

@end

