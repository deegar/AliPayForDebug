//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "O2OTemplateController.h"

@class NSMutableDictionary;

@interface O2OCouponTemplateController : O2OTemplateController
{
    NSMutableDictionary *_voucherManagerDic;
}

@property(retain, nonatomic) NSMutableDictionary *voucherManagerDic; // @synthesize voucherManagerDic=_voucherManagerDic;
- (void).cxx_destruct;
- (void)changeVoucherState:(unsigned long long)arg1 mid:(id)arg2;
- (id)obtainProtocolItem:(id)arg1;
- (void)applyVoucherAfterProtocol:(id)arg1 shopId:(id)arg2 index:(id)arg3 supView:(id)arg4 viewFlag:(id)arg5 monitorDic:(id)arg6;
- (void)updateState:(unsigned long long)arg1 index:(id)arg2;
- (void)applyVoucher:(id)arg1;
- (id)initialState;

@end

