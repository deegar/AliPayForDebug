//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface kbscprodAddressManagerRequest : NSObject
{
    NSDictionary *_expandInfo;
    NSString *_pageType;
    NSString *_cityId;
    NSString *_platform;
}

+ (Class)expandInfoElementClass;
@property(retain, nonatomic) NSString *platform; // @synthesize platform=_platform;
@property(retain, nonatomic) NSString *cityId; // @synthesize cityId=_cityId;
@property(retain, nonatomic) NSString *pageType; // @synthesize pageType=_pageType;
@property(retain, nonatomic) NSDictionary *expandInfo; // @synthesize expandInfo=_expandInfo;
- (void).cxx_destruct;

@end

