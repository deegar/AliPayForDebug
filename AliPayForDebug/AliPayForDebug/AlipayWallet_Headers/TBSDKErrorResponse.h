//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "TBSDKErrorRule-Protocol.h"

@class NSDictionary, NSError, NSString;

@interface TBSDKErrorResponse : NSObject <TBSDKErrorRule>
{
    NSString *_errorCode;
    NSString *_msg;
    NSString *_sub_code;
    NSString *_sub_msg;
    NSDictionary *_args;
    NSDictionary *_raw;
    NSString *_errorLocation;
    NSError *_error;
    NSString *_mappingCode;
    NSError *_uikitError;
    NSString *_limitFlowRawCode;
}

+ (id)modelWithJSON:(id)arg1;
@property(copy, nonatomic) NSString *limitFlowRawCode; // @synthesize limitFlowRawCode=_limitFlowRawCode;
@property(retain, nonatomic) NSError *uikitError; // @synthesize uikitError=_uikitError;
@property(copy, nonatomic) NSString *mappingCode; // @synthesize mappingCode=_mappingCode;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(copy, nonatomic) NSString *errorLocation; // @synthesize errorLocation=_errorLocation;
@property(retain, nonatomic) NSDictionary *raw; // @synthesize raw=_raw;
@property(retain, nonatomic) NSDictionary *args; // @synthesize args=_args;
@property(copy, nonatomic) NSString *sub_msg; // @synthesize sub_msg=_sub_msg;
@property(copy, nonatomic) NSString *sub_code; // @synthesize sub_code=_sub_code;
@property(copy, nonatomic) NSString *msg; // @synthesize msg=_msg;
@property(copy, nonatomic) NSString *errorCode; // @synthesize errorCode=_errorCode;
- (void).cxx_destruct;
- (_Bool)isResponseDataUnknowTypeError;
- (_Bool)isResponseDataIsHtmlOrScriptError;
- (_Bool)isResponseDataParseError;
- (_Bool)isAuthenticationError;
- (_Bool)isAuthRejectError;
- (_Bool)isInvalidSIDError;
- (_Bool)isMTOPAuthenticationError;
- (_Bool)isTopAuthenticationError;
- (_Bool)isNetWorkError;
@property(readonly, copy) NSString *description;
- (id)initWithDictionary:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

