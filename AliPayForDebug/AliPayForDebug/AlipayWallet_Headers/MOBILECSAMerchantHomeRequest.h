//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MOBILECSABaseRpcRequest.h"

@class NSDictionary, NSString;

@interface MOBILECSAMerchantHomeRequest : MOBILECSABaseRpcRequest
{
    NSString *_shopId;
    NSString *_itemId;
    NSString *_searchItemId;
    NSString *_templateParams;
    NSString *_clientVersion;
    NSString *_buryPointJsonString;
    NSString *_from;
    NSString *_shareVerion;
    NSString *_tplVersion;
    NSString *_dtLogMonitor;
    NSString *_koubeiUserProtocol;
    NSString *_tableNo;
    NSString *_code;
    NSString *_bizScene;
    NSString *_srcFrom;
    NSDictionary *_ext;
    NSString *_extLog;
}

+ (Class)extElementClass;
@property(retain, nonatomic) NSString *extLog; // @synthesize extLog=_extLog;
@property(retain, nonatomic) NSDictionary *ext; // @synthesize ext=_ext;
@property(retain, nonatomic) NSString *srcFrom; // @synthesize srcFrom=_srcFrom;
@property(retain, nonatomic) NSString *bizScene; // @synthesize bizScene=_bizScene;
@property(retain, nonatomic) NSString *code; // @synthesize code=_code;
@property(retain, nonatomic) NSString *tableNo; // @synthesize tableNo=_tableNo;
@property(retain, nonatomic) NSString *koubeiUserProtocol; // @synthesize koubeiUserProtocol=_koubeiUserProtocol;
@property(retain, nonatomic) NSString *dtLogMonitor; // @synthesize dtLogMonitor=_dtLogMonitor;
@property(retain, nonatomic) NSString *tplVersion; // @synthesize tplVersion=_tplVersion;
@property(retain, nonatomic) NSString *shareVerion; // @synthesize shareVerion=_shareVerion;
@property(retain, nonatomic) NSString *from; // @synthesize from=_from;
@property(retain, nonatomic) NSString *buryPointJsonString; // @synthesize buryPointJsonString=_buryPointJsonString;
@property(retain, nonatomic) NSString *clientVersion; // @synthesize clientVersion=_clientVersion;
@property(retain, nonatomic) NSString *templateParams; // @synthesize templateParams=_templateParams;
@property(retain, nonatomic) NSString *searchItemId; // @synthesize searchItemId=_searchItemId;
@property(retain, nonatomic) NSString *itemId; // @synthesize itemId=_itemId;
@property(retain, nonatomic) NSString *shopId; // @synthesize shopId=_shopId;
- (void).cxx_destruct;

@end

