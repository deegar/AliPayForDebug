//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class APMBeautyManager, NSDictionary;

@protocol APMBeautyManagerDelegate <NSObject>
- (void)beautyManager:(APMBeautyManager *)arg1 texture:(unsigned int)arg2 renderinfo:(NSDictionary *)arg3 time:(CDStruct_1b6d18a9)arg4;

@optional
- (void)beautyManager:(APMBeautyManager *)arg1 performance:(double)arg2;
@end

