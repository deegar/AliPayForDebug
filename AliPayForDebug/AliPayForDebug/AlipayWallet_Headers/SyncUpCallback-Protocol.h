//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, SyncUpCallbackInfo;

@protocol SyncUpCallback <NSObject>
- (void)sendResultBizInfo:(SyncUpCallbackInfo *)arg1 syncUpState:(long long)arg2;
- (void)sendResultBiz:(NSString *)arg1 msgID:(NSString *)arg2 syncUpState:(long long)arg3;
@end

