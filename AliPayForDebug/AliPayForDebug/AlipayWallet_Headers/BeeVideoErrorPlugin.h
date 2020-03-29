//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "BeeVideoPlayerPluginDelegate-Protocol.h"

@class BeeVideoErrorView, BeeVideoPlayerView, NSString;
@protocol BeeVideoHandlerDelegate;

@interface BeeVideoErrorPlugin : NSObject <BeeVideoPlayerPluginDelegate>
{
    id <BeeVideoHandlerDelegate> _delegate;
    BeeVideoPlayerView *_playerView;
    BeeVideoErrorView *_errorView;
}

@property(retain, nonatomic) BeeVideoErrorView *errorView; // @synthesize errorView=_errorView;
@property(nonatomic) __weak BeeVideoPlayerView *playerView; // @synthesize playerView=_playerView;
@property(nonatomic) __weak id <BeeVideoHandlerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)hideErrorView;
- (void)showErrorWithInfo:(id)arg1 andShowRetryBtn:(_Bool)arg2;
- (void)resetUI;
- (void)BeeVideoPlayerView:(id)arg1 failed:(id)arg2 andRetry:(_Bool)arg3;
- (void)BeeVideoPlayerViewDidFinishPlay:(id)arg1;
- (void)BeeVideoPlayerViewDidStartPlay:(id)arg1;
- (void)BeevideoPlayerViewLayoutChange:(id)arg1;
- (void)pluginItemDidUninstall:(id)arg1;
- (void)pluginItemDidInstall:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

