//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class APKeyValueFileStorage;

@interface WHKVStorage : NSObject
{
    _Bool _flagOfShowBankCardTip;
    _Bool _flagOfShowAssetsTip;
    _Bool _amountCiphertextFlag;
    APKeyValueFileStorage *_commonStorage;
}

+ (id)storage;
@property(retain, nonatomic) APKeyValueFileStorage *commonStorage; // @synthesize commonStorage=_commonStorage;
@property(nonatomic) _Bool flagOfShowAssetsTip; // @synthesize flagOfShowAssetsTip=_flagOfShowAssetsTip;
- (void).cxx_destruct;
- (_Bool)isSwitchNewEdition;
- (void)userDidChanged;
@property(nonatomic) _Bool flagOfShowBankCardTip; // @synthesize flagOfShowBankCardTip=_flagOfShowBankCardTip;
- (void)__flagOfShowBankCardTip;
@property(nonatomic) _Bool amountCiphertextFlag; // @synthesize amountCiphertextFlag=_amountCiphertextFlag;
- (void)__amountCiphertextFlag;

@end

