//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TFBaseRespVO.h"

@class NSString;

@interface TFQueryTransferProgressResp : TFBaseRespVO
{
    NSString *_gmtCreate;
    NSString *_gmtPay;
    NSString *_gmtSuccess;
    NSString *_transferStatus;
    NSString *_toCardStatus;
    NSString *_transferAmount;
    NSString *_receiveCardLastNo;
    NSString *_receiveInstName;
    NSString *_receiveUserName;
    NSString *_gmtSuccessDes;
    NSString *_progressMemo;
    NSString *_progressSubMemo;
}

@property(retain, nonatomic) NSString *progressSubMemo; // @synthesize progressSubMemo=_progressSubMemo;
@property(retain, nonatomic) NSString *progressMemo; // @synthesize progressMemo=_progressMemo;
@property(retain, nonatomic) NSString *gmtSuccessDes; // @synthesize gmtSuccessDes=_gmtSuccessDes;
@property(retain, nonatomic) NSString *receiveUserName; // @synthesize receiveUserName=_receiveUserName;
@property(retain, nonatomic) NSString *receiveInstName; // @synthesize receiveInstName=_receiveInstName;
@property(retain, nonatomic) NSString *receiveCardLastNo; // @synthesize receiveCardLastNo=_receiveCardLastNo;
@property(retain, nonatomic) NSString *transferAmount; // @synthesize transferAmount=_transferAmount;
@property(retain, nonatomic) NSString *toCardStatus; // @synthesize toCardStatus=_toCardStatus;
@property(retain, nonatomic) NSString *transferStatus; // @synthesize transferStatus=_transferStatus;
@property(retain, nonatomic) NSString *gmtSuccess; // @synthesize gmtSuccess=_gmtSuccess;
@property(retain, nonatomic) NSString *gmtPay; // @synthesize gmtPay=_gmtPay;
@property(retain, nonatomic) NSString *gmtCreate; // @synthesize gmtCreate=_gmtCreate;
- (void).cxx_destruct;

@end

