//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class DTRpcException, NSDictionary, NSIndexPath;

@protocol BLHomeListDataManagerDelegate <NSObject>

@optional
- (void)changeSumDidFinish;
- (void)deleteDataDidFinished:(_Bool)arg1 indexPath:(NSIndexPath *)arg2;
- (void)changeDataDidFinishedByCache;
- (void)handleException:(DTRpcException *)arg1;
- (void)changeDataDidFinishedByRPC:(NSDictionary *)arg1;
- (void)hideLoading;
- (void)showLoading;
@end

