//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NBComponent.h"

#import "BeeVideoPlayerViewDelegate-Protocol.h"

@class BeeVideoPlayerView, NSString, UIView;

@interface NBLivePlayerComponent : NBComponent <BeeVideoPlayerViewDelegate>
{
    _Bool _originalStatusBarHidden;
    _Bool _isMutedBeforePause;
    _Bool _isPauseState;
    _Bool _isDownGrade;
    BeeVideoPlayerView *_videoPlayer;
    long long _direction;
    long long _originalStatusBarStyle;
    UIView *_componentView;
}

@property(retain, nonatomic) UIView *componentView; // @synthesize componentView=_componentView;
@property(nonatomic) _Bool isDownGrade; // @synthesize isDownGrade=_isDownGrade;
@property(nonatomic) _Bool isPauseState; // @synthesize isPauseState=_isPauseState;
@property(nonatomic) _Bool isMutedBeforePause; // @synthesize isMutedBeforePause=_isMutedBeforePause;
@property(nonatomic) long long originalStatusBarStyle; // @synthesize originalStatusBarStyle=_originalStatusBarStyle;
@property(nonatomic) _Bool originalStatusBarHidden; // @synthesize originalStatusBarHidden=_originalStatusBarHidden;
@property(nonatomic) long long direction; // @synthesize direction=_direction;
@property(retain, nonatomic) BeeVideoPlayerView *videoPlayer; // @synthesize videoPlayer=_videoPlayer;
- (void).cxx_destruct;
- (_Bool)BeeVideoPlayerView:(id)arg1 handleClickInView:(struct CGPoint)arg2 andInVideo:(struct CGPoint)arg3;
- (_Bool)BeeVideoPlayerView:(id)arg1 failedWithError:(id)arg2;
- (void)BeeVideoPlayerView:(id)arg1 playedTime:(double)arg2;
- (void)BeeVideoPlayerView:(id)arg1 ClickedBtn:(long long)arg2;
- (void)BeeVideoPlayerView:(id)arg1 willChangeState:(long long)arg2;
- (void)handleFullScreen:(_Bool)arg1 withDirection:(long long)arg2;
- (void)componentReceiveMessage:(id)arg1 data:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (void)componentDataDidChangeWithData:(id)arg1;
- (void)componentWillDestory;
- (void)componentDidResume;
- (void)componentWillPause;
- (id)contentView;
- (id)initWithConfig:(id)arg1 messageDelegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
