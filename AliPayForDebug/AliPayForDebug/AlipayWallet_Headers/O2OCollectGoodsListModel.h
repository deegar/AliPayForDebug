//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "O2OCollectBaseModel.h"

@interface O2OCollectGoodsListModel : O2OCollectBaseModel
{
    _Bool _mhasMore;
    _Bool _isFirstTimeRequest;
}

@property(nonatomic) _Bool isFirstTimeRequest; // @synthesize isFirstTimeRequest=_isFirstTimeRequest;
@property(nonatomic) _Bool mhasMore; // @synthesize mhasMore=_mhasMore;
- (void)removeInnerObjectsAtIndex:(long long)arg1;
- (id)operationType;
- (id)templateConfig;
- (id)responseObjects:(id)arg1;
- (unsigned long long)pageMode;
- (long long)pageSize;
- (_Bool)raise1002Exception;
- (SEL)selectorNameForRPCService;
- (Class)RPCServiceClass;
- (Class)RPCResponseClass;
- (Class)RPCRequestClass;
- (id)rpcRequest;
- (id)initWithViewController:(id)arg1;

@end

