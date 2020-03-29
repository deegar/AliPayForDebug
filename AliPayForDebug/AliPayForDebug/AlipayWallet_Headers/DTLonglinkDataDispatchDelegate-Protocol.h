//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSError;

@protocol DTLonglinkDataDispatchDelegate <NSObject>
- (_Bool)isSpdy;
- (void)closeAndActive;
- (void)startLongLinkLimitFlowFinish;
- (void)limitFlowWithClose;
- (void)closeWithTimeOut;
- (void)willDisconnectWithError:(NSError *)arg1;
- (void)acitveInitResponse;
- (void)spdyAckResponse;
- (void)startHeartWithSocket;
- (void)readDataWithTimeout:(double)arg1 tag:(long long)arg2;
- (void)writeData:(id)arg1 withTimeout:(double)arg2 tag:(long long)arg3 needResponse:(_Bool)arg4;
@end

