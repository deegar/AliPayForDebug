//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "VZFNode.h"

@interface VZFScrollNode : VZFNode
{
    _Bool _hasScrollTo;
    _Bool _scrollWithAnimation;
    _Bool _cacheScroll;
    double _scrollAnimationDuration;
    struct CGSize _contentSize;
    struct CGPoint _scrollTo;
    vector_cb893a28 _children;
    struct StackNodeSpecs _stackNodeSpecs;
    struct ScrollNodeSpecs _scrollNodeSpecs;
}

+ (id)newWithScrollAttributes:(const struct ScrollNodeSpecs *)arg1 StackAttributes:(const struct StackNodeSpecs *)arg2 NodeSpecs:(const struct NodeSpecs *)arg3 BackingViewClass:(Class)arg4 Children:(vector_cb893a28)arg5;
+ (id)newWithScrollAttributes:(const struct ScrollNodeSpecs *)arg1 StackAttributes:(const struct StackNodeSpecs *)arg2 NodeSpecs:(const struct NodeSpecs *)arg3 Children:(vector_cb893a28)arg4;
@property(nonatomic) _Bool cacheScroll; // @synthesize cacheScroll=_cacheScroll;
@property(nonatomic) double scrollAnimationDuration; // @synthesize scrollAnimationDuration=_scrollAnimationDuration;
@property(nonatomic) _Bool scrollWithAnimation; // @synthesize scrollWithAnimation=_scrollWithAnimation;
@property(readonly, nonatomic) _Bool hasScrollTo; // @synthesize hasScrollTo=_hasScrollTo;
@property(readonly, nonatomic) struct CGPoint scrollTo; // @synthesize scrollTo=_scrollTo;
@property(readonly, nonatomic) struct CGSize contentSize; // @synthesize contentSize=_contentSize;
@property(readonly, nonatomic) vector_cb893a28 children; // @synthesize children=_children;
@property(readonly, nonatomic) struct StackNodeSpecs stackNodeSpecs; // @synthesize stackNodeSpecs=_stackNodeSpecs;
@property(readonly, nonatomic) struct ScrollNodeSpecs scrollNodeSpecs; // @synthesize scrollNodeSpecs=_scrollNodeSpecs;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)didMount;
- (struct NodeLayout)nodeDidLayout;

@end

