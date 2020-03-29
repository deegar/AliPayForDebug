//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AVAudioPlayerDelegate-Protocol.h"

@class AMAudioPlayTask, AVAssetExportSession, AVAudioPlayer, NSDictionary, NSMutableArray, NSString, NSTimer;
@protocol OS_dispatch_queue;

@interface APMAudioPlayer : NSObject <AVAudioPlayerDelegate>
{
    _Bool _isActiveAudioSession;
    float _mediaVolume;
    NSDictionary *_symbolToPathDict;
    AVAudioPlayer *_audioPlayer;
    AVAssetExportSession *_output;
    NSString *_bundlePath;
    NSMutableArray *_audioTaskQueue;
    AMAudioPlayTask *_playingTask;
    AMAudioPlayTask *_pauseTask;
    NSObject<OS_dispatch_queue> *_playSerialQueue;
    NSTimer *_playMonitor;
}

+ (id)sharedPlayer;
+ (id)getPlayerIfExist;
@property(retain, nonatomic) NSTimer *playMonitor; // @synthesize playMonitor=_playMonitor;
@property(nonatomic) _Bool isActiveAudioSession; // @synthesize isActiveAudioSession=_isActiveAudioSession;
@property(nonatomic) float mediaVolume; // @synthesize mediaVolume=_mediaVolume;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *playSerialQueue; // @synthesize playSerialQueue=_playSerialQueue;
@property(retain, nonatomic) AMAudioPlayTask *pauseTask; // @synthesize pauseTask=_pauseTask;
@property(retain, nonatomic) AMAudioPlayTask *playingTask; // @synthesize playingTask=_playingTask;
@property(retain, nonatomic) NSMutableArray *audioTaskQueue; // @synthesize audioTaskQueue=_audioTaskQueue;
@property(retain, nonatomic) NSString *bundlePath; // @synthesize bundlePath=_bundlePath;
@property(retain, nonatomic) AVAssetExportSession *output; // @synthesize output=_output;
@property(retain, nonatomic) AVAudioPlayer *audioPlayer; // @synthesize audioPlayer=_audioPlayer;
@property(retain, nonatomic) NSDictionary *symbolToPathDict; // @synthesize symbolToPathDict=_symbolToPathDict;
- (void).cxx_destruct;
- (void)monitorPushAudioPlay:(id)arg1 succeed:(_Bool)arg2 errorStr:(id)arg3;
- (void)stopTimerForPlayTimeout;
- (void)handlePlayTimeout:(id)arg1;
- (void)checkAppWillTerminate;
- (void)monitorTaskFail:(id)arg1 failCode:(long long)arg2;
- (void)rusumePlayTask;
- (void)handleMediaServiceResetNotification;
- (void)handleSessionRouteChangeNotification:(id)arg1;
- (void)handleSessionInterruptionNotification:(id)arg1;
- (void)audioPlayerDecodeErrorDidOccur:(id)arg1 error:(id)arg2;
- (void)audioPlayerDidFinishPlaying:(id)arg1 successfully:(_Bool)arg2;
- (id)defaultQRCodeHintSoundUrl;
- (id)clearAudioCachePath;
- (id)parseAmountInfoWithTask:(id)arg1;
- (id)parseNumberWithTask:(id)arg1;
- (void)exportCashierSuccessSoundWithTask:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)resumeSysSpearkerVolume;
- (void)checkSysSpeakerVolume;
- (void)resumeAudioPlayback;
- (void)rerouteAudioPlayback;
- (id)getCurrentOutput;
- (void)syncExcuteNextTask;
- (void)asyncExcuteNextTask;
- (id)checkQueueAndPlay;
- (id)deQueueTask;
- (void)enQueueWithTask:(id)arg1;
- (void)setCurrentPlayingTask:(id)arg1;
- (id)currentPlayingTask;
- (void)resumeWhenError;
- (_Bool)playSoundAtURL:(id)arg1 error:(id *)arg2;
- (void)previewSoundAtUrl:(id)arg1 error:(id *)arg2;
- (void)playAudioTaskInterrupt:(id)arg1;
- (void)playAudioTask:(id)arg1;
- (id)playNormalAudioFile:(id)arg1 fromPush:(_Bool)arg2 pushTagId:(id)arg3 userInfo:(id)arg4 start:(CDUnknownBlockType)arg5 completed:(CDUnknownBlockType)arg6;
- (id)playCashierSuccessWithAmount:(id)arg1 rewardInfo:(id)arg2 svrTime:(long long)arg3 fromPush:(_Bool)arg4 pushTagId:(id)arg5 userInfo:(id)arg6 start:(CDUnknownBlockType)arg7 completed:(CDUnknownBlockType)arg8;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

