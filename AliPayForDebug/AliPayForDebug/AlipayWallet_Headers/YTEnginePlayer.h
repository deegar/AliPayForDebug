//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, UIView, YTEngineController, YTEngineScreenMode;
@protocol YTEnginePlayerDelegate, YTEnginePlayerItem;

@interface YTEnginePlayer : NSObject
{
    _Bool _isDeinit;
    _Bool _isLocalPlay;
    float _liveMinCache;
    float _liveMaxCache;
    YTEngineController *_engineController;
    long long _streamType;
    double _duration;
    double _currentTime;
    double _loadedTime;
    id <YTEnginePlayerItem> _currentItem;
}

@property(nonatomic) float liveMaxCache; // @synthesize liveMaxCache=_liveMaxCache;
@property(nonatomic) float liveMinCache; // @synthesize liveMinCache=_liveMinCache;
@property(nonatomic) __weak id <YTEnginePlayerItem> currentItem; // @synthesize currentItem=_currentItem;
@property(nonatomic) double loadedTime; // @synthesize loadedTime=_loadedTime;
@property(nonatomic) double currentTime; // @synthesize currentTime=_currentTime;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(nonatomic) _Bool isLocalPlay; // @synthesize isLocalPlay=_isLocalPlay;
@property(nonatomic) _Bool isDeinit; // @synthesize isDeinit=_isDeinit;
@property(nonatomic) long long streamType; // @synthesize streamType=_streamType;
@property(retain, nonatomic) YTEngineController *engineController; // @synthesize engineController=_engineController;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)uninstallEventsObservers;
- (void)installEventsObservers;
- (id)internalPlayer;
@property(nonatomic) __weak id <YTEnginePlayerDelegate> playerDelegate;
- (void)deinit;
- (void)dealloc;
- (id)initWithConfiguration:(id)arg1;
- (id)init;
- (void)updateWithPlayItem:(id)arg1;
- (void)playWithYoukuVid:(id)arg1 quality:(id)arg2 decodeScheme:(unsigned long long)arg3 extraInfo:(id)arg4;
- (void)playWithPlayItem:(id)arg1 quality:(id)arg2 decodeScheme:(unsigned long long)arg3 isLocalPlay:(_Bool)arg4 extraInfo:(id)arg5;
- (void)resume;
- (void)interrupt;
- (void)setPlaybackSpeed:(double)arg1;
- (void)seekToTime:(double)arg1;
- (void)stop;
- (void)pause;
- (void)play;
- (void)setPursueVideoFrameType:(long long)arg1;
- (long long)currentTotalSize;
- (id)hlsQualityList;
- (id)qualitySizeDict;
- (id)vipPayInfoDic;
- (id)payInfoDic;
- (id)trialInfoDic;
@property(nonatomic) _Bool enableLoop;
@property(nonatomic) float volume;
@property(nonatomic) unsigned long long scheme;
@property(copy, nonatomic) NSString *quality;
- (struct CGSize)getVideoSize;
- (_Bool)switchScreenModeTo:(id)arg1 animated:(_Bool)arg2;
@property(readonly, nonatomic) YTEngineScreenMode *currentScreenMode;
@property(nonatomic) float scale;
@property(nonatomic) long long gravity;
@property(readonly, nonatomic) UIView *view;
@property(readonly, nonatomic) _Bool isPlayFromCache;
@property(readonly, copy, nonatomic) NSString *playBackState;
@property(readonly, copy, nonatomic) NSString *state;
- (id)statisticsModelInfo;
@property(nonatomic) _Bool backgroundPlayAudioEnable;
- (void)captureVideoFrameWithSize:(struct CGSize)arg1 andNotificationKey:(id)arg2;

@end

