//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "APDPBGeneratedMessage.h"

@class NSArray, NSString;

@interface ContactOperationSyncPB : APDPBGeneratedMessage
{
}

+ (CDStruct_af61540b *)_fieldInfos;

// Remaining properties
@property(retain, nonatomic) NSArray *contacts; // @dynamic contacts;
@property(retain, nonatomic) NSString *deviceId; // @dynamic deviceId;
@property(readonly) _Bool hasDeviceId; // @dynamic hasDeviceId;
@property(readonly) _Bool hasLifeSessionId; // @dynamic hasLifeSessionId;
@property(readonly) _Bool hasNeedPull; // @dynamic hasNeedPull;
@property(readonly) _Bool hasOrder; // @dynamic hasOrder;
@property(readonly) _Bool hasScene; // @dynamic hasScene;
@property(readonly) _Bool hasSimple; // @dynamic hasSimple;
@property(readonly) _Bool hasUserId; // @dynamic hasUserId;
@property(retain, nonatomic) NSString *lifeSessionId; // @dynamic lifeSessionId;
@property(nonatomic) _Bool needPull; // @dynamic needPull;
@property(nonatomic) int order; // @dynamic order;
@property(nonatomic) int scene; // @dynamic scene;
@property(nonatomic) _Bool simple; // @dynamic simple;
@property(retain, nonatomic) NSString *userId; // @dynamic userId;

@end

