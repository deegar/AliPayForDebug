//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface mobileappconfigBaseInfoReq : NSObject
{
    _Bool _pre;
    int _width;
    NSString *_platform;
    NSString *_position;
    NSString *_country;
    NSString *_province;
    NSString *_city;
    NSArray *_appIds;
}

+ (Class)appIdsElementClass;
@property(retain, nonatomic) NSArray *appIds; // @synthesize appIds=_appIds;
@property(retain, nonatomic) NSString *city; // @synthesize city=_city;
@property(retain, nonatomic) NSString *province; // @synthesize province=_province;
@property(retain, nonatomic) NSString *country; // @synthesize country=_country;
@property(retain, nonatomic) NSString *position; // @synthesize position=_position;
@property(nonatomic) int width; // @synthesize width=_width;
@property(nonatomic) _Bool pre; // @synthesize pre=_pre;
@property(retain, nonatomic) NSString *platform; // @synthesize platform=_platform;
- (void).cxx_destruct;

@end

