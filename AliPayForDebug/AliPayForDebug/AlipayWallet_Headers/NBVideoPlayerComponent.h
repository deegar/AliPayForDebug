//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NBComponent.h"

#import "BeeVideoPlayerViewDelegate-Protocol.h"
#import "BeeVideoPosterPluginDelegate-Protocol.h"

@class BeeVideoBottomPlugin, BeeVideoHistoryPlugin, BeeVideoMiniProgressPlugin, BeeVideoNoticeDialogPlugin, BeeVideoPlayerView, BeeVideoPosterPlugin, NSDate, NSString, UIView;

@interface NBVideoPlayerComponent : NBComponent <BeeVideoPlayerViewDelegate, BeeVideoPosterPluginDelegate>
{
    _Bool _originalStatusBarHidden;
    _Bool _ignoreStopState;
    _Bool _isMutedBeforePause;
    _Bool _isPauseState;
    _Bool _isFirstPlaying;
    _Bool _isDownGrade;
    BeeVideoPlayerView *_videoPlayer;
    NSString *_url;
    double _initialTime;
    long long _direction;
    long long _originalStatusBarStyle;
    long long _playerState;
    double _playDuration;
    NSDate *_prePlayDate;
    BeeVideoNoticeDialogPlugin *_noticePlugin;
    BeeVideoMiniProgressPlugin *_miniProgress;
    BeeVideoPosterPlugin *_poster;
    BeeVideoHistoryPlugin *_historyPlugin;
    BeeVideoBottomPlugin *_bottomPlugin;
    UIView *_componentView;
}

@property(retain, nonatomic) UIView *componentView; // @synthesize componentView=_componentView;
@property(nonatomic) _Bool isDownGrade; // @synthesize isDownGrade=_isDownGrade;
@property(nonatomic) _Bool isFirstPlaying; // @synthesize isFirstPlaying=_isFirstPlaying;
@property(retain, nonatomic) BeeVideoBottomPlugin *bottomPlugin; // @synthesize bottomPlugin=_bottomPlugin;
@property(retain, nonatomic) BeeVideoHistoryPlugin *historyPlugin; // @synthesize historyPlugin=_historyPlugin;
@property(retain, nonatomic) BeeVideoPosterPlugin *poster; // @synthesize poster=_poster;
@property(retain, nonatomic) BeeVideoMiniProgressPlugin *miniProgress; // @synthesize miniProgress=_miniProgress;
@property(retain, nonatomic) BeeVideoNoticeDialogPlugin *noticePlugin; // @synthesize noticePlugin=_noticePlugin;
@property(retain, nonatomic) NSDate *prePlayDate; // @synthesize prePlayDate=_prePlayDate;
@property(nonatomic) double playDuration; // @synthesize playDuration=_playDuration;
@property(nonatomic) _Bool isPauseState; // @synthesize isPauseState=_isPauseState;
@property(nonatomic) _Bool isMutedBeforePause; // @synthesize isMutedBeforePause=_isMutedBeforePause;
@property(nonatomic) _Bool ignoreStopState; // @synthesize ignoreStopState=_ignoreStopState;
@property(nonatomic) long long playerState; // @synthesize playerState=_playerState;
@property(nonatomic) long long originalStatusBarStyle; // @synthesize originalStatusBarStyle=_originalStatusBarStyle;
@property(nonatomic) _Bool originalStatusBarHidden; // @synthesize originalStatusBarHidden=_originalStatusBarHidden;
@property(nonatomic) long long direction; // @synthesize direction=_direction;
@property(nonatomic) double initialTime; // @synthesize initialTime=_initialTime;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
@property(retain, nonatomic) BeeVideoPlayerView *videoPlayer; // @synthesize videoPlayer=_videoPlayer;
- (void).cxx_destruct;
- (_Bool)BeeVideoPlayerView:(id)arg1 handleClickInView:(struct CGPoint)arg2 andInVideo:(struct CGPoint)arg3;
- (void)BeeVideoPlayerViewDidFinishPlay:(id)arg1;
- (void)BeeVideoPlayerViewDidStartPlay:(id)arg1;
- (void)BeeVideoPlayerView:(id)arg1 extraInfo:(id)arg2;
- (_Bool)BeeVideoPlayerView:(id)arg1 failedWithError:(id)arg2;
- (void)sendTimeUpdateMessageWithPlayedTime:(double)arg1;
- (void)BeeVideoPlayerView:(id)arg1 willSeekToTime:(double)arg2;
- (void)BeeVideoPlayerView:(id)arg1 playedTime:(double)arg2;
- (void)BeeVideoPlayerView:(id)arg1 ClickedBtn:(long long)arg2;
- (void)BeeVideoPlayerView:(id)arg1 willChangeState:(long long)arg2;
- (void)BeeVideoPlayerViewUpdateUrl:(id)arg1;
- (void)BeeVideoPlayerView:(id)arg1 controlVisible:(_Bool)arg2;
- (void)BeeVideoPlayerView:(id)arg1 initWithSrc:(id)arg2;
- (void)BeeVideoPosterStartPlay;
- (void)handleFullScreen:(_Bool)arg1 withDirection:(long long)arg2;
- (void)componentReceiveMessage:(id)arg1 data:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (_Bool)defaultUseYoukuCoreWithUrl:(id)arg1 andExtraInfo:(id)arg2;
- (void)componentDataDidChangeWithData:(id)arg1;
- (void)componentDataWillChangeWithData:(id)arg1;
- (void)logoutByDevice;
- (void)applicationEnterBackground;
- (void)componentWillDestory;
- (void)componentDidResume;
- (void)componentDidPause;
- (id)contentView;
- (id)initWithConfig:(id)arg1 messageDelegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

