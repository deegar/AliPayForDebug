//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "O2OMerchantRPCBaseController.h"

@class NSArray, NSMutableDictionary, NSString;

@interface O2ODetailFastRecommendVoucherTemplateController : O2OMerchantRPCBaseController
{
    NSMutableDictionary *_voucherManagerDic;
    NSString *_realCategoryId;
    NSArray *_categoryList;
    NSString *_currentCategoryId;
}

@property(retain, nonatomic) NSString *currentCategoryId; // @synthesize currentCategoryId=_currentCategoryId;
@property(retain, nonatomic) NSArray *categoryList; // @synthesize categoryList=_categoryList;
@property(retain, nonatomic) NSString *realCategoryId; // @synthesize realCategoryId=_realCategoryId;
@property(retain, nonatomic) NSMutableDictionary *voucherManagerDic; // @synthesize voucherManagerDic=_voucherManagerDic;
- (void).cxx_destruct;
- (CDUnknownBlockType)parseResult:(id)arg1;
- (_Bool)updateDataUseCacheIfValid:(id)arg1;
- (void)didSelectedTab:(id)arg1;
- (void)changeVoucherState:(unsigned long long)arg1 mid:(id)arg2;
- (id)obtainProtocolItem:(id)arg1;
- (void)applyVoucherAfterProtocol:(id)arg1 shopId:(id)arg2 index:(id)arg3 supView:(id)arg4 viewFlag:(id)arg5 monitorDic:(id)arg6;
- (void)updateState:(unsigned long long)arg1 index:(id)arg2;
- (void)applyVoucher:(id)arg1;
- (void)updateVouchlistData:(id)arg1 inContainer:(id)arg2;
- (void)didLoadTemplate;
- (id)getVoucherList:(id)arg1;
- (id)initialState;

@end

