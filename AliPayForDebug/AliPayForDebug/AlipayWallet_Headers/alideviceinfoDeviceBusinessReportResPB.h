//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "APDPBGeneratedMessage.h"

@class NSString, PBMapStringString;

@interface alideviceinfoDeviceBusinessReportResPB : APDPBGeneratedMessage
{
}

+ (CDStruct_af61540b *)_fieldInfos;

// Remaining properties
@property(retain, nonatomic) PBMapStringString *config; // @dynamic config;
@property(retain, nonatomic) NSString *errCode; // @dynamic errCode;
@property(retain, nonatomic) NSString *errMsg; // @dynamic errMsg;
@property(readonly) _Bool hasConfig; // @dynamic hasConfig;
@property(readonly) _Bool hasErrCode; // @dynamic hasErrCode;
@property(readonly) _Bool hasErrMsg; // @dynamic hasErrMsg;
@property(readonly) _Bool hasSuccess; // @dynamic hasSuccess;
@property(nonatomic) _Bool success; // @dynamic success;

@end

