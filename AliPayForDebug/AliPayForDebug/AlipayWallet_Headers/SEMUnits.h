//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface SEMUnits : NSObject
{
    NSMutableDictionary *_pageSemInfos;
}

+ (void)cleanCacheWithIndex:(id)arg1;
+ (id)hashKey:(id)arg1;
+ (id)pageIdForIndex:(id)arg1;
+ (id)decodeSemString:(id)arg1;
+ (id)encodeSemString:(id)arg1;
+ (id)getLastClickSemInfoWithIndex:(id)arg1;
+ (void)updateLastClickSemInfo:(id)arg1 index:(id)arg2;
+ (id)getSourceSemInfoWithIndex:(id)arg1;
+ (void)updateSourceSemInfo:(id)arg1 index:(id)arg2;
+ (void)updateSourceSemId:(id)arg1 index:(id)arg2;
+ (id)shareInstance;
@property(retain, nonatomic) NSMutableDictionary *pageSemInfos; // @synthesize pageSemInfos=_pageSemInfos;
- (void).cxx_destruct;
- (void)dealloc;

@end

