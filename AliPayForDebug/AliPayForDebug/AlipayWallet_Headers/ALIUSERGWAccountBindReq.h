//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface ALIUSERGWAccountBindReq : NSObject
{
    _Bool _userConfirm;
    NSString *_bizScene;
    NSString *_sessionId;
    NSString *_signData;
    NSString *_appKey;
    NSString *_appId;
    NSString *_destAccount;
    NSString *_pwd;
    NSString *_imei;
    NSString *_imsi;
    NSString *_token;
}

@property(retain, nonatomic) NSString *token; // @synthesize token=_token;
@property(retain, nonatomic) NSString *imsi; // @synthesize imsi=_imsi;
@property(retain, nonatomic) NSString *imei; // @synthesize imei=_imei;
@property(retain, nonatomic) NSString *pwd; // @synthesize pwd=_pwd;
@property(retain, nonatomic) NSString *destAccount; // @synthesize destAccount=_destAccount;
@property(retain, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(retain, nonatomic) NSString *appKey; // @synthesize appKey=_appKey;
@property(retain, nonatomic) NSString *signData; // @synthesize signData=_signData;
@property(nonatomic) _Bool userConfirm; // @synthesize userConfirm=_userConfirm;
@property(retain, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
@property(retain, nonatomic) NSString *bizScene; // @synthesize bizScene=_bizScene;
- (void).cxx_destruct;

@end

