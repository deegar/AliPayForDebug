//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class AIXTrainConfig, NSArray, NSString;

@protocol AIXTranTaskProtocol <NSObject>
- (NSArray *)sampleDataCheck;
- (NSString *)hardWareConditionCheck;
- (_Bool)excuteStateConditionCheck;
- (_Bool)dateConditionCheck;
- (id)initWithConfig:(AIXTrainConfig *)arg1;

@optional
- (void)afterTrainOpration;
@end

