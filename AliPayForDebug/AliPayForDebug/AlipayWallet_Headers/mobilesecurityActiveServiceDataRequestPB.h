//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "APDPBGeneratedMessage.h"

@class NSString, PBMapStringString;

@interface mobilesecurityActiveServiceDataRequestPB : APDPBGeneratedMessage
{
}

+ (CDStruct_af61540b *)_fieldInfos;

// Remaining properties
@property(retain, nonatomic) NSString *bizScene; // @dynamic bizScene;
@property(retain, nonatomic) PBMapStringString *extInfo; // @dynamic extInfo;
@property(readonly) _Bool hasBizScene; // @dynamic hasBizScene;
@property(readonly) _Bool hasExtInfo; // @dynamic hasExtInfo;
@property(readonly) _Bool hasReportData; // @dynamic hasReportData;
@property(readonly) _Bool hasReportType; // @dynamic hasReportType;
@property(retain, nonatomic) PBMapStringString *reportData; // @dynamic reportData;
@property(nonatomic) int reportType; // @dynamic reportType;

@end

