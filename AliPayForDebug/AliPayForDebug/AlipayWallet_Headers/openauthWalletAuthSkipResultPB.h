//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "APDPBGeneratedMessage.h"

@class NSString, authcenterH5AuthParamsPB, openauthWalletAuthContentResultPB, openauthWalletAuthExecuteResultPB;

@interface openauthWalletAuthSkipResultPB : APDPBGeneratedMessage
{
}

+ (CDStruct_af61540b *)_fieldInfos;

// Remaining properties
@property(retain, nonatomic) openauthWalletAuthContentResultPB *authContentResult; // @dynamic authContentResult;
@property(retain, nonatomic) openauthWalletAuthExecuteResultPB *authExecuteResult; // @dynamic authExecuteResult;
@property(nonatomic) _Bool canSkipAuth; // @dynamic canSkipAuth;
@property(retain, nonatomic) NSString *errorCode; // @dynamic errorCode;
@property(retain, nonatomic) NSString *errorMsg; // @dynamic errorMsg;
@property(retain, nonatomic) authcenterH5AuthParamsPB *h5AuthParams; // @dynamic h5AuthParams;
@property(readonly) _Bool hasAuthContentResult; // @dynamic hasAuthContentResult;
@property(readonly) _Bool hasAuthExecuteResult; // @dynamic hasAuthExecuteResult;
@property(readonly) _Bool hasCanSkipAuth; // @dynamic hasCanSkipAuth;
@property(readonly) _Bool hasErrorCode; // @dynamic hasErrorCode;
@property(readonly) _Bool hasErrorMsg; // @dynamic hasErrorMsg;
@property(readonly) _Bool hasH5AuthParams; // @dynamic hasH5AuthParams;
@property(readonly) _Bool hasIsSuccess; // @dynamic hasIsSuccess;
@property(readonly) _Bool hasShowType; // @dynamic hasShowType;
@property(nonatomic) _Bool isSuccess; // @dynamic isSuccess;
@property(retain, nonatomic) NSString *showType; // @dynamic showType;

@end

