//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

@interface TYTinyAppMonitor : NSObject
{
    NSString *_appId;
    NSNumber *_appType;
}

+ (_Bool)isTinyAppNow:(id *)arg1 tinyAppType:(id *)arg2;
+ (id)shared;
+ (void)stop;
+ (void)start:(id)arg1;
@property(copy, nonatomic) NSNumber *appType; // @synthesize appType=_appType;
@property(copy, nonatomic) NSString *appId; // @synthesize appId=_appId;
- (void).cxx_destruct;

@end

