//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TFHomeRecord.h"

@class NSString;

@interface TFHomeInternationalRecord : TFHomeRecord
{
    NSString *_relationId;
    NSString *_swiftCode;
    NSString *_payeeName;
    NSString *_accontLastNo;
}

+ (id)recordWithTransferRecordVO:(id)arg1;
@property(retain, nonatomic) NSString *accontLastNo; // @synthesize accontLastNo=_accontLastNo;
@property(retain, nonatomic) NSString *payeeName; // @synthesize payeeName=_payeeName;
@property(retain, nonatomic) NSString *swiftCode; // @synthesize swiftCode=_swiftCode;
@property(retain, nonatomic) NSString *relationId; // @synthesize relationId=_relationId;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

