//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "APDPBGeneratedMessage.h"

@class NSString, PBMapStringString;

@interface MSMobileFetchRequestPB : APDPBGeneratedMessage
{
}

+ (CDStruct_af61540b *)_fieldInfos;

// Remaining properties
@property(retain, nonatomic) NSString *accessCode; // @dynamic accessCode;
@property(retain, nonatomic) NSString *bizCode; // @dynamic bizCode;
@property(retain, nonatomic) NSString *carrierType; // @dynamic carrierType;
@property(retain, nonatomic) PBMapStringString *extParams; // @dynamic extParams;
@property(readonly) _Bool hasAccessCode; // @dynamic hasAccessCode;
@property(readonly) _Bool hasBizCode; // @dynamic hasBizCode;
@property(readonly) _Bool hasCarrierType; // @dynamic hasCarrierType;
@property(readonly) _Bool hasExtParams; // @dynamic hasExtParams;
@property(readonly) _Bool hasPhone; // @dynamic hasPhone;
@property(readonly) _Bool hasProductId; // @dynamic hasProductId;
@property(readonly) _Bool hasScene; // @dynamic hasScene;
@property(retain, nonatomic) NSString *phone; // @dynamic phone;
@property(retain, nonatomic) NSString *productId; // @dynamic productId;
@property(retain, nonatomic) NSString *scene; // @dynamic scene;

@end

