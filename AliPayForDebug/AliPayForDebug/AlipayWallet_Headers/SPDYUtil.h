//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface SPDYUtil : NSObject
{
}

+ (void)setH5AliSafeProxyList:(id)arg1;
+ (void)setH5AliSafeBlackList:(id)arg1;
+ (void)setH5ProxyList:(id)arg1;
+ (void)setH5BlackList:(id)arg1;
+ (void)setSpdyAddContentLength:(int)arg1;
+ (int)spdyAddContentLength;
+ (long long)spdyUseAPLog;
+ (long long)spdyLogLevel;
+ (_Bool)AMNetSwitch;
+ (id)SPDYURLString;
+ (id)SPDYURL;
+ (void)TCPChannelOpen:(_Bool)arg1;
+ (void)SPDYProxyWIFIOpen:(_Bool)arg1;
+ (void)SPDYProxyHttpsOpen:(_Bool)arg1;
+ (void)SPDYProxyOpen:(_Bool)arg1;
+ (void)ATLSOpen:(_Bool)arg1;
+ (void)DNSOpen:(_Bool)arg1;
+ (void)SPDYOpen:(_Bool)arg1;
+ (_Bool)isTCPChannelOpen;
+ (_Bool)isSPDYProxyWIFIOpen;
+ (_Bool)isSPDYProxyHttpsOpen;
+ (_Bool)isSPDYProxyOpen;
+ (_Bool)isATLSOpen;
+ (_Bool)isDNSOpen;
+ (_Bool)isSPDYOpen;
+ (void)setSPDYHeaderUtf8Switch:(_Bool)arg1;
+ (_Bool)SPDYHeaderUtf8;
+ (void)setSPDYUAEncodeSwitch:(_Bool)arg1;
+ (void)setSPDYUseProxyHeadSwitch:(_Bool)arg1;
+ (_Bool)SPDYUseProxyHeadSwitch;
+ (void)setSPDYProxyFullUrlSwitch:(_Bool)arg1;
+ (_Bool)SPDYProxyFullUrlSwitch;
+ (void)setSPDYLargeHeadSwitch:(_Bool)arg1;
+ (_Bool)SPDYLargeHeadSwitch;
+ (long long)SPDYBgLiveTime;
+ (void)setSPDYBgLiveTime:(long long)arg1;
+ (_Bool)SPDYBgLiveSwitch;
+ (void)setSPDYBgLiveSwitch:(_Bool)arg1;
+ (void)initialize;

@end

