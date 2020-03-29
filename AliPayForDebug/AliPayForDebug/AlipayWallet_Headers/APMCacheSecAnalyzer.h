//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "APMConfigUpdateProtocol-Protocol.h"

@class NSString;
@protocol OS_dispatch_queue;

@interface APMCacheSecAnalyzer : NSObject <APMConfigUpdateProtocol>
{
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void).cxx_destruct;
- (id)excFlagKeyWithConfig:(id)arg1;
- (_Bool)hasExcWithConfig:(id)arg1;
- (void)setExcFlagWithConfig:(id)arg1;
- (void)secAnalyzeCacheItems:(id)arg1 withRules:(id)arg2;
- (id)queryCacheItemssWithFileLengths:(id)arg1;
- (id)fileLengthsFromConfig:(id)arg1;
- (void)configDidUpdate:(id)arg1 key:(id)arg2;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

