//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface OSPDeviceAuthModelInfoRequest : NSObject
{
    NSString *_action;
    NSString *_appPackageName;
    NSString *_appProductId;
    NSString *_appProductVersion;
    NSDictionary *_extraParams;
    NSString *_imei;
    NSString *_imsi;
    NSString *_osType;
    NSString *_osVersion;
    NSString *_tid;
}

@property(retain, nonatomic) NSString *tid; // @synthesize tid=_tid;
@property(retain, nonatomic) NSString *osVersion; // @synthesize osVersion=_osVersion;
@property(retain, nonatomic) NSString *osType; // @synthesize osType=_osType;
@property(retain, nonatomic) NSString *imsi; // @synthesize imsi=_imsi;
@property(retain, nonatomic) NSString *imei; // @synthesize imei=_imei;
@property(retain, nonatomic) NSDictionary *extraParams; // @synthesize extraParams=_extraParams;
@property(retain, nonatomic) NSString *appProductVersion; // @synthesize appProductVersion=_appProductVersion;
@property(retain, nonatomic) NSString *appProductId; // @synthesize appProductId=_appProductId;
@property(retain, nonatomic) NSString *appPackageName; // @synthesize appPackageName=_appPackageName;
@property(retain, nonatomic) NSString *action; // @synthesize action=_action;
- (void).cxx_destruct;

@end

