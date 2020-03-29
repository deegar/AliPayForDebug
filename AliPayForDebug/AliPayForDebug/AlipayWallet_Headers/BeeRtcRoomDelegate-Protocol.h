//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSError, NSString;
@protocol BeeRtcRoomInfoProtocol, BeeRtcRoomMessageProtocol, BeeRtcRoomRenderProtocol, BeeRtcRoomStatisticSummaryProtocol;

@protocol BeeRtcRoomDelegate <NSObject>

@optional
- (void)BeeRtcRoomReply:(NSString *)arg1 replyType:(long long)arg2;
- (void)BeeRtcRoomReceiveMessage:(id <BeeRtcRoomMessageProtocol>)arg1;
- (void)BeeRtcRoomStart;
- (void)BeeRtcRoomLeaveRoom;
- (void)BeeRtcRoomReceiveRecordId:(NSString *)arg1;
- (void)BeeRtcRoomStatistic:(id <BeeRtcRoomStatisticSummaryProtocol>)arg1 userId:(NSString *)arg2;
- (void)BeeRtcRoomDebugInfo:(NSString *)arg1 userId:(NSString *)arg2;
- (void)BeeRtcRoomNetWorkQuality:(long long)arg1 bandwidth:(double)arg2 isLocal:(_Bool)arg3;
- (void)BeeRtcRoomNetworkChange:(long long)arg1;
- (void)BeeRtcRoomConnectionStatueChange:(long long)arg1 isLocal:(_Bool)arg2 userId:(NSString *)arg3;
- (void)BeeRtcRoomPlayViewChage:(id <BeeRtcRoomRenderProtocol>)arg1 feedType:(long long)arg2;
- (void)BeeRtcRoomDidChangeParticipant:(NSArray *)arg1 type:(long long)arg2;
- (void)BeeRtcRoomDidChangeParticipant:(NSArray *)arg1;
- (void)BeeRtcRoomErrorState:(long long)arg1 error:(NSError *)arg2;
- (void)BeeRtcRoomAudioPlayModeChange:(long long)arg1;
- (void)BeeRtcRoomDidStopPlay;
- (void)BeeRtcRoomDidReadyPlay;
- (void)BeeRtcRoomJoinRoom:(_Bool)arg1 error:(NSError *)arg2;
- (void)BeeRtcRoomCreateRoom:(id <BeeRtcRoomInfoProtocol>)arg1 error:(NSError *)arg2;
@end

