//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GIFTPRODCommonResult.h"

@class GIFTPRODGiftCrowdFlowViewInfo, GIFTPRODGiftCrowdViewInfo, GIFTPRODMessageCardInfo, GIFTPRODSnsShareInfo, NSArray, NSDictionary, NSString, giftprodPollingStrategyVo;

@interface GIFTPRODGiftCrowdDetailResult : GIFTPRODCommonResult
{
    _Bool _received;
    _Bool _guessResult;
    _Bool _needRealName;
    _Bool _needCertify;
    _Bool _hasNextPage;
    _Bool _needWriteMessage;
    _Bool _asyncRec;
    GIFTPRODGiftCrowdViewInfo *_giftCrowdInfo;
    GIFTPRODGiftCrowdFlowViewInfo *_giftCrowdFlowInfo;
    NSArray *_giftCrowdFlowInfoList;
    NSArray *_amount;
    GIFTPRODSnsShareInfo *_snsShareInfo;
    NSDictionary *_extInfo;
    GIFTPRODMessageCardInfo *_messageCardInfo;
    NSString *_mockMessage;
    giftprodPollingStrategyVo *_pollingStrategyVo;
}

+ (Class)extInfoElementClass;
+ (Class)amountElementClass;
+ (Class)giftCrowdFlowInfoListElementClass;
@property(retain, nonatomic) giftprodPollingStrategyVo *pollingStrategyVo; // @synthesize pollingStrategyVo=_pollingStrategyVo;
@property(nonatomic) _Bool asyncRec; // @synthesize asyncRec=_asyncRec;
@property(retain, nonatomic) NSString *mockMessage; // @synthesize mockMessage=_mockMessage;
@property(retain, nonatomic) GIFTPRODMessageCardInfo *messageCardInfo; // @synthesize messageCardInfo=_messageCardInfo;
@property(nonatomic) _Bool needWriteMessage; // @synthesize needWriteMessage=_needWriteMessage;
@property(retain, nonatomic) NSDictionary *extInfo; // @synthesize extInfo=_extInfo;
@property(nonatomic) _Bool hasNextPage; // @synthesize hasNextPage=_hasNextPage;
@property(retain, nonatomic) GIFTPRODSnsShareInfo *snsShareInfo; // @synthesize snsShareInfo=_snsShareInfo;
@property(nonatomic) _Bool needCertify; // @synthesize needCertify=_needCertify;
@property(nonatomic) _Bool needRealName; // @synthesize needRealName=_needRealName;
@property(nonatomic) _Bool guessResult; // @synthesize guessResult=_guessResult;
@property(nonatomic) _Bool received; // @synthesize received=_received;
@property(retain, nonatomic) NSArray *amount; // @synthesize amount=_amount;
@property(retain, nonatomic) NSArray *giftCrowdFlowInfoList; // @synthesize giftCrowdFlowInfoList=_giftCrowdFlowInfoList;
@property(retain, nonatomic) GIFTPRODGiftCrowdFlowViewInfo *giftCrowdFlowInfo; // @synthesize giftCrowdFlowInfo=_giftCrowdFlowInfo;
@property(retain, nonatomic) GIFTPRODGiftCrowdViewInfo *giftCrowdInfo; // @synthesize giftCrowdInfo=_giftCrowdInfo;
- (void).cxx_destruct;

@end

