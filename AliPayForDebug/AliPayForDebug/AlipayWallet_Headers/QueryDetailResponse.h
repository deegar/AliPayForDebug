//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GWBaseResponse.h"

@class NSArray, NSString, WordGiftInstanceVO;

@interface QueryDetailResponse : GWBaseResponse
{
    NSString *_status;
    WordGiftInstanceVO *_giftInstanceModel;
    NSArray *_giftFlowModels;
    NSString *_organizationLink;
    NSString *_skinId;
    NSString *_refundHour;
    NSString *_dingShareLink;
    NSString *_goldenRecord;
    NSString *_singleGoldenRecord;
    NSString *_flowStatus;
    NSString *_receiverId;
    NSString *_prodCode;
}

+ (Class)giftFlowModelsElementClass;
@property(retain, nonatomic) NSString *prodCode; // @synthesize prodCode=_prodCode;
@property(retain, nonatomic) NSString *receiverId; // @synthesize receiverId=_receiverId;
@property(retain, nonatomic) NSString *flowStatus; // @synthesize flowStatus=_flowStatus;
@property(retain, nonatomic) NSString *singleGoldenRecord; // @synthesize singleGoldenRecord=_singleGoldenRecord;
@property(retain, nonatomic) NSString *goldenRecord; // @synthesize goldenRecord=_goldenRecord;
@property(retain, nonatomic) NSString *dingShareLink; // @synthesize dingShareLink=_dingShareLink;
@property(retain, nonatomic) NSString *refundHour; // @synthesize refundHour=_refundHour;
@property(retain, nonatomic) NSString *skinId; // @synthesize skinId=_skinId;
@property(retain, nonatomic) NSString *organizationLink; // @synthesize organizationLink=_organizationLink;
@property(retain, nonatomic) NSArray *giftFlowModels; // @synthesize giftFlowModels=_giftFlowModels;
@property(retain, nonatomic) WordGiftInstanceVO *giftInstanceModel; // @synthesize giftInstanceModel=_giftInstanceModel;
@property(retain, nonatomic) NSString *status; // @synthesize status=_status;
- (void).cxx_destruct;

@end

