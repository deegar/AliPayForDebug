//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "APDPBGeneratedMessage.h"

@class NSString, PBMapStringString;

@interface mobilechatQueryMerchantInfoResult : APDPBGeneratedMessage
{
}

+ (CDStruct_af61540b *)_fieldInfos;

// Remaining properties
@property(readonly) _Bool hasItemConfigs; // @dynamic hasItemConfigs;
@property(readonly) _Bool hasItemInfo; // @dynamic hasItemInfo;
@property(readonly) _Bool hasItemVersion; // @dynamic hasItemVersion;
@property(readonly) _Bool hasMemo; // @dynamic hasMemo;
@property(readonly) _Bool hasResultStatus; // @dynamic hasResultStatus;
@property(readonly) _Bool hasSessionConfigs; // @dynamic hasSessionConfigs;
@property(readonly) _Bool hasSessionInfo; // @dynamic hasSessionInfo;
@property(readonly) _Bool hasSessionVersion; // @dynamic hasSessionVersion;
@property(retain, nonatomic) PBMapStringString *itemConfigs; // @dynamic itemConfigs;
@property(retain, nonatomic) PBMapStringString *itemInfo; // @dynamic itemInfo;
@property(nonatomic) long long itemVersion; // @dynamic itemVersion;
@property(retain, nonatomic) NSString *memo; // @dynamic memo;
@property(nonatomic) int resultStatus; // @dynamic resultStatus;
@property(retain, nonatomic) PBMapStringString *sessionConfigs; // @dynamic sessionConfigs;
@property(retain, nonatomic) PBMapStringString *sessionInfo; // @dynamic sessionInfo;
@property(nonatomic) long long sessionVersion; // @dynamic sessionVersion;

@end

