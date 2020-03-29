//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BeeAudioView.h"

@class UIImageView, UILabel;

@interface BeeAudioItemView : BeeAudioView
{
    UIImageView *_iconImageView;
    UILabel *_songInfoLabel;
    UILabel *_playingTextLabel;
}

+ (_Bool)shouldShow;
@property(retain, nonatomic) UILabel *playingTextLabel; // @synthesize playingTextLabel=_playingTextLabel;
@property(retain, nonatomic) UILabel *songInfoLabel; // @synthesize songInfoLabel=_songInfoLabel;
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)updateSongInfo;
- (void)setHidden:(_Bool)arg1;
- (void)removeFromSuperview;
- (void)willMoveToSuperview:(id)arg1;
- (void)didiClickAudioItem;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

@end

