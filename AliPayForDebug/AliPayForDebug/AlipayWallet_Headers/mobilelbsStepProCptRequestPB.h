//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "APDPBGeneratedMessage.h"

@class NSArray, NSString;

@interface mobilelbsStepProCptRequestPB : APDPBGeneratedMessage
{
}

+ (CDStruct_af61540b *)_fieldInfos;

// Remaining properties
@property(retain, nonatomic) NSString *appVersion; // @dynamic appVersion;
@property(retain, nonatomic) NSString *deviceId; // @dynamic deviceId;
@property(retain, nonatomic) NSString *edgeData; // @dynamic edgeData;
@property(readonly) _Bool hasAppVersion; // @dynamic hasAppVersion;
@property(readonly) _Bool hasDeviceId; // @dynamic hasDeviceId;
@property(readonly) _Bool hasEdgeData; // @dynamic hasEdgeData;
@property(readonly) _Bool hasOs; // @dynamic hasOs;
@property(readonly) _Bool hasSyncTime; // @dynamic hasSyncTime;
@property(readonly) _Bool hasTimezone; // @dynamic hasTimezone;
@property(readonly) _Bool hasUserId; // @dynamic hasUserId;
@property(retain, nonatomic) NSArray *historyDailyInfoList; // @dynamic historyDailyInfoList;
@property(retain, nonatomic) NSString *os; // @dynamic os;
@property(nonatomic) long long syncTime; // @dynamic syncTime;
@property(retain, nonatomic) NSString *timezone; // @dynamic timezone;
@property(retain, nonatomic) NSString *userId; // @dynamic userId;

@end

