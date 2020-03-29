//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "VZFNodeBackingViewInterface-Protocol.h"

@class NSArray, NSString, NSTimer;

@interface O2OTransitionPagingView : UIView <VZFNodeBackingViewInterface>
{
    NSTimer *_timer;
    NSArray *_childViews;
    _Bool _isActive;
    _Bool _isVisible;
    _Bool _isTracking;
    int _prevCurrent;
    _Bool _ignoreEvent;
    double _autoTransition;
    double _animationDuration;
    long long _currentPage;
    CDUnknownBlockType _switched;
}

@property(copy, nonatomic) CDUnknownBlockType switched; // @synthesize switched=_switched;
@property(readonly, nonatomic) long long currentPage; // @synthesize currentPage=_currentPage;
@property(nonatomic) double animationDuration; // @synthesize animationDuration=_animationDuration;
@property(nonatomic) double autoTransition; // @synthesize autoTransition=_autoTransition;
- (void).cxx_destruct;
- (void)dealloc;
- (void)vz_applyNodeAttributes:(id)arg1;
- (void)resetState;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)willMoveToWindow:(id)arg1;
- (void)didBecomeActive;
- (void)willResignActive;
- (void)stopTimer;
- (void)resetTimer;
- (_Bool)autoTransitionEnabled;
- (void)transitionToPage:(long long)arg1;
- (void)setCurrentPage:(long long)arg1;
- (void)reloadViews;
- (void)setChildrenViews:(id)arg1;
@property(readonly, nonatomic) long long numberOfPages;
- (void)transitionFromIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2 animated:(_Bool)arg3;
- (void)switchToNextItem;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

