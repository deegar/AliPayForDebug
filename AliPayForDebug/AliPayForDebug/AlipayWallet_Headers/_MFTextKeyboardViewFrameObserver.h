//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UIView;

@interface _MFTextKeyboardViewFrameObserver : NSObject
{
    UIView *_keyboardView;
    CDUnknownBlockType _notifyBlock;
}

+ (id)observerForView:(id)arg1;
@property(copy, nonatomic) CDUnknownBlockType notifyBlock; // @synthesize notifyBlock=_notifyBlock;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;
- (void)addFrameObserver;
- (void)removeFrameObserver;
- (void)addToKeyboardView:(id)arg1;

@end

