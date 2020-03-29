//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "UcdpMerging-Protocol.h"

@class NSArray, NSString;

@interface UcdpFatigueRule : NSObject <UcdpMerging>
{
    NSString *_ruleId;
    long long _serverTimestamp;
    NSArray *_fatigueList;
}

+ (id)fatigueRulesWithFatigueRulePBs:(id)arg1;
+ (id)fatigueRuleWithFatigueRulePB:(id)arg1;
+ (id)fatigueRulesDicWithFatigueRules:(id)arg1;
+ (id)mergeOldFatigueRule:(id)arg1 withNewFatigueRule:(id)arg2 context:(id)arg3;
+ (id)mergeOldFatigueRulesDic:(id)arg1 withNewFatigueRulesDic:(id)arg2 ruleIds:(id)arg3 context:(id)arg4;
+ (id)mergeOldFatigueRules:(id)arg1 withNewFatigueRules:(id)arg2 context:(id)arg3;
+ (id)mergeNewFatigueRulePBsAndPersistent:(id)arg1 context:(id)arg2;
@property(copy, nonatomic) NSArray *fatigueList; // @synthesize fatigueList=_fatigueList;
@property(nonatomic) long long serverTimestamp; // @synthesize serverTimestamp=_serverTimestamp;
@property(copy, nonatomic) NSString *ruleId; // @synthesize ruleId=_ruleId;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (_Bool)isValidFatigueRule;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

