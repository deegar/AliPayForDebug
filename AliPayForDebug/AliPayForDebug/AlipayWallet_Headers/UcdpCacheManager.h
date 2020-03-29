//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class APLRUMemoryCache;

@interface UcdpCacheManager : NSObject
{
    APLRUMemoryCache *_positionCache;
    APLRUMemoryCache *_fatigueCache;
}

+ (id)sharedManager;
@property(retain, nonatomic) APLRUMemoryCache *fatigueCache; // @synthesize fatigueCache=_fatigueCache;
@property(retain, nonatomic) APLRUMemoryCache *positionCache; // @synthesize positionCache=_positionCache;
- (void).cxx_destruct;
- (void)removeAllFatigueRules;
- (void)removeFatigueRules:(id)arg1;
- (void)removeFatigueRule:(id)arg1;
- (id)getFatigueRules:(id)arg1;
- (id)getFatigueRule:(id)arg1;
- (void)setFatigueRules:(id)arg1;
- (void)setFatigueRule:(id)arg1;
- (void)removeAllPositionBodys;
- (void)removePositionBodys:(id)arg1;
- (void)removePositionBody:(id)arg1;
- (id)getPositionBodys:(id)arg1;
- (id)getPositionBody:(id)arg1;
- (void)setPositionBodys:(id)arg1;
- (void)setPositionBody:(id)arg1;
- (id)fatigueRuleListCache;
- (id)positionListCache;
- (id)init;

@end

