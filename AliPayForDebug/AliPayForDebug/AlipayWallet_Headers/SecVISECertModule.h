//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "VIModule.h"

@class NSString;

@interface SecVISECertModule : VIModule
{
    NSString *_companyID;
    NSString *_certCmd;
    NSString *_certPin;
    NSString *_cert;
    NSString *_certSn;
    NSString *_dn;
    NSString *_challengeCode;
    NSString *_transData;
    NSString *_signature;
}

+ (id)moduleDataInfo:(id)arg1;
@property(copy, nonatomic) NSString *signature; // @synthesize signature=_signature;
@property(copy, nonatomic) NSString *transData; // @synthesize transData=_transData;
@property(copy, nonatomic) NSString *challengeCode; // @synthesize challengeCode=_challengeCode;
@property(copy, nonatomic) NSString *dn; // @synthesize dn=_dn;
@property(copy, nonatomic) NSString *certSn; // @synthesize certSn=_certSn;
@property(copy, nonatomic) NSString *cert; // @synthesize cert=_cert;
@property(copy, nonatomic) NSString *certPin; // @synthesize certPin=_certPin;
@property(copy, nonatomic) NSString *certCmd; // @synthesize certCmd=_certCmd;
@property(copy, nonatomic) NSString *companyID; // @synthesize companyID=_companyID;
- (void).cxx_destruct;
- (void)certVerify;
- (void)installCert;
- (void)applyCSR;
- (void)secertModuleLogName:(id)arg1 withParams:(id)arg2 withError:(id)arg3;
- (void)executeWithCmd;
- (void)parseParameter:(id)arg1;
- (void)start;

@end

