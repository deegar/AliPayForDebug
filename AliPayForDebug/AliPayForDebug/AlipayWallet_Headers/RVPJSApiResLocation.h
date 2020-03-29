//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RVKJSApiResponseBase.h"

@class NSArray, NSDictionary, NSNumber, NSString;

@interface RVPJSApiResLocation : RVKJSApiResponseBase
{
    NSNumber *_longitude;
    NSNumber *_latitude;
    NSNumber *_accuracy;
    NSNumber *_horizontalAccuracy;
    NSString *_country;
    NSString *_countryCode;
    NSString *_province;
    NSString *_city;
    NSString *_cityAdcode;
    NSString *_district;
    NSString *_districtAdcode;
    NSDictionary *_streetNumber;
    NSArray *_pois;
}

@property(retain, nonatomic) NSArray *pois; // @synthesize pois=_pois;
@property(retain, nonatomic) NSDictionary *streetNumber; // @synthesize streetNumber=_streetNumber;
@property(retain, nonatomic) NSString *districtAdcode; // @synthesize districtAdcode=_districtAdcode;
@property(retain, nonatomic) NSString *district; // @synthesize district=_district;
@property(retain, nonatomic) NSString *cityAdcode; // @synthesize cityAdcode=_cityAdcode;
@property(retain, nonatomic) NSString *city; // @synthesize city=_city;
@property(retain, nonatomic) NSString *province; // @synthesize province=_province;
@property(retain, nonatomic) NSString *countryCode; // @synthesize countryCode=_countryCode;
@property(retain, nonatomic) NSString *country; // @synthesize country=_country;
@property(retain, nonatomic) NSNumber *horizontalAccuracy; // @synthesize horizontalAccuracy=_horizontalAccuracy;
@property(retain, nonatomic) NSNumber *accuracy; // @synthesize accuracy=_accuracy;
@property(retain, nonatomic) NSNumber *latitude; // @synthesize latitude=_latitude;
@property(retain, nonatomic) NSNumber *longitude; // @synthesize longitude=_longitude;
- (void).cxx_destruct;

@end

