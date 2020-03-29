//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "O2OMtopModel.h"

@class NSArray, NSString;

@interface O2OAllCategoryModel : O2OMtopModel
{
    NSString *_cityId;
    NSArray *_categoryNameArray;
}

@property(retain, nonatomic) NSArray *categoryNameArray; // @synthesize categoryNameArray=_categoryNameArray;
- (void).cxx_destruct;
- (id)operationType;
- (_Bool)raise1002Exception;
- (id)responseObjects:(id)arg1 withTemplates:(id)arg2;
- (_Bool)isResponseSuccess:(id)arg1 withTemplates:(id)arg2;
- (id)templatesFromResponse:(id)arg1;
- (SEL)selectorNameForRPCService;
- (Class)RPCServiceClass;
- (Class)RPCResponseClass;
- (Class)RPCRequestClass;
- (id)rpcRequest;
- (id)getReqParams;
- (id)apiVersion;
- (id)apiName;
- (id)modelClassName;
- (_Bool)useMtop;
- (id)requestParameters;
- (_Bool)notConvertToKbcsa;
- (id)key;

@end

