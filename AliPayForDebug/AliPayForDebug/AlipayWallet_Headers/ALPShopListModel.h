//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "O2OHTTPListModel.h"

@class NSString;

@interface ALPShopListModel : O2OHTTPListModel
{
    int _currentPage;
    NSString *_templateId;
    NSString *_passId;
    double _longitude;
    double _latitude;
    NSString *_shopNum;
}

@property(nonatomic) int currentPage; // @synthesize currentPage=_currentPage;
@property(retain, nonatomic) NSString *shopNum; // @synthesize shopNum=_shopNum;
@property(nonatomic) double latitude; // @synthesize latitude=_latitude;
@property(nonatomic) double longitude; // @synthesize longitude=_longitude;
@property(retain, nonatomic) NSString *passId; // @synthesize passId=_passId;
@property(retain, nonatomic) NSString *templateId; // @synthesize templateId=_templateId;
- (void).cxx_destruct;
- (id)responseObjects:(id)arg1;
- (_Bool)isPBResponse;
- (SEL)selectorNameForRPCService;
- (Class)RPCServiceClass;
- (Class)RPCResponseClass;
- (Class)RPCRequestClass;
- (long long)pageSize;
- (_Bool)raise1002Exception;
- (id)rpcRequest;
- (void)reset;
- (void)load;

@end

