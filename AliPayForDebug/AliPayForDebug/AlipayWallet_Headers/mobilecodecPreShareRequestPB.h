//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "APDPBGeneratedMessage.h"

@class NSString, PBMapStringString;

@interface mobilecodecPreShareRequestPB : APDPBGeneratedMessage
{
}

+ (CDStruct_af61540b *)_fieldInfos;

// Remaining properties
@property(retain, nonatomic) NSString *appId; // @dynamic appId;
@property(retain, nonatomic) PBMapStringString *bizExtInfo; // @dynamic bizExtInfo;
@property(retain, nonatomic) NSString *bizType; // @dynamic bizType;
@property(readonly) _Bool hasAppId; // @dynamic hasAppId;
@property(readonly) _Bool hasBizExtInfo; // @dynamic hasBizExtInfo;
@property(readonly) _Bool hasBizType; // @dynamic hasBizType;
@property(readonly) _Bool hasUrl; // @dynamic hasUrl;
@property(retain, nonatomic) NSString *url; // @dynamic url;

@end

