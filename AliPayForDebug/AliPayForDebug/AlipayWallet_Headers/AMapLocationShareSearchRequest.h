//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AMapShareSearchBaseRequest.h"

@class AMapGeoPoint, NSString;

@interface AMapLocationShareSearchRequest : AMapShareSearchBaseRequest
{
    AMapGeoPoint *_location;
    NSString *_name;
}

@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) AMapGeoPoint *location; // @synthesize location=_location;
- (void).cxx_destruct;
- (id)transferAddress;

@end

