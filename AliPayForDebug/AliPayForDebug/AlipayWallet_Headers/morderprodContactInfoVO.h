//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface morderprodContactInfoVO : NSObject
{
    NSString *_contactName;
    NSString *_mobile;
    NSString *_provinceCode;
    NSString *_cityCode;
    NSString *_districtCode;
    NSString *_countryDesc;
    NSString *_provinceDesc;
    NSString *_cityDesc;
    NSString *_districtDesc;
    NSString *_address;
}

@property(retain, nonatomic) NSString *address; // @synthesize address=_address;
@property(retain, nonatomic) NSString *districtDesc; // @synthesize districtDesc=_districtDesc;
@property(retain, nonatomic) NSString *cityDesc; // @synthesize cityDesc=_cityDesc;
@property(retain, nonatomic) NSString *provinceDesc; // @synthesize provinceDesc=_provinceDesc;
@property(retain, nonatomic) NSString *countryDesc; // @synthesize countryDesc=_countryDesc;
@property(retain, nonatomic) NSString *districtCode; // @synthesize districtCode=_districtCode;
@property(retain, nonatomic) NSString *cityCode; // @synthesize cityCode=_cityCode;
@property(retain, nonatomic) NSString *provinceCode; // @synthesize provinceCode=_provinceCode;
@property(retain, nonatomic) NSString *mobile; // @synthesize mobile=_mobile;
@property(retain, nonatomic) NSString *contactName; // @synthesize contactName=_contactName;
- (void).cxx_destruct;

@end

