//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface AULottieShell : NSObject
{
}

+ (_Bool)lottieViewIsLoopAnimation:(id)arg1;
+ (void)lottieView:(id)arg1 playWithStartFrame:(id)arg2 toFrame:(id)arg3 withCompletion:(CDUnknownBlockType)arg4;
+ (id)getLottieViewCurrentFrame:(id)arg1;
+ (id)lottieViewTotalFrame:(id)arg1;
+ (void)lottieViewSetProgress:(id)arg1 withFrame:(id)arg2;
+ (void)lottieViewSetLoopAnimation:(id)arg1 animation:(_Bool)arg2;
+ (_Bool)lottieViewIsAnimationPlaying:(id)arg1;
+ (void)lottieViewWithFilePath:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (id)lottieViewWithFilePath:(id)arg1;

@end

