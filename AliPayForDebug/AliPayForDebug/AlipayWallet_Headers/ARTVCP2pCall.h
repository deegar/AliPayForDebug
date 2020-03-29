//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ARTVCBaseCall.h"

#import "AMChannelProtocol-Protocol.h"
#import "ARTVCP2pSignalReceiveProtocol-Protocol.h"
#import "ARTVCStatsSenderProtocol-Protocol.h"

@class AMP2pSignalChannel, NSString, UIView;
@protocol ARTVCP2pSignalSendProtocol;

@interface ARTVCP2pCall : ARTVCBaseCall <AMChannelProtocol, ARTVCStatsSenderProtocol, ARTVCP2pSignalReceiveProtocol>
{
    _Bool _caller;
    _Bool _compalianceWithOldApi;
    id <ARTVCP2pSignalSendProtocol> _msgSender;
    UIView *_localView;
    UIView *_remoteView;
    long long _clientAppType;
    AMP2pSignalChannel *_wsChannel;
    NSString *_peerUid;
}

@property(nonatomic) _Bool compalianceWithOldApi; // @synthesize compalianceWithOldApi=_compalianceWithOldApi;
@property(copy, nonatomic) NSString *peerUid; // @synthesize peerUid=_peerUid;
@property(retain, nonatomic) AMP2pSignalChannel *wsChannel; // @synthesize wsChannel=_wsChannel;
@property(nonatomic) long long clientAppType; // @synthesize clientAppType=_clientAppType;
@property(retain, nonatomic) UIView *remoteView; // @synthesize remoteView=_remoteView;
@property(retain, nonatomic) UIView *localView; // @synthesize localView=_localView;
@property(retain, nonatomic) id <ARTVCP2pSignalSendProtocol> msgSender; // @synthesize msgSender=_msgSender;
@property(nonatomic, getter=isCaller) _Bool caller; // @synthesize caller=_caller;
- (void).cxx_destruct;
- (void)sendStatisticReportMessage:(id)arg1 identifier:(id)arg2;
- (void)currentRoomHasBecomeInvalid;
- (void)channelStatusChangedTo:(long long)arg1;
- (long long)convertCallModeToSdpMode:(long long)arg1;
- (long long)convertArrayToSdpMode:(id)arg1;
- (id)convertSdpModeToArray:(long long)arg1;
- (void)callbackProtocolError;
- (void)callbackRoomInfoWith:(id)arg1;
- (void)setupWebSocketChannel;
- (_Bool)shutdownWebrtc;
- (void)leaveRoom:(id)arg1 receivedBye:(_Bool)arg2 leaveReason:(long long)arg3;
- (void)endFunctionCall:(id)arg1 receivedBye:(_Bool)arg2;
- (void)sendIceMessage:(id)arg1;
- (id)generateIceRequest;
- (void)setupBasicParam:(id)arg1;
- (void)participant:(id)arg1 sendTurnRecordingInfo:(id)arg2;
- (void)audioSessdionInterrupted;
- (void)participant:(id)arg1 sendRemoveCandidates:(id)arg2;
- (void)participant:(id)arg1 sendCandidate:(id)arg2;
- (void)participant:(id)arg1 sendAnswer:(id)arg2;
- (void)participant:(id)arg1 sendOffer:(id)arg2;
- (void)didReceiveRealtimeStatsConfigurationNotify:(id)arg1;
- (void)didReceiveMsgRecvedByPeerNotify:(id)arg1;
- (void)didReceiveForwardMsgNotify:(id)arg1;
- (void)didReceiveReplyToInviteNotify:(id)arg1;
- (void)didReceiveInviteNotify:(id)arg1;
- (void)didReceiveLeaveRoomNotify:(id)arg1;
- (void)didReceiveEndFunctionCallNotify:(id)arg1;
- (void)didReceiveStartFunctionCallNotify:(id)arg1;
- (void)didReceiveReplyNotify:(id)arg1;
- (void)didReceiveNewUserAddedNotify:(id)arg1;
- (void)didReceiveIceNotify:(id)arg1;
- (void)didReceiveIceServersNotify:(id)arg1;
- (void)didReceiveReplyToInviteResponse:(id)arg1;
- (void)didReceiveInviteResponse:(id)arg1;
- (void)didReceiveForwardMsgResponse:(id)arg1;
- (void)didReceiveIceResponse:(id)arg1;
- (void)didReceiveReplyResponse:(id)arg1;
- (void)didReceiveEndFunctionCallResponse:(id)arg1;
- (void)didReceiveStartFunctionCallResponse:(id)arg1;
- (void)didReceiveLeaveRoomResponse:(id)arg1;
- (void)didReceiveJoinRoomResponse:(id)arg1;
- (void)didReceiveCreateRoomResponse:(id)arg1;
- (void)breakRetainCycle;
- (void)checkingCurrentRoomIsValid;
- (id)snapshot:(_Bool)arg1;
- (long long)currentCallMode;
- (id)forwardMsg:(id)arg1;
- (_Bool)endFunctionCall:(id)arg1;
- (_Bool)reply:(id)arg1;
- (id)startFunctionCall:(id)arg1;
- (_Bool)replyToInvite:(id)arg1;
- (_Bool)invite:(id)arg1;
- (_Bool)leaveRoom:(id)arg1;
- (_Bool)joinRoom:(id)arg1;
- (_Bool)createRoom:(id)arg1;
- (void)leave:(id)arg1;
- (void)joinCall:(id)arg1;
- (void)createCall:(id)arg1;
- (void)dealloc;
- (id)initWithUid:(id)arg1 configer:(id)arg2 profile:(unsigned long long)arg3;
- (id)initWithUid:(id)arg1 msgSender:(id)arg2 configer:(id)arg3 profile:(unsigned long long)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

