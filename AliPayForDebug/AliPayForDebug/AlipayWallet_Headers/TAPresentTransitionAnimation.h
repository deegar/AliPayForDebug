//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "UIViewControllerAnimatedTransitioning-Protocol.h"

@class NSString;

@interface TAPresentTransitionAnimation : NSObject <UIViewControllerAnimatedTransitioning>
{
    unsigned long long _transitionType;
    struct CGRect _originFrame;
}

+ (id)transitionSnapShotView4ViewController:(id)arg1;
+ (void)setTransitionSnapShotView:(id)arg1 viewController:(id)arg2;
@property(nonatomic) unsigned long long transitionType; // @synthesize transitionType=_transitionType;
@property(nonatomic) struct CGRect originFrame; // @synthesize originFrame=_originFrame;
- (void)animateTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (id)initWithTransitionType:(unsigned long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

