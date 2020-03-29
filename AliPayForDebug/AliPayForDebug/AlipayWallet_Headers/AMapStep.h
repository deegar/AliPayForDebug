//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AMapSearchObject.h"

@class NSArray, NSString;

@interface AMapStep : AMapSearchObject
{
    NSString *_instruction;
    NSString *_orientation;
    NSString *_road;
    long long _distance;
    long long _duration;
    NSString *_polyline;
    NSString *_action;
    NSString *_assistantAction;
    double _tolls;
    long long _tollDistance;
    NSString *_tollRoad;
    NSArray *_cities;
    NSArray *_tmcs;
}

+ (id)ajo_arrayClassMapping;
+ (id)ajo_mapping;
@property(retain, nonatomic) NSArray *tmcs; // @synthesize tmcs=_tmcs;
@property(retain, nonatomic) NSArray *cities; // @synthesize cities=_cities;
@property(copy, nonatomic) NSString *tollRoad; // @synthesize tollRoad=_tollRoad;
@property(nonatomic) long long tollDistance; // @synthesize tollDistance=_tollDistance;
@property(nonatomic) double tolls; // @synthesize tolls=_tolls;
@property(copy, nonatomic) NSString *assistantAction; // @synthesize assistantAction=_assistantAction;
@property(copy, nonatomic) NSString *action; // @synthesize action=_action;
@property(copy, nonatomic) NSString *polyline; // @synthesize polyline=_polyline;
@property(nonatomic) long long duration; // @synthesize duration=_duration;
@property(nonatomic) long long distance; // @synthesize distance=_distance;
@property(copy, nonatomic) NSString *road; // @synthesize road=_road;
@property(copy, nonatomic) NSString *orientation; // @synthesize orientation=_orientation;
@property(copy, nonatomic) NSString *instruction; // @synthesize instruction=_instruction;
- (void).cxx_destruct;
- (id)init;

@end

