//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary, RVRLogContext;

@protocol RVRLogManagerDelegate <NSObject>
- (void)log:(RVRLogContext *)arg1;

@optional
- (void)logWithOptions:(NSDictionary *)arg1 inSession:(id)arg2;
@end

