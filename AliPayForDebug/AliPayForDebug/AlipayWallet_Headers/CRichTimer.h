//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CADisplayLink, NSMutableArray;

@interface CRichTimer : NSObject
{
    _Bool _locked;
    NSMutableArray *_items;
    NSMutableArray *_itemsForAdd;
    NSMutableArray *_itemsForRemove;
    CADisplayLink *_displayLink;
    struct timeval *_lastUpdate;
}

@property(nonatomic) struct timeval *lastUpdate; // @synthesize lastUpdate=_lastUpdate;
@property(retain, nonatomic) CADisplayLink *displayLink; // @synthesize displayLink=_displayLink;
@property(nonatomic) _Bool locked; // @synthesize locked=_locked;
@property(retain, nonatomic) NSMutableArray *itemsForRemove; // @synthesize itemsForRemove=_itemsForRemove;
@property(retain, nonatomic) NSMutableArray *itemsForAdd; // @synthesize itemsForAdd=_itemsForAdd;
@property(retain, nonatomic) NSMutableArray *items; // @synthesize items=_items;
- (void).cxx_destruct;
- (void)dealloc;
- (void)removeAllTarget;
- (void)removeTarget:(id)arg1;
- (void)removeTarget:(id)arg1 selector:(SEL)arg2;
- (void)addTarget:(id)arg1 selector:(SEL)arg2;
- (id)_findItem:(id)arg1 selector:(SEL)arg2;
- (double)_calculateDeltaTime;
- (void)_mainLoop:(id)arg1;
- (void)_stopAnimation:(_Bool)arg1;
- (_Bool)_isAnimating;
- (void)_startAnimation;
- (id)init;

@end

