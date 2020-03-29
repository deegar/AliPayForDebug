//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AMapSearchObject.h"

@class AMapGeoPoint, AMapGeoPolygon, NSString;

@interface AMapPOISearchBaseRequest : AMapSearchObject
{
    _Bool _requireExtension;
    _Bool _requireSubPOIs;
    NSString *_types;
    long long _sortrule;
    long long _offset;
    long long _page;
    NSString *_building;
    NSString *_uid;
    NSString *_keywords;
    AMapGeoPoint *_location;
    long long _radius;
    AMapGeoPolygon *_polygon;
}

+ (id)ajo_mapping;
@property(copy, nonatomic) AMapGeoPolygon *polygon; // @synthesize polygon=_polygon;
@property(nonatomic) long long radius; // @synthesize radius=_radius;
@property(copy, nonatomic) AMapGeoPoint *location; // @synthesize location=_location;
@property(copy, nonatomic) NSString *keywords; // @synthesize keywords=_keywords;
@property(copy, nonatomic) NSString *uid; // @synthesize uid=_uid;
@property(nonatomic) _Bool requireSubPOIs; // @synthesize requireSubPOIs=_requireSubPOIs;
@property(nonatomic) _Bool requireExtension; // @synthesize requireExtension=_requireExtension;
@property(copy, nonatomic) NSString *building; // @synthesize building=_building;
@property(nonatomic) long long page; // @synthesize page=_page;
@property(nonatomic) long long offset; // @synthesize offset=_offset;
@property(nonatomic) long long sortrule; // @synthesize sortrule=_sortrule;
@property(copy, nonatomic) NSString *types; // @synthesize types=_types;
- (void).cxx_destruct;
- (id)init;

@end

