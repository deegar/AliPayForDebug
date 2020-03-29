//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PKView.h"

#import "BeeVideoPlayerViewDelegate-Protocol.h"

@class BeeVideoPlayerView, MFVideoProgress, NSDictionary, NSString, NSValue, UIImageView, UILabel, UITapGestureRecognizer;
@protocol PKVideoWidgetDelegate;

@interface PKVideoWidget : PKView <BeeVideoPlayerViewDelegate>
{
    _Bool _isFail;
    _Bool _frameChange;
    _Bool _isUserActionPlay;
    int _state;
    id <PKVideoWidgetDelegate> _delegate;
    NSString *_videoUrl;
    NSString *_clientMsgId;
    NSValue *_videoSize;
    long long _alignmentType;
    NSString *_identifer;
    NSDictionary *_dataItem;
    BeeVideoPlayerView *_player;
    UIImageView *_failImage;
    UILabel *_failTextLabel;
    MFVideoProgress *_progress;
    UITapGestureRecognizer *_tapGesture;
}

@property(retain, nonatomic) UITapGestureRecognizer *tapGesture; // @synthesize tapGesture=_tapGesture;
@property(nonatomic) _Bool isUserActionPlay; // @synthesize isUserActionPlay=_isUserActionPlay;
@property(nonatomic) _Bool frameChange; // @synthesize frameChange=_frameChange;
@property(retain, nonatomic) MFVideoProgress *progress; // @synthesize progress=_progress;
@property(retain, nonatomic) UILabel *failTextLabel; // @synthesize failTextLabel=_failTextLabel;
@property(retain, nonatomic) UIImageView *failImage; // @synthesize failImage=_failImage;
@property(retain, nonatomic) BeeVideoPlayerView *player; // @synthesize player=_player;
@property(retain, nonatomic) NSDictionary *dataItem; // @synthesize dataItem=_dataItem;
@property(retain, nonatomic) NSString *identifer; // @synthesize identifer=_identifer;
@property(nonatomic) long long alignmentType; // @synthesize alignmentType=_alignmentType;
@property(nonatomic) int state; // @synthesize state=_state;
@property(nonatomic) _Bool isFail; // @synthesize isFail=_isFail;
@property(retain, nonatomic) NSValue *videoSize; // @synthesize videoSize=_videoSize;
@property(retain, nonatomic) NSString *clientMsgId; // @synthesize clientMsgId=_clientMsgId;
@property(readonly, nonatomic) NSString *videoUrl; // @synthesize videoUrl=_videoUrl;
@property(nonatomic) __weak id <PKVideoWidgetDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)accessibilityLabel;
- (_Bool)isAccessibilityElement;
- (_Bool)BeeVideoPlayerView:(id)arg1 failedWithError:(id)arg2;
- (void)BeeVideoPlayerView:(id)arg1 ClickedBtn:(long long)arg2;
- (_Bool)BeeVideoCanDownload:(id)arg1;
- (void)specialHandling;
- (void)refreshMask;
- (void)setFrame:(struct CGRect)arg1;
- (void)videoWidgetTaped:(id)arg1;
- (void)setVideoUrl:(id)arg1 business:(id)arg2;
- (void)dealloc;
- (id)init;
- (void)stopPlay;
- (void)recivePlayNotification;
- (void)uploadStatusNotification:(id)arg1;
- (void)uploadProgressNotification:(id)arg1;
- (_Bool)canVideoPlay:(id)arg1;
- (_Bool)isLoading;
- (void)failVideo;
- (void)playMovie;
- (void)setUploadProgress:(double)arg1;
- (_Bool)isUploading;
- (void)resetVideo;
- (void)refreshVideoPlayer;
- (void)setupNotifications;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

