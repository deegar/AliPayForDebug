//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface mobileappconfigUserHistoryReportReq : NSObject
{
    NSString *_reqType;
    NSArray *_clientRecentUsedList;
    NSString *_platform;
    NSArray *_appExtInfoList;
}

+ (Class)appExtInfoListElementClass;
+ (Class)clientRecentUsedListElementClass;
@property(retain, nonatomic) NSArray *appExtInfoList; // @synthesize appExtInfoList=_appExtInfoList;
@property(retain, nonatomic) NSString *platform; // @synthesize platform=_platform;
@property(retain, nonatomic) NSArray *clientRecentUsedList; // @synthesize clientRecentUsedList=_clientRecentUsedList;
@property(retain, nonatomic) NSString *reqType; // @synthesize reqType=_reqType;
- (void).cxx_destruct;

@end
