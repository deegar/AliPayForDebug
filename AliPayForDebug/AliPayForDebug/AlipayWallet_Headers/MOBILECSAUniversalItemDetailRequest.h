//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MOBILECSABaseRpcRequest.h"

@class NSDictionary, NSString;

@interface MOBILECSAUniversalItemDetailRequest : MOBILECSABaseRpcRequest
{
    NSString *_shopId;
    NSString *_goodsId;
    NSString *_orderNo;
    NSString *_clientVersion;
    NSString *_tplVersion;
    NSString *_templateParams;
    NSString *_dtLogMonitor;
    NSString *_groupOrderId;
    NSDictionary *_extInfo;
}

+ (Class)extInfoElementClass;
@property(retain, nonatomic) NSDictionary *extInfo; // @synthesize extInfo=_extInfo;
@property(retain, nonatomic) NSString *groupOrderId; // @synthesize groupOrderId=_groupOrderId;
@property(retain, nonatomic) NSString *dtLogMonitor; // @synthesize dtLogMonitor=_dtLogMonitor;
@property(retain, nonatomic) NSString *templateParams; // @synthesize templateParams=_templateParams;
@property(retain, nonatomic) NSString *tplVersion; // @synthesize tplVersion=_tplVersion;
@property(retain, nonatomic) NSString *clientVersion; // @synthesize clientVersion=_clientVersion;
@property(retain, nonatomic) NSString *orderNo; // @synthesize orderNo=_orderNo;
@property(retain, nonatomic) NSString *goodsId; // @synthesize goodsId=_goodsId;
@property(retain, nonatomic) NSString *shopId; // @synthesize shopId=_shopId;
- (void).cxx_destruct;

@end

