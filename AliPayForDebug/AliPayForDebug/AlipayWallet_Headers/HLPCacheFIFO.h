//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class HLPCacheResponseInfo, NSMutableArray, NSMutableDictionary;

@interface HLPCacheFIFO : NSObject
{
    NSMutableArray *_fifoArray;
    NSMutableDictionary *_fifoDic;
    long long _maxQueue;
    HLPCacheResponseInfo *_leastResponseInfo;
}

@property(retain, nonatomic) HLPCacheResponseInfo *leastResponseInfo; // @synthesize leastResponseInfo=_leastResponseInfo;
@property(nonatomic) long long maxQueue; // @synthesize maxQueue=_maxQueue;
@property(retain, nonatomic) NSMutableDictionary *fifoDic; // @synthesize fifoDic=_fifoDic;
@property(retain, nonatomic) NSMutableArray *fifoArray; // @synthesize fifoArray=_fifoArray;
- (void).cxx_destruct;
- (void)clearAll;
- (void)clear;
- (void)removeObjectWithKey:(id)arg1;
- (id)queryObjectWithKey:(id)arg1;
- (void)addObject:(id)arg1 withKey:(id)arg2;
@property(readonly, nonatomic) long long cacheCount;
- (id)initWithQueueCount:(long long)arg1;

@end

