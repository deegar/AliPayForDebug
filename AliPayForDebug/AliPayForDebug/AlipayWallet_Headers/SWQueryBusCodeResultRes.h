//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, SWBusCodeBaseRPCResponseInfo;

@interface SWQueryBusCodeResultRes : NSObject
{
    NSString *_cardType;
    NSString *_pageType;
    NSString *_title;
    NSString *_bizNo;
    NSString *_stationName;
    NSString *_desc;
    NSString *_paidAmount;
    NSString *_discountAmount;
    NSString *_startStation;
    NSString *_endStation;
    NSString *_errorCode;
    NSString *_tips;
    SWBusCodeBaseRPCResponseInfo *_baseRPCResponseInfo;
}

@property(retain, nonatomic) SWBusCodeBaseRPCResponseInfo *baseRPCResponseInfo; // @synthesize baseRPCResponseInfo=_baseRPCResponseInfo;
@property(retain, nonatomic) NSString *tips; // @synthesize tips=_tips;
@property(retain, nonatomic) NSString *errorCode; // @synthesize errorCode=_errorCode;
@property(retain, nonatomic) NSString *endStation; // @synthesize endStation=_endStation;
@property(retain, nonatomic) NSString *startStation; // @synthesize startStation=_startStation;
@property(retain, nonatomic) NSString *discountAmount; // @synthesize discountAmount=_discountAmount;
@property(retain, nonatomic) NSString *paidAmount; // @synthesize paidAmount=_paidAmount;
@property(retain, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(retain, nonatomic) NSString *stationName; // @synthesize stationName=_stationName;
@property(retain, nonatomic) NSString *bizNo; // @synthesize bizNo=_bizNo;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *pageType; // @synthesize pageType=_pageType;
@property(retain, nonatomic) NSString *cardType; // @synthesize cardType=_cardType;
- (void).cxx_destruct;

@end

