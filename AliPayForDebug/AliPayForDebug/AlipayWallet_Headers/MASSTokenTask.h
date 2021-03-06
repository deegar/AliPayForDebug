//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MASSStreamUnit.h"

@class ConnectTimer, DataResponseTimer, NSData, NSMutableData, NSString, TokenRequestTimer;

@interface MASSTokenTask : MASSStreamUnit
{
    _Bool _started;
    _Bool _needCrypto;
    ConnectTimer *_connecttimer;
    DataResponseTimer *_rspTimer;
    TokenRequestTimer *_requestTimer;
    NSData *_tcpToSendData;
    long long _tcpSended;
    NSMutableData *_tcpRspData;
    NSString *_serverAddress;
}

@property(nonatomic) _Bool needCrypto; // @synthesize needCrypto=_needCrypto;
@property(retain, nonatomic) NSString *serverAddress; // @synthesize serverAddress=_serverAddress;
@property _Bool started; // @synthesize started=_started;
@property(retain, nonatomic) NSMutableData *tcpRspData; // @synthesize tcpRspData=_tcpRspData;
@property(nonatomic) long long tcpSended; // @synthesize tcpSended=_tcpSended;
@property(retain, nonatomic) NSData *tcpToSendData; // @synthesize tcpToSendData=_tcpToSendData;
@property(retain, nonatomic) TokenRequestTimer *requestTimer; // @synthesize requestTimer=_requestTimer;
@property(retain, nonatomic) DataResponseTimer *rspTimer; // @synthesize rspTimer=_rspTimer;
@property(retain, nonatomic) ConnectTimer *connecttimer; // @synthesize connecttimer=_connecttimer;
- (void).cxx_destruct;
- (id)toString;
- (void)noticeTokenRefresh:(id)arg1 serverCurrentTime:(long long)arg2 tokenExpireTime:(long long)arg3;
- (void)clearForNewRequest;
- (void)dealTcpRspData;
- (void)fillHttpRequestTcpData;
- (void)onDataComming;
- (void)onCloseHappens;
- (void)onDataCanSending;
- (void)onConnectComplate;
- (void)startRequest;
- (void)setIsStarted:(id)arg1;
- (void)performStartAfter:(double)arg1;
- (id)init;

@end

