//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSData, NSDictionary, NSURL, TBSDKConnection;

@protocol TBSDKConnectionDelegate <NSObject>

@optional
- (void)request:(TBSDKConnection *)arg1 fullTraceData:(NSDictionary *)arg2;
- (void)proxyAuthenticationNeededForRequest:(TBSDKConnection *)arg1;
- (void)authenticationNeededForRequest:(TBSDKConnection *)arg1;
- (void)request:(TBSDKConnection *)arg1 didReceiveData:(NSData *)arg2;
- (void)requestRedirected:(TBSDKConnection *)arg1;
- (void)requestFailed:(TBSDKConnection *)arg1;
- (void)requestNetworkDataSet:(NSDictionary *)arg1 withFinishedTime:(double)arg2;
- (void)requestFinished:(TBSDKConnection *)arg1;
- (void)request:(TBSDKConnection *)arg1 willRedirectToURL:(NSURL *)arg2;
- (void)request:(TBSDKConnection *)arg1 didReceiveResponseHeaders:(NSDictionary *)arg2;
- (void)requestStarted:(TBSDKConnection *)arg1;
@end

