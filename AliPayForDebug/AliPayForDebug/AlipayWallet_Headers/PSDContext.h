//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSPointerArray, PSDEvent;

@interface PSDContext : NSObject
{
    PSDEvent *_event;
    NSPointerArray *_eventTargets;
    NSArray *_strong_eventTargets;
}

+ (id)contextWithEvent:(id)arg1 eventTargetList:(id)arg2;
@property(retain, nonatomic) NSArray *strong_eventTargets; // @synthesize strong_eventTargets=_strong_eventTargets;
@property(retain, nonatomic) NSPointerArray *eventTargets; // @synthesize eventTargets=_eventTargets;
@property(readonly, nonatomic) __weak PSDEvent *event; // @synthesize event=_event;
- (void).cxx_destruct;
- (id)eventTargetList;
- (id)initWithEvent:(id)arg1 eventTargetList:(id)arg2;
- (id)currentViewControllerProxy;
- (id)currentViewController;
- (id)currentSession;
- (id)currentScene;
- (id)cachedScene;
- (void)setCachedObject:(id)arg1;
- (id)cachedObject;

@end

