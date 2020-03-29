//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "CAAnimationDelegate-Protocol.h"
#import "UIViewControllerAnimatedTransitioning-Protocol.h"

@class NSString;

@interface TACustomTransition : NSObject <UIViewControllerAnimatedTransitioning, CAAnimationDelegate>
{
    CDUnknownBlockType _completionBlock;
    unsigned long long _type;
    struct CGRect _originFrame;
}

@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(nonatomic) struct CGRect originFrame; // @synthesize originFrame=_originFrame;
- (void).cxx_destruct;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)animateTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (void)updateTransitionAnimationOrigin:(id)arg1;
- (id)initWithType:(unsigned long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

