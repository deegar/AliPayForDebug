//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "O2OHTTPModel.h"

@class NSArray, NSString;

@interface O2OPOrderCancelCheckModel : O2OHTTPModel
{
    NSString *_orderNo;
    NSString *_subject;
    NSArray *_reasons;
}

@property(copy, nonatomic) NSArray *reasons; // @synthesize reasons=_reasons;
@property(copy, nonatomic) NSString *subject; // @synthesize subject=_subject;
@property(copy, nonatomic) NSString *orderNo; // @synthesize orderNo=_orderNo;
- (void).cxx_destruct;
- (_Bool)raise1002Exception;
- (_Bool)parseResponse:(id)arg1;
- (void)reset;
- (id)rpcRequest;
- (id)operationType;
- (SEL)selectorNameForRPCService;
- (Class)RPCServiceClass;
- (Class)RPCResponseClass;
- (Class)RPCRequestClass;

@end

