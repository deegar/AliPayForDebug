//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface UcdpRuleItem : NSObject
{
    NSString *_ruleType;
    NSDictionary *_ruleBizInfo;
}

+ (id)ruleItemsWithRuleItemPBs:(id)arg1;
+ (id)ruleItemWithRuleItemPB:(id)arg1;
@property(copy, nonatomic) NSDictionary *ruleBizInfo; // @synthesize ruleBizInfo=_ruleBizInfo;
@property(copy, nonatomic) NSString *ruleType; // @synthesize ruleType=_ruleType;
- (void).cxx_destruct;
- (id)description;

@end

