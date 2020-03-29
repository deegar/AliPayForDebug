//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CAAnimationGroup, NSMutableArray, UIView;

@interface VZViewAnimationGroup : NSObject
{
    _Bool _hasCalculate;
    UIView *_view;
    CAAnimationGroup *_animationGroup;
    NSMutableArray *_calculationActions;
    NSMutableArray *_completionActions;
    NSMutableArray *_animations;
    double _duration;
    double _delay;
    CDUnknownBlockType _completion;
}

@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(nonatomic) double delay; // @synthesize delay=_delay;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(retain, nonatomic) NSMutableArray *animations; // @synthesize animations=_animations;
@property(retain, nonatomic) NSMutableArray *completionActions; // @synthesize completionActions=_completionActions;
@property(retain, nonatomic) NSMutableArray *calculationActions; // @synthesize calculationActions=_calculationActions;
@property(retain, nonatomic) CAAnimationGroup *animationGroup; // @synthesize animationGroup=_animationGroup;
@property(nonatomic) __weak UIView *view; // @synthesize view=_view;
- (void).cxx_destruct;
- (void)dealloc;
- (void)clear;
- (void)makeAnchorFromX:(double)arg1 Y:(double)arg2;
- (void)immediatelyAnchorFromX:(double)arg1 Y:(double)arg2 view:(id)arg3;
- (void)immediatelyExecuteCompletionActions;
- (void)executeCompletionActions;
- (void)animateChainLink;
- (void)stopAnimation;
- (void)stopAnimationWithCompletion:(CDUnknownBlockType)arg1;
- (void)startAnimation;
- (void)startAnimationWithCompletion:(CDUnknownBlockType)arg1;
- (id)basicAnimationGroup;
- (id)initWithAnimationView:(id)arg1;

@end
