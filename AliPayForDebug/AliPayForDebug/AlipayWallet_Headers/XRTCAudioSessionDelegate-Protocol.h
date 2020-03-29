//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class AVAudioSessionRouteDescription, NSError, XRTCAudioSession;

@protocol XRTCAudioSessionDelegate <NSObject>

@optional
- (void)audioSession:(XRTCAudioSession *)arg1 failedToSetActive:(_Bool)arg2 error:(NSError *)arg3;
- (void)audioSession:(XRTCAudioSession *)arg1 didSetActive:(_Bool)arg2;
- (void)audioSession:(XRTCAudioSession *)arg1 willSetActive:(_Bool)arg2;
- (void)audioSession:(XRTCAudioSession *)arg1 didDetectPlayoutGlitch:(long long)arg2;
- (void)audioSession:(XRTCAudioSession *)arg1 didChangeOutputVolume:(float)arg2;
- (void)audioSessionDidStopPlayOrRecord:(XRTCAudioSession *)arg1;
- (void)audioSessionDidStartPlayOrRecord:(XRTCAudioSession *)arg1;
- (void)audioSession:(XRTCAudioSession *)arg1 didChangeCanPlayOrRecord:(_Bool)arg2;
- (void)audioSessionMediaServerReset:(XRTCAudioSession *)arg1;
- (void)audioSessionMediaServerTerminated:(XRTCAudioSession *)arg1;
- (void)audioSessionDidChangeRoute:(XRTCAudioSession *)arg1 reason:(unsigned long long)arg2 previousRoute:(AVAudioSessionRouteDescription *)arg3;
- (void)audioSessionDidEndInterruption:(XRTCAudioSession *)arg1 shouldResumeSession:(_Bool)arg2;
- (void)audioSessionDidBeginInterruption:(XRTCAudioSession *)arg1;
@end

