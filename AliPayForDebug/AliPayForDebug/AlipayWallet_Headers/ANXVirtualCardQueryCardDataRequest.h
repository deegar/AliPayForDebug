//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ANXAlipayInsideRPCRequestInfo, ANXBaseRPCRequestInfo, NSDictionary, NSString;

@interface ANXVirtualCardQueryCardDataRequest : NSObject
{
    _Bool _syncQuery;
    _Bool _supportOfflineCrypto;
    ANXBaseRPCRequestInfo *_baseRPCRequestInfo;
    ANXAlipayInsideRPCRequestInfo *_alipayInsideRPCRequestInfo;
    NSString *_bizId;
    NSString *_sceneCode;
    NSString *_subSceneCode;
    NSString *_cardType;
    NSString *_cardNo;
    NSString *_source;
    NSString *_channelType;
    NSString *_clientGencodeSDKVersion;
    NSDictionary *_selectedTicketType;
    NSDictionary *_selectedSeatClass;
}

@property(retain, nonatomic) NSDictionary *selectedSeatClass; // @synthesize selectedSeatClass=_selectedSeatClass;
@property(retain, nonatomic) NSDictionary *selectedTicketType; // @synthesize selectedTicketType=_selectedTicketType;
@property(retain, nonatomic) NSString *clientGencodeSDKVersion; // @synthesize clientGencodeSDKVersion=_clientGencodeSDKVersion;
@property(nonatomic) _Bool supportOfflineCrypto; // @synthesize supportOfflineCrypto=_supportOfflineCrypto;
@property(nonatomic) _Bool syncQuery; // @synthesize syncQuery=_syncQuery;
@property(retain, nonatomic) NSString *channelType; // @synthesize channelType=_channelType;
@property(retain, nonatomic) NSString *source; // @synthesize source=_source;
@property(retain, nonatomic) NSString *cardNo; // @synthesize cardNo=_cardNo;
@property(retain, nonatomic) NSString *cardType; // @synthesize cardType=_cardType;
@property(retain, nonatomic) NSString *subSceneCode; // @synthesize subSceneCode=_subSceneCode;
@property(retain, nonatomic) NSString *sceneCode; // @synthesize sceneCode=_sceneCode;
@property(retain, nonatomic) NSString *bizId; // @synthesize bizId=_bizId;
@property(retain, nonatomic) ANXAlipayInsideRPCRequestInfo *alipayInsideRPCRequestInfo; // @synthesize alipayInsideRPCRequestInfo=_alipayInsideRPCRequestInfo;
@property(retain, nonatomic) ANXBaseRPCRequestInfo *baseRPCRequestInfo; // @synthesize baseRPCRequestInfo=_baseRPCRequestInfo;
- (void).cxx_destruct;

@end
