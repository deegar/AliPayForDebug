//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "APDPBGeneratedMessage.h"

@class NSString, PBMapStringString;

@interface mfrontgwMiniappHttpProxyRequestPB : APDPBGeneratedMessage
{
}

+ (CDStruct_af61540b *)_fieldInfos;

// Remaining properties
@property(retain, nonatomic) NSString *appId; // @dynamic appId;
@property(retain, nonatomic) NSString *dataString; // @dynamic dataString;
@property(readonly) _Bool hasAppId; // @dynamic hasAppId;
@property(readonly) _Bool hasDataString; // @dynamic hasDataString;
@property(readonly) _Bool hasHeaders; // @dynamic hasHeaders;
@property(readonly) _Bool hasMethod; // @dynamic hasMethod;
@property(readonly) _Bool hasPb_data; // @dynamic hasPb_data;
@property(readonly) _Bool hasTimeout; // @dynamic hasTimeout;
@property(readonly) _Bool hasUrl; // @dynamic hasUrl;
@property(retain, nonatomic) PBMapStringString *headers; // @dynamic headers;
@property(retain, nonatomic) NSString *method; // @dynamic method;
@property(retain, nonatomic) PBMapStringString *pb_data; // @dynamic pb_data;
@property(nonatomic) int timeout; // @dynamic timeout;
@property(retain, nonatomic) NSString *url; // @dynamic url;

@end

