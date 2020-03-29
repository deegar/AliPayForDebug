//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSURLProtocol.h>

#import "AFWStockWebViewURLProtocolDelegate-Protocol.h"
#import "NSURLConnectionDataDelegate-Protocol.h"
#import "NSURLSessionDataDelegate-Protocol.h"
#import "NSURLSessionTaskDelegate-Protocol.h"

@class NSDate, NSMutableURLRequest, NSString, NSURLConnection, NSURLRequest, NSURLResponse, NSURLSessionDataTask, PSDResponse;

@interface AFWStockURLProtocol : NSURLProtocol <NSURLSessionDataDelegate, NSURLSessionTaskDelegate, NSURLConnectionDataDelegate, AFWStockWebViewURLProtocolDelegate>
{
    NSMutableURLRequest *_proxyRequest;
    PSDResponse *_proxyResponse;
    NSURLConnection *_connection;
    NSURLResponse *_response;
    NSURLSessionDataTask *_sessionTask;
    NSDate *_startLoadingDate;
    NSString *_channelId;
    NSString *_originUserAgent;
    NSURLRequest *_lastHSTSRequest;
}

+ (_Bool)isRequestFromAFW:(id)arg1;
+ (_Bool)requestIsCacheEquivalent:(id)arg1 toRequest:(id)arg2;
+ (id)canonicalRequestForRequest:(id)arg1;
+ (_Bool)canInitWithRequest:(id)arg1;
@property(retain, nonatomic) NSURLRequest *lastHSTSRequest; // @synthesize lastHSTSRequest=_lastHSTSRequest;
@property(copy, nonatomic) NSString *originUserAgent; // @synthesize originUserAgent=_originUserAgent;
@property(copy, nonatomic) NSString *channelId; // @synthesize channelId=_channelId;
@property(retain, nonatomic) NSDate *startLoadingDate; // @synthesize startLoadingDate=_startLoadingDate;
@property(retain, nonatomic) NSURLSessionDataTask *sessionTask; // @synthesize sessionTask=_sessionTask;
@property(retain, nonatomic) NSURLResponse *response; // @synthesize response=_response;
@property(retain, nonatomic) NSURLConnection *connection; // @synthesize connection=_connection;
@property(retain, nonatomic) PSDResponse *proxyResponse; // @synthesize proxyResponse=_proxyResponse;
@property(retain, nonatomic) NSMutableURLRequest *proxyRequest; // @synthesize proxyRequest=_proxyRequest;
- (void).cxx_destruct;
- (void)commentCookie:(id)arg1;
- (void)setTimeoutIntervalWithRequest:(id)arg1;
- (_Bool)checkRequestIsEmpty:(id)arg1;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didFinishCollectingMetrics:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didSendBodyData:(long long)arg3 totalBytesSent:(long long)arg4 totalBytesExpectedToSend:(long long)arg5;
- (void)URLSession:(id)arg1 task:(id)arg2 needNewBodyStream:(CDUnknownBlockType)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 willPerformHTTPRedirection:(id)arg3 newRequest:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 willCacheResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didBecomeStreamTask:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didBecomeDownloadTask:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)PSDdidReceiveResponse:(id)arg1 ignoreThread:(_Bool)arg2;
- (void)abUrlMapping:(id)arg1;
- (id)getUrlWithoutScheme:(id)arg1;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)resetRedirectedToRequest:(id)arg1;
- (_Bool)shouldReturnRequest;
- (id)connection:(id)arg1 willSendRequest:(id)arg2 redirectResponse:(id)arg3;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)AFWStockWebViewURLProtocol:(id)arg1 didCancel:(id)arg2;
- (void)AFWStockWebViewURLProtocol:(id)arg1 didFailWithError:(id)arg2;
- (void)AFWStockWebViewURLProtocolDidFinishLoading:(id)arg1;
- (void)AFWStockWebViewURLProtocol:(id)arg1 didLoadData:(id)arg2;
- (void)AFWStockWebViewURLProtocol:(id)arg1 didReceiveResponse:(id)arg2 cacheStoragePolicy:(unsigned long long)arg3;
- (void)AFWStockWebViewURLProtocol:(id)arg1 wasRedirectedToRequest:(id)arg2 redirectResponse:(id)arg3;
- (void)AFWStockWebViewURLProtocol:(id)arg1 startLoading:(id)arg2;
- (id)getTaskWithRequest:(id)arg1;
- (void)stopLoading;
- (void)startLoading;
- (id)channelIdForRequest:(id)arg1;
- (id)request;
- (id)initWithRequest:(id)arg1 cachedResponse:(id)arg2 client:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

