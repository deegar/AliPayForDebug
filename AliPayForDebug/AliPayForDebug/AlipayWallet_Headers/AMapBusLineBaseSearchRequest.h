//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AMapSearchObject.h"

@class NSString;

@interface AMapBusLineBaseSearchRequest : AMapSearchObject
{
    _Bool _requireExtension;
    NSString *_city;
    long long _offset;
    long long _page;
}

+ (id)ajo_mapping;
@property(nonatomic) long long page; // @synthesize page=_page;
@property(nonatomic) long long offset; // @synthesize offset=_offset;
@property(nonatomic) _Bool requireExtension; // @synthesize requireExtension=_requireExtension;
@property(copy, nonatomic) NSString *city; // @synthesize city=_city;
- (void).cxx_destruct;
- (id)init;

@end

