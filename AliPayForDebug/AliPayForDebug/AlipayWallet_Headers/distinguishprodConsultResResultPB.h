//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "APDPBGeneratedMessage.h"

@class NSArray, NSString, PBMapStringString, distinguishprodIdentifyResModelPB;

@interface distinguishprodConsultResResultPB : APDPBGeneratedMessage
{
}

+ (CDStruct_af61540b *)_fieldInfos;

// Remaining properties
@property(retain, nonatomic) NSArray *addPgkList; // @dynamic addPgkList;
@property(retain, nonatomic) NSArray *delPgkList; // @dynamic delPgkList;
@property(retain, nonatomic) PBMapStringString *extraInfo; // @dynamic extraInfo;
@property(readonly) _Bool hasExtraInfo; // @dynamic hasExtraInfo;
@property(readonly) _Bool hasIdentifyRes; // @dynamic hasIdentifyRes;
@property(readonly) _Bool hasOldVersion; // @dynamic hasOldVersion;
@property(readonly) _Bool hasPb_newVersion; // @dynamic hasPb_newVersion;
@property(readonly) _Bool hasResultCode; // @dynamic hasResultCode;
@property(readonly) _Bool hasResultDesc; // @dynamic hasResultDesc;
@property(readonly) _Bool hasResultView; // @dynamic hasResultView;
@property(readonly) _Bool hasShowType; // @dynamic hasShowType;
@property(readonly) _Bool hasSuccess; // @dynamic hasSuccess;
@property(retain, nonatomic) distinguishprodIdentifyResModelPB *identifyRes; // @dynamic identifyRes;
@property(retain, nonatomic) NSString *oldVersion; // @dynamic oldVersion;
@property(retain, nonatomic) NSString *pb_newVersion; // @dynamic pb_newVersion;
@property(retain, nonatomic) NSString *resultCode; // @dynamic resultCode;
@property(retain, nonatomic) NSString *resultDesc; // @dynamic resultDesc;
@property(retain, nonatomic) NSString *resultView; // @dynamic resultView;
@property(nonatomic) int showType; // @dynamic showType;
@property(nonatomic) _Bool success; // @dynamic success;

@end

