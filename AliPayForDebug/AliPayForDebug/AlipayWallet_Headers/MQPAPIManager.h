//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MQPHTTPClient, MQPPaySession, NSString;

@interface MQPAPIManager : NSObject
{
    MQPPaySession *_paySession;
    MQPHTTPClient *_httpClient;
}

+ (id)unknownRequestTypeError:(id)arg1;
+ (id)opQueue;
+ (id)sharedManager;
+ (id)alloc;
@property(readonly, nonatomic) MQPHTTPClient *httpClient; // @synthesize httpClient=_httpClient;
@property(nonatomic) __weak MQPPaySession *paySession; // @synthesize paySession=_paySession;
- (void).cxx_destruct;
- (_Bool)needRecordHost:(id)arg1;
- (void)sendRequest:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)sendMspInfoWithParams:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)genTid:(CDUnknownBlockType)arg1;
- (void)sendLogData:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)sendHTTPRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)bytesRequestWithModel:(id)arg1;
- (id)mspRequestWithModel:(id)arg1;
@property(copy, nonatomic) NSString *logUrl; // @dynamic logUrl;
@property(copy, nonatomic) NSString *bizUrl; // @dynamic bizUrl;
- (void)checkNormalRequestParamsWithAPIVersion:(id)arg1 Header:(id)arg2 body:(id)arg3;
- (void)checkFirstRequestParamsWithAPIVersion:(id)arg1 Header:(id)arg2 body:(id)arg3;
- (void)checkIfNeedTrackWithHTTPRequestModel:(id)arg1;
- (void)processResponse:(id)arg1;
- (void)parseMspParam:(id)arg1;
- (void)processHeader:(id)arg1;

@end

