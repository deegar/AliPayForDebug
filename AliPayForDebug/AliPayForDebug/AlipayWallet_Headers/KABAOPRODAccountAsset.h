//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KABAOPRODToString.h"

@class NSString;

@interface KABAOPRODAccountAsset : KABAOPRODToString
{
    NSString *_balance;
    NSString *_creditAmount;
    NSString *_freezeAmount;
    NSString *_ctuAmount;
    NSString *_depositAmount;
    NSString *_systemAmount;
    NSString *_availableAmount;
    NSString *_uncertifiedFreezeAmount;
}

@property(retain, nonatomic) NSString *uncertifiedFreezeAmount; // @synthesize uncertifiedFreezeAmount=_uncertifiedFreezeAmount;
@property(retain, nonatomic) NSString *availableAmount; // @synthesize availableAmount=_availableAmount;
@property(retain, nonatomic) NSString *systemAmount; // @synthesize systemAmount=_systemAmount;
@property(retain, nonatomic) NSString *depositAmount; // @synthesize depositAmount=_depositAmount;
@property(retain, nonatomic) NSString *ctuAmount; // @synthesize ctuAmount=_ctuAmount;
@property(retain, nonatomic) NSString *freezeAmount; // @synthesize freezeAmount=_freezeAmount;
@property(retain, nonatomic) NSString *creditAmount; // @synthesize creditAmount=_creditAmount;
@property(retain, nonatomic) NSString *balance; // @synthesize balance=_balance;
- (void).cxx_destruct;

@end

