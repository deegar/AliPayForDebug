//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AUGToString.h"

@class NSDictionary, NSString;

@interface AUGUnifyLoginRes : AUGToString
{
    _Bool _success;
    _Bool _canMsgLogin;
    NSString *_code;
    NSString *_msg;
    NSString *_token;
    NSString *_signData;
    NSString *_ssoToken;
    NSString *_scene;
    long long _hid;
    NSString *_userId;
    long long _taobaoUserId;
    NSString *_headImg;
    NSString *_alipayLoginId;
    NSString *_tbLoginId;
    NSString *_data;
    NSString *_h5Url;
    NSString *_checkCodeId;
    NSString *_checkCodeUrl;
    NSString *_mobileNo;
    NSDictionary *_extMap;
    NSDictionary *_httpHeaderFields;
    NSString *_securityid;
    NSString *_upGlobal;
}

+ (Class)extMapElementClass;
@property(retain, nonatomic) NSString *upGlobal; // @synthesize upGlobal=_upGlobal;
@property(retain, nonatomic) NSString *securityid; // @synthesize securityid=_securityid;
@property(retain, nonatomic) NSDictionary *httpHeaderFields; // @synthesize httpHeaderFields=_httpHeaderFields;
@property(retain, nonatomic) NSDictionary *extMap; // @synthesize extMap=_extMap;
@property(nonatomic) _Bool canMsgLogin; // @synthesize canMsgLogin=_canMsgLogin;
@property(retain, nonatomic) NSString *mobileNo; // @synthesize mobileNo=_mobileNo;
@property(retain, nonatomic) NSString *checkCodeUrl; // @synthesize checkCodeUrl=_checkCodeUrl;
@property(retain, nonatomic) NSString *checkCodeId; // @synthesize checkCodeId=_checkCodeId;
@property(retain, nonatomic) NSString *h5Url; // @synthesize h5Url=_h5Url;
@property(retain, nonatomic) NSString *data; // @synthesize data=_data;
@property(retain, nonatomic) NSString *tbLoginId; // @synthesize tbLoginId=_tbLoginId;
@property(retain, nonatomic) NSString *alipayLoginId; // @synthesize alipayLoginId=_alipayLoginId;
@property(retain, nonatomic) NSString *headImg; // @synthesize headImg=_headImg;
@property(nonatomic) long long taobaoUserId; // @synthesize taobaoUserId=_taobaoUserId;
@property(retain, nonatomic) NSString *userId; // @synthesize userId=_userId;
@property(nonatomic) long long hid; // @synthesize hid=_hid;
@property(retain, nonatomic) NSString *scene; // @synthesize scene=_scene;
@property(retain, nonatomic) NSString *ssoToken; // @synthesize ssoToken=_ssoToken;
@property(retain, nonatomic) NSString *signData; // @synthesize signData=_signData;
@property(retain, nonatomic) NSString *token; // @synthesize token=_token;
@property(retain, nonatomic) NSString *msg; // @synthesize msg=_msg;
@property(retain, nonatomic) NSString *code; // @synthesize code=_code;
@property(nonatomic) _Bool success; // @synthesize success=_success;
- (void).cxx_destruct;
- (id)initWithDict:(id)arg1;

@end
