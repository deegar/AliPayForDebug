//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSString;

@interface kbscprodAddressFilterRequest : NSObject
{
    NSDictionary *_expandInfo;
    NSString *_pageType;
    NSArray *_filterAddress;
    NSString *_userId;
    NSString *_platform;
    NSString *_clientVersion;
    NSString *_appId;
}

+ (Class)filterAddressElementClass;
+ (Class)expandInfoElementClass;
@property(retain, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(retain, nonatomic) NSString *clientVersion; // @synthesize clientVersion=_clientVersion;
@property(retain, nonatomic) NSString *platform; // @synthesize platform=_platform;
@property(retain, nonatomic) NSString *userId; // @synthesize userId=_userId;
@property(retain, nonatomic) NSArray *filterAddress; // @synthesize filterAddress=_filterAddress;
@property(retain, nonatomic) NSString *pageType; // @synthesize pageType=_pageType;
@property(retain, nonatomic) NSDictionary *expandInfo; // @synthesize expandInfo=_expandInfo;
- (void).cxx_destruct;

@end

