//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSData, NSString;

@interface APSdkApp : NSObject <NSCoding>
{
    NSString *_name;
    NSString *_appKey;
    NSString *_bundleID;
    NSData *_iconData;
    NSString *_scheme;
    NSString *_sdkVersion;
}

+ (id)currentShareScheme;
+ (id)currentApp;
@property(retain, nonatomic) NSString *sdkVersion; // @synthesize sdkVersion=_sdkVersion;
@property(retain, nonatomic) NSString *scheme; // @synthesize scheme=_scheme;
@property(retain, nonatomic) NSData *iconData; // @synthesize iconData=_iconData;
@property(retain, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property(retain, nonatomic) NSString *appKey; // @synthesize appKey=_appKey;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

