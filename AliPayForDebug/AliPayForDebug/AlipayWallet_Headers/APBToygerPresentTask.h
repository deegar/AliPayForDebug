//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "APBToygerBaseTask.h"

@interface APBToygerPresentTask : APBToygerBaseTask
{
}

- (void)_checkAuth;
- (void)processEvent:(id)arg1 withCompletionCallback:(CDUnknownBlockType)arg2;
- (void)presentAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)postCameraPresentwithCamera:(id)arg1;
- (void)preCameraPresent;
- (void)invokeWithPipeInfo:(id)arg1;

@end

