//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GO2OServiceObject.h"

@class NSString;

@interface GO2OAreaInfo : GO2OServiceObject
{
    NSString *_areaCode;
    NSString *_areaName;
    NSString *_areaType;
    NSString *_distance;
    NSString *_logoUrl;
}

@property(retain, nonatomic) NSString *logoUrl; // @synthesize logoUrl=_logoUrl;
@property(retain, nonatomic) NSString *distance; // @synthesize distance=_distance;
@property(retain, nonatomic) NSString *areaType; // @synthesize areaType=_areaType;
@property(retain, nonatomic) NSString *areaName; // @synthesize areaName=_areaName;
@property(retain, nonatomic) NSString *areaCode; // @synthesize areaCode=_areaCode;
- (void).cxx_destruct;

@end

