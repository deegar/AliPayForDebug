//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface BEEShortCutModel : NSObject
{
    NSString *_appId;
    NSString *_scheme;
    NSString *_appName;
    NSString *_appIcon;
    NSString *_appUrl;
    NSString *_extraStr;
}

@property(retain, nonatomic) NSString *extraStr; // @synthesize extraStr=_extraStr;
@property(retain, nonatomic) NSString *appUrl; // @synthesize appUrl=_appUrl;
@property(retain, nonatomic) NSString *appIcon; // @synthesize appIcon=_appIcon;
@property(retain, nonatomic) NSString *appName; // @synthesize appName=_appName;
@property(retain, nonatomic) NSString *scheme; // @synthesize scheme=_scheme;
@property(retain, nonatomic) NSString *appId; // @synthesize appId=_appId;
- (void).cxx_destruct;

@end

