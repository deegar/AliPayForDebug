//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "O2OLcVideoAccessoryViewDelegate-Protocol.h"

@class NSDictionary, NSString, O2OlcVideoReplyDispatcher;

@protocol O2OlcVideoReplyObserverProtocol <O2OLcVideoAccessoryViewDelegate>

@optional
- (void)replyDispatcher:(O2OlcVideoReplyDispatcher *)arg1 deleteReply:(NSString *)arg2 rootReplyId:(NSString *)arg3;
- (void)replyDispatcher:(O2OlcVideoReplyDispatcher *)arg1 insertNewReply:(NSDictionary *)arg2;
- (void)replyDispatcher:(O2OlcVideoReplyDispatcher *)arg1 updateDraftText:(NSString *)arg2;
- (void)replyDispatcher:(O2OlcVideoReplyDispatcher *)arg1 updateReplyCount:(long long)arg2;
@end

