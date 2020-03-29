//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MQPOrderProtocol-Protocol.h"
#import "SPOrderProtocol-Protocol.h"

@class MQPModel, NSDictionary, NSString;

@interface SPPayOrder : NSObject <SPOrderProtocol, MQPOrderProtocol>
{
    NSDictionary *_extraParams;
    NSDictionary *_bizInfo;
    MQPModel *_innerModel;
}

+ (id)loadConfig;
@property(retain, nonatomic) MQPModel *innerModel; // @synthesize innerModel=_innerModel;
@property(retain, nonatomic) NSDictionary *bizInfo; // @synthesize bizInfo=_bizInfo;
@property(retain, nonatomic) NSDictionary *extraParams; // @synthesize extraParams=_extraParams;
- (void).cxx_destruct;
- (void)forwardInvocation:(id)arg1;
- (id)dictionaryValue;
@property(copy, nonatomic) NSString *bizreqdata; // @dynamic bizreqdata;
- (_Bool)isValidStr:(id)arg1;
@property(readonly, copy) NSString *description;
- (id)orderInfo;
- (id)init;

// Remaining properties
@property(copy, nonatomic) NSString *apiname; // @dynamic apiname;
@property(copy, nonatomic) NSString *apiservice; // @dynamic apiservice;
@property(copy, nonatomic) NSString *appName; // @dynamic appName;
@property(copy, nonatomic) NSString *assignedchannel; // @dynamic assignedchannel;
@property(copy, nonatomic) NSString *bizNo; // @dynamic bizNo;
@property(copy, nonatomic) NSString *bizidentity; // @dynamic bizidentity;
@property(copy, nonatomic) NSString *bizsubtype; // @dynamic bizsubtype;
@property(copy, nonatomic) NSString *biztype; // @dynamic biztype;
@property(copy, nonatomic) NSString *cashier; // @dynamic cashier;
@property(readonly, copy) NSString *debugDescription;
@property(copy, nonatomic) NSString *displaypayresult; // @dynamic displaypayresult;
@property(copy, nonatomic) NSString *extinfos; // @dynamic extinfos;
@property(copy, nonatomic) NSString *extok; // @dynamic extok;
@property(copy, nonatomic) NSString *forbidchannel; // @dynamic forbidchannel;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) NSString *limitchannelext; // @dynamic limitchannelext;
@property(copy, nonatomic) NSString *logonId; // @dynamic logonId;
@property(copy, nonatomic) NSString *optype; // @dynamic optype;
@property(copy, nonatomic) NSString *partner; // @dynamic partner;
@property(readonly) Class superclass;
@property(copy, nonatomic) NSString *tip; // @dynamic tip;
@property(copy, nonatomic) NSString *tradefrom; // @dynamic tradefrom;
@property(copy, nonatomic) NSString *tradeno; // @dynamic tradeno;
@property(copy, nonatomic) NSString *userid; // @dynamic userid;
@property(copy, nonatomic) NSString *uuid; // @dynamic uuid;

@end

