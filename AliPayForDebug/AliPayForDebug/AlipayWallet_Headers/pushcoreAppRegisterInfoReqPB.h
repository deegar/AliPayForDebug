//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "APDPBGeneratedMessage.h"

@class NSString;

@interface pushcoreAppRegisterInfoReqPB : APDPBGeneratedMessage
{
}

+ (CDStruct_af61540b *)_fieldInfos;

// Remaining properties
@property(retain, nonatomic) NSString *appChannel; // @dynamic appChannel;
@property(retain, nonatomic) NSString *appId; // @dynamic appId;
@property(retain, nonatomic) NSString *appName; // @dynamic appName;
@property(retain, nonatomic) NSString *appVersion; // @dynamic appVersion;
@property(retain, nonatomic) NSString *clientID; // @dynamic clientID;
@property(retain, nonatomic) NSString *deviceId; // @dynamic deviceId;
@property(readonly) _Bool hasAppChannel; // @dynamic hasAppChannel;
@property(readonly) _Bool hasAppId; // @dynamic hasAppId;
@property(readonly) _Bool hasAppName; // @dynamic hasAppName;
@property(readonly) _Bool hasAppVersion; // @dynamic hasAppVersion;
@property(readonly) _Bool hasClientID; // @dynamic hasClientID;
@property(readonly) _Bool hasDeviceId; // @dynamic hasDeviceId;
@property(readonly) _Bool hasManufacturer; // @dynamic hasManufacturer;
@property(readonly) _Bool hasModel; // @dynamic hasModel;
@property(readonly) _Bool hasMspTid; // @dynamic hasMspTid;
@property(readonly) _Bool hasNetwork; // @dynamic hasNetwork;
@property(readonly) _Bool hasOsType; // @dynamic hasOsType;
@property(readonly) _Bool hasOsVersion; // @dynamic hasOsVersion;
@property(readonly) _Bool hasPushVersion; // @dynamic hasPushVersion;
@property(retain, nonatomic) NSString *manufacturer; // @dynamic manufacturer;
@property(retain, nonatomic) NSString *model; // @dynamic model;
@property(retain, nonatomic) NSString *mspTid; // @dynamic mspTid;
@property(retain, nonatomic) NSString *network; // @dynamic network;
@property(retain, nonatomic) NSString *osType; // @dynamic osType;
@property(retain, nonatomic) NSString *osVersion; // @dynamic osVersion;
@property(retain, nonatomic) NSString *pushVersion; // @dynamic pushVersion;

@end

