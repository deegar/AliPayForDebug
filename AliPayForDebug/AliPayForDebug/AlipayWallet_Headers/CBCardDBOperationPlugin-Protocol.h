//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SocialPlugin-Protocol.h"

@class CSNewsfeedRespVO, NSArray, NSDictionary;

@protocol CBCardDBOperationPlugin <SocialPlugin>

@optional
- (void)sendingStatusChanged:(NSDictionary *)arg1 callback:(void (^)(long long, id, long long))arg2;
- (void)shareCard:(CSNewsfeedRespVO *)arg1 callback:(void (^)(long long, id))arg2;
- (void)deleteCardWithClientIdList:(NSArray *)arg1 notification:(_Bool)arg2 needSync:(_Bool)arg3;
@end

