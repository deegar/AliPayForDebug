//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "O2OMistModel.h"

@class NSDictionary, NSMutableArray, NSString, O2OMerchantDataArray;

@interface O2OMerchantSubShopModel : O2OMistModel
{
    _Bool _asyncDisplay;
    double _longitude;
    double _latitude;
    NSDictionary *_schemeParameterDic;
    NSString *_shopId;
    NSString *_blockIds;
    NSString *_templateType;
    NSDictionary *_monitorDic;
    O2OMerchantDataArray *_blockData;
    NSDictionary *_shopInfo;
    NSMutableArray *_blockArray;
    long long _systemTime;
    NSString *_j;
    NSString *_tabIndex;
}

@property(copy, nonatomic) NSString *tabIndex; // @synthesize tabIndex=_tabIndex;
@property(copy, nonatomic) NSString *j; // @synthesize j=_j;
@property(nonatomic) long long systemTime; // @synthesize systemTime=_systemTime;
@property(retain, nonatomic) NSMutableArray *blockArray; // @synthesize blockArray=_blockArray;
@property(retain, nonatomic) NSDictionary *shopInfo; // @synthesize shopInfo=_shopInfo;
@property(nonatomic) _Bool asyncDisplay; // @synthesize asyncDisplay=_asyncDisplay;
@property(retain, nonatomic) O2OMerchantDataArray *blockData; // @synthesize blockData=_blockData;
@property(retain, nonatomic) NSDictionary *monitorDic; // @synthesize monitorDic=_monitorDic;
@property(retain, nonatomic) NSString *templateType; // @synthesize templateType=_templateType;
@property(retain, nonatomic) NSString *blockIds; // @synthesize blockIds=_blockIds;
@property(retain, nonatomic) NSString *shopId; // @synthesize shopId=_shopId;
@property(retain, nonatomic) NSDictionary *schemeParameterDic; // @synthesize schemeParameterDic=_schemeParameterDic;
@property(nonatomic) double latitude; // @synthesize latitude=_latitude;
@property(nonatomic) double longitude; // @synthesize longitude=_longitude;
- (void).cxx_destruct;
- (id)templatesFromResponse:(id)arg1;
- (id)responseObjects:(id)arg1 withTemplates:(id)arg2;
- (id)operationType;
- (SEL)selectorNameForRPCService;
- (id)templateConfig;
- (_Bool)raise1002Exception;
- (Class)RPCServiceClass;
- (Class)RPCResponseClass;
- (Class)RPCRequestClass;
- (id)rpcRequest;

@end

