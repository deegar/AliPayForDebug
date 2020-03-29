//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber;

@interface UTReportDataSet : NSObject
{
    int _cacheTotalTimes;
    int _cacheReadTotalDates;
    int _cacheReadTotalTimes;
    int _cacheWriteTotalDates;
    int _cacheWriteTotalTimes;
    int _cacheWriteTotalContentLength;
    NSNumber *_spdyTotalTimes;
    NSNumber *_spdyTotaldates;
    NSNumber *_spdyTotalContentLength;
    NSNumber *_httpTotalTimes;
    NSNumber *_httpTotalDates;
    NSNumber *_httpTotalContentLength;
}

+ (id)shareInstance;
@property(nonatomic) int cacheWriteTotalContentLength; // @synthesize cacheWriteTotalContentLength=_cacheWriteTotalContentLength;
@property(nonatomic) int cacheWriteTotalTimes; // @synthesize cacheWriteTotalTimes=_cacheWriteTotalTimes;
@property(nonatomic) int cacheWriteTotalDates; // @synthesize cacheWriteTotalDates=_cacheWriteTotalDates;
@property(nonatomic) int cacheReadTotalTimes; // @synthesize cacheReadTotalTimes=_cacheReadTotalTimes;
@property(nonatomic) int cacheReadTotalDates; // @synthesize cacheReadTotalDates=_cacheReadTotalDates;
@property(nonatomic) int cacheTotalTimes; // @synthesize cacheTotalTimes=_cacheTotalTimes;
@property(copy, nonatomic) NSNumber *httpTotalContentLength; // @synthesize httpTotalContentLength=_httpTotalContentLength;
@property(copy, nonatomic) NSNumber *httpTotalDates; // @synthesize httpTotalDates=_httpTotalDates;
@property(copy, nonatomic) NSNumber *httpTotalTimes; // @synthesize httpTotalTimes=_httpTotalTimes;
@property(copy, nonatomic) NSNumber *spdyTotalContentLength; // @synthesize spdyTotalContentLength=_spdyTotalContentLength;
@property(copy, nonatomic) NSNumber *spdyTotaldates; // @synthesize spdyTotaldates=_spdyTotaldates;
@property(copy, nonatomic) NSNumber *spdyTotalTimes; // @synthesize spdyTotalTimes=_spdyTotalTimes;
- (void).cxx_destruct;
- (void)cleanAll;
- (int)getTotalContantLength;
- (double)getTotalDates;
- (int)getTotalTimes;
- (void)incrementCacheWrite:(id)arg1 withCacheSize:(long long)arg2;
- (void)incrementCacheHitTimes:(id)arg1;
- (void)incrementCacheTimes;
- (void)incrementTcpLinks:(id)arg1;
- (void)saveSPDYTotalData:(long long)arg1 withTotalDate:(id)arg2 withTotalContentLength:(id)arg3;
- (void)saveHttpTotalData:(long long)arg1 withTotalDate:(id)arg2 withTotalContentLength:(id)arg3;
- (long long)getTcpLinkDates;
- (long long)getTcpLinkTimes;

@end

