//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "APDPBGeneratedMessage.h"

@class NSString, distinguishprodFaceScanResPB, distinguishprodFuScanResPB;

@interface distinguishprodYearResModelPB : APDPBGeneratedMessage
{
}

+ (CDStruct_af61540b *)_fieldInfos;

// Remaining properties
@property(retain, nonatomic) distinguishprodFaceScanResPB *faceScanRes; // @dynamic faceScanRes;
@property(retain, nonatomic) distinguishprodFuScanResPB *fuScanRes; // @dynamic fuScanRes;
@property(readonly) _Bool hasFaceScanRes; // @dynamic hasFaceScanRes;
@property(readonly) _Bool hasFuScanRes; // @dynamic hasFuScanRes;
@property(readonly) _Bool hasRecType; // @dynamic hasRecType;
@property(retain, nonatomic) NSString *recType; // @dynamic recType;

@end

