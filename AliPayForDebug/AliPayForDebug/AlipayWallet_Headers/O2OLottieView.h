//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "LOTAssetsRetriver-Protocol.h"

@class LOTAnimationView, NSString, UIImageView, VZFBlockAction;

@interface O2OLottieView : UIView <LOTAssetsRetriver>
{
    LOTAnimationView *_lottieView;
    UIImageView *_placeHolderView;
    VZFBlockAction *_completion;
    int _loopCount;
    int _playCount;
    double _delay;
    _Bool _isLocalFile;
    NSString *_mainBundlePath;
}

- (void).cxx_destruct;
- (void)updateHasWindow:(_Bool)arg1;
- (void)setHidden:(_Bool)arg1;
- (void)willMoveToWindow:(id)arg1;
- (void)downloadPath:(id)arg1;
- (void)playForCount;
- (void)setFrame:(struct CGRect)arg1;
- (void)loadLottieWithPath:(id)arg1;
- (void)_handleWillEnterForeground;
- (void)_handleWillEnterBackground;
- (void)dealloc;
- (id)initWithConfig:(id)arg1 tpl:(id)arg2 item:(id)arg3;
- (id)getImageOfPath:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

