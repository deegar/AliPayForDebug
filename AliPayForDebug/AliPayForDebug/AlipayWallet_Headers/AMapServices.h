//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_dispatch_queue;

@interface AMapServices : NSObject
{
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    _Bool _enableHTTPS;
    _Bool _crashReportEnabled;
    _Bool _analyticsEnabled;
    NSString *_apiKey;
    long long _authorizationStatus;
    NSString *_authorizationInfo;
}

+ (id)sharedServices;
+ (id)publicPostDataWithComponent:(id)arg1 logVersion:(id)arg2;
+ (id)commonHTTPHeadersWithComponent:(id)arg1 logVersion:(id)arg2 withXinfo:(_Bool)arg3;
+ (id)postRequestHTTPHeadersWithComponent:(id)arg1 logVersion:(id)arg2;
+ (id)commonHTTPHeadersWithComponent:(id)arg1;
+ (id)patchRequestParams;
+ (id)platInfoWithComponent:(id)arg1;
+ (id)responseHeaderWithRestResponse:(id)arg1 response:(id)arg2 request:(id)arg3;
@property(nonatomic) _Bool analyticsEnabled; // @synthesize analyticsEnabled=_analyticsEnabled;
@property(copy, nonatomic) NSString *authorizationInfo; // @synthesize authorizationInfo=_authorizationInfo;
@property long long authorizationStatus; // @synthesize authorizationStatus=_authorizationStatus;
@property(nonatomic) _Bool crashReportEnabled; // @synthesize crashReportEnabled=_crashReportEnabled;
@property(nonatomic) _Bool enableHTTPS; // @synthesize enableHTTPS=_enableHTTPS;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *apiKey; // @synthesize apiKey=_apiKey;
- (void)uploadAnalyticsInfo;
- (void)initAnalytics;
- (void)setUpAnalytics;
- (void)deallocOperation;
- (void)dealloc;
- (void)onNetworkTypeChanged:(id)arg1;
- (id)init;
- (id)keyAuthInfoWithServerInfo:(id)arg1;
- (void)showKeyAuthorizationInfo:(id)arg1 responseHeader:(id)arg2 forComponent:(id)arg3;
- (void)sendStatisticsWithComponent:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)sendAuthRequestWithComponent:(id)arg1 authKeys:(id)arg2 params:(id)arg3 handler:(CDUnknownBlockType)arg4;
- (void)sendAuthRequestWithComponent:(id)arg1 authKeys:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)registerWithComponent:(id)arg1 authKeys:(id)arg2 params:(id)arg3 handler:(CDUnknownBlockType)arg4;
- (void)registerWithComponent:(id)arg1;
- (void)sendInitInfoWithComponent:(id)arg1;
- (void)validatingAPIKey;

@end

