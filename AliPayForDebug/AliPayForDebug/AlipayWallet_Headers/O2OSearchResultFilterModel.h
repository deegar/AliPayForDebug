//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "O2OHTTPListModel.h"

@class NSArray, NSString, O2OSearchModelCommonParams;
@protocol O2OSearchResultFilterModelDelegate;

@interface O2OSearchResultFilterModel : O2OHTTPListModel
{
    unsigned long long _biz;
    O2OSearchModelCommonParams *_commonParams;
    NSArray *_menuGroups;
    NSString *_title;
    NSString *_tab;
    id <O2OSearchResultFilterModelDelegate> _modelDelegate;
    NSArray *_cachedMenue;
    long long _requestFlag;
}

@property(nonatomic) long long requestFlag; // @synthesize requestFlag=_requestFlag;
@property(copy, nonatomic) NSArray *cachedMenue; // @synthesize cachedMenue=_cachedMenue;
@property(nonatomic) __weak id <O2OSearchResultFilterModelDelegate> modelDelegate; // @synthesize modelDelegate=_modelDelegate;
@property(readonly, nonatomic) NSString *tab; // @synthesize tab=_tab;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) NSArray *menuGroups; // @synthesize menuGroups=_menuGroups;
@property(copy, nonatomic) O2OSearchModelCommonParams *commonParams; // @synthesize commonParams=_commonParams;
@property(nonatomic) unsigned long long biz; // @synthesize biz=_biz;
- (void).cxx_destruct;
- (_Bool)raise1002Exception;
- (id)operationType;
- (id)cacheKey;
- (void)loadCache:(CDUnknownBlockType)arg1;
- (id)filterNeedCacheMenues:(id)arg1 originalCache:(id)arg2;
- (void)updateCache:(id)arg1 originalCache:(id)arg2;
- (id)handleMenueResult:(id)arg1 cacheMenues:(id)arg2;
- (_Bool)useCache;
- (_Bool)parseResponse:(id)arg1;
- (void)doLoad;
- (void)load;
- (void)cancel;
- (_Bool)isPBResponse;
- (SEL)selectorNameForRPCService;
- (Class)RPCServiceClass;
- (Class)RPCResponseClass;
- (Class)RPCRequestClass;
- (id)rpcRequest;
- (struct requestConfig)requestConfig;

@end

