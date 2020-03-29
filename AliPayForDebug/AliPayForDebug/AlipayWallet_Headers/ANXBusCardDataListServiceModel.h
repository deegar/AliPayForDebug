//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ANXRPCRequestProtocol-Protocol.h"

@class ANXBusCardDataListRequest, ANXBusCardDataListResponse, ANXRuntimeConfig, NSString;

@interface ANXBusCardDataListServiceModel : NSObject <ANXRPCRequestProtocol>
{
    _Bool _syncQuery;
    ANXRuntimeConfig *_runtimeConfig;
    ANXBusCardDataListRequest *_cardDataListRequest;
    ANXBusCardDataListResponse *_cardDataListResponse;
    NSString *_cardType;
    NSString *_cardNo;
    NSString *_source;
    NSString *_adcode;
    NSString *_districtCode;
    NSString *_longitude;
    NSString *_latitude;
}

@property(copy, nonatomic) NSString *latitude; // @synthesize latitude=_latitude;
@property(copy, nonatomic) NSString *longitude; // @synthesize longitude=_longitude;
@property(copy, nonatomic) NSString *districtCode; // @synthesize districtCode=_districtCode;
@property(copy, nonatomic) NSString *adcode; // @synthesize adcode=_adcode;
@property(nonatomic) _Bool syncQuery; // @synthesize syncQuery=_syncQuery;
@property(copy, nonatomic) NSString *source; // @synthesize source=_source;
@property(copy, nonatomic) NSString *cardNo; // @synthesize cardNo=_cardNo;
@property(copy, nonatomic) NSString *cardType; // @synthesize cardType=_cardType;
@property(retain, nonatomic) ANXBusCardDataListResponse *cardDataListResponse; // @synthesize cardDataListResponse=_cardDataListResponse;
@property(retain, nonatomic) ANXBusCardDataListRequest *cardDataListRequest; // @synthesize cardDataListRequest=_cardDataListRequest;
@property(retain, nonatomic) ANXRuntimeConfig *runtimeConfig; // @synthesize runtimeConfig=_runtimeConfig;
- (void).cxx_destruct;
- (void)buildCardListRequest;
- (id)ANXRPCComponentBody;
- (id)ANXRPCComponentHeaders;
- (id)ANXRPCComponentMethod;
- (id)initWithParams:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

