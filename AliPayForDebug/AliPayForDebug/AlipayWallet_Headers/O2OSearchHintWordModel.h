//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "O2OHTTPModel.h"

@class NSString;

@interface O2OSearchHintWordModel : O2OHTTPModel
{
    NSString *_cityCode;
    NSString *_longitude;
    NSString *_latitude;
    NSString *_ftCategoryId;
    NSString *_bgCategoryId;
    NSString *_limitCategoryV1;
    NSString *_placeHolder;
    NSString *_searchWord;
}

@property(copy, nonatomic) NSString *searchWord; // @synthesize searchWord=_searchWord;
@property(copy, nonatomic) NSString *placeHolder; // @synthesize placeHolder=_placeHolder;
@property(copy, nonatomic) NSString *limitCategoryV1; // @synthesize limitCategoryV1=_limitCategoryV1;
@property(copy, nonatomic) NSString *bgCategoryId; // @synthesize bgCategoryId=_bgCategoryId;
@property(copy, nonatomic) NSString *ftCategoryId; // @synthesize ftCategoryId=_ftCategoryId;
@property(copy, nonatomic) NSString *latitude; // @synthesize latitude=_latitude;
@property(copy, nonatomic) NSString *longitude; // @synthesize longitude=_longitude;
@property(copy, nonatomic) NSString *cityCode; // @synthesize cityCode=_cityCode;
- (void).cxx_destruct;
- (_Bool)parseResponse:(id)arg1;
- (void)reset;
- (_Bool)raise1002Exception;
- (id)operationType;
- (SEL)selectorNameForRPCService;
- (Class)RPCServiceClass;
- (Class)RPCResponseClass;
- (Class)RPCRequestClass;
- (id)rpcRequest;

@end

