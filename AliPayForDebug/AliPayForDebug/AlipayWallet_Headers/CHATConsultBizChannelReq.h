//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CHATBaseReqVO.h"

@class NSString;

@interface CHATConsultBizChannelReq : CHATBaseReqVO
{
    NSString *_productName;
    NSString *_productSubName;
    NSString *_receiverUserId;
}

@property(retain, nonatomic) NSString *receiverUserId; // @synthesize receiverUserId=_receiverUserId;
@property(retain, nonatomic) NSString *productSubName; // @synthesize productSubName=_productSubName;
@property(retain, nonatomic) NSString *productName; // @synthesize productName=_productName;
- (void).cxx_destruct;

@end

