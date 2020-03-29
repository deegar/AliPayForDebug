//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class BisBehavLog, NSDictionary;

@interface APBToygerBehavlogManager : NSObject <NSCopying>
{
    NSDictionary *_config;
    BisBehavLog *_behavLog;
}

@property(retain, nonatomic) BisBehavLog *behavLog; // @synthesize behavLog=_behavLog;
@property(retain, nonatomic) NSDictionary *config; // @synthesize config=_config;
- (void).cxx_destruct;
- (id)currentTime;
- (id)buildCommon;
- (id)buildToken;
- (id)buildClientInfo;
- (id)generateLogWithInvokeType:(id)arg1 withRetry:(long long)arg2;
- (void)clearTask;
- (void)addTask:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithConfig:(id)arg1;

@end

