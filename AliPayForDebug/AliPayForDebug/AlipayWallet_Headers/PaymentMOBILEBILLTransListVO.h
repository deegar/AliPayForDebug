//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface PaymentMOBILEBILLTransListVO : NSObject
{
    NSString *_transLogId;
    NSString *_date;
    NSString *_simpleDate;
    NSString *_transType;
    NSString *_money;
    NSString *_transInstitution;
    NSString *_transMemo;
    NSString *_balance;
}

@property(retain, nonatomic) NSString *balance; // @synthesize balance=_balance;
@property(retain, nonatomic) NSString *transMemo; // @synthesize transMemo=_transMemo;
@property(retain, nonatomic) NSString *transInstitution; // @synthesize transInstitution=_transInstitution;
@property(retain, nonatomic) NSString *money; // @synthesize money=_money;
@property(retain, nonatomic) NSString *transType; // @synthesize transType=_transType;
@property(retain, nonatomic) NSString *simpleDate; // @synthesize simpleDate=_simpleDate;
@property(retain, nonatomic) NSString *date; // @synthesize date=_date;
@property(retain, nonatomic) NSString *transLogId; // @synthesize transLogId=_transLogId;
- (void).cxx_destruct;

@end

