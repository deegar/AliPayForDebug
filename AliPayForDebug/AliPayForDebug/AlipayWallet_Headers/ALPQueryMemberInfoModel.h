//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "O2OHTTPModel.h"

@class KABAOPRODMemberCardRequest;

@interface ALPQueryMemberInfoModel : O2OHTTPModel
{
    KABAOPRODMemberCardRequest *_reqParam;
}

@property(retain, nonatomic) KABAOPRODMemberCardRequest *reqParam; // @synthesize reqParam=_reqParam;
- (void).cxx_destruct;
- (_Bool)parseResponse:(id)arg1;
- (SEL)selectorNameForRPCService;
- (Class)RPCServiceClass;
- (Class)RPCResponseClass;
- (Class)RPCRequestClass;
- (id)rpcRequest;
- (id)key;

@end

