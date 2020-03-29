//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class JSContext, NSMutableDictionary;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface IDDataCacheManager : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_semaphore> *_lock;
    NSMutableDictionary *_featureResults;
    NSMutableDictionary *_modelDecisionResults;
    JSContext *_jsContext;
}

+ (id)defaultManager;
@property(retain, nonatomic) JSContext *jsContext; // @synthesize jsContext=_jsContext;
@property(retain, nonatomic) NSMutableDictionary *modelDecisionResults; // @synthesize modelDecisionResults=_modelDecisionResults;
@property(retain, nonatomic) NSMutableDictionary *featureResults; // @synthesize featureResults=_featureResults;
- (void).cxx_destruct;
- (id)evaluateJSWithExpresesion:(id)arg1;
- (void)saveFeatureResult:(id)arg1 forKey:(id)arg2;
- (id)featureResultFromCacheOrFileForKey:(id)arg1;
- (id)featureResultForKey:(id)arg1;
- (void)updateFeatureResultsWithValue:(id)arg1 forKey:(id)arg2;
- (void)saveModalResult:(id)arg1 forKey:(id)arg2;
- (id)modalResultForKey:(id)arg1;
- (id)init;

@end

