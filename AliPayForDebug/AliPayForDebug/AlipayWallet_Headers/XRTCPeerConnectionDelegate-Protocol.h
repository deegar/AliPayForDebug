//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, XRTCDataChannel, XRTCIceCandidate, XRTCMediaStream, XRTCPeerConnection, XRTCRtpReceiver, XRTCRtpTransceiver;

@protocol XRTCPeerConnectionDelegate <NSObject>
- (void)peerConnection:(XRTCPeerConnection *)arg1 didOpenDataChannel:(XRTCDataChannel *)arg2;
- (void)peerConnection:(XRTCPeerConnection *)arg1 didRemoveIceCandidates:(NSArray *)arg2;
- (void)peerConnection:(XRTCPeerConnection *)arg1 didGenerateIceCandidate:(XRTCIceCandidate *)arg2;
- (void)peerConnection:(XRTCPeerConnection *)arg1 didChangeIceGatheringState:(long long)arg2;
- (void)peerConnection:(XRTCPeerConnection *)arg1 didChangeIceConnectionState:(long long)arg2;
- (void)peerConnectionShouldNegotiate:(XRTCPeerConnection *)arg1;
- (void)peerConnection:(XRTCPeerConnection *)arg1 didRemoveStream:(XRTCMediaStream *)arg2;
- (void)peerConnection:(XRTCPeerConnection *)arg1 didAddStream:(XRTCMediaStream *)arg2;
- (void)peerConnection:(XRTCPeerConnection *)arg1 didChangeSignalingState:(long long)arg2;

@optional
- (void)peerConnection:(XRTCPeerConnection *)arg1 didRemoveReceiver:(XRTCRtpReceiver *)arg2;
- (void)peerConnection:(XRTCPeerConnection *)arg1 didAddReceiver:(XRTCRtpReceiver *)arg2 streams:(NSArray *)arg3;
- (void)peerConnection:(XRTCPeerConnection *)arg1 didStartReceivingOnTransceiver:(XRTCRtpTransceiver *)arg2;
- (void)peerConnection:(XRTCPeerConnection *)arg1 didChangeConnectionState:(long long)arg2;
@end

