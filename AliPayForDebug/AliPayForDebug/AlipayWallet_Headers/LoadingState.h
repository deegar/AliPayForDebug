//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "VideoPlayerState.h"

@interface LoadingState : VideoPlayerState
{
    CDUnknownBlockType _interuptedLoadingCompleteAction;
}

@property(copy, nonatomic) CDUnknownBlockType interuptedLoadingCompleteAction; // @synthesize interuptedLoadingCompleteAction=_interuptedLoadingCompleteAction;
- (void).cxx_destruct;
- (void)loadingComplete;
- (void)seekEnd;
- (void)seek:(CDStruct_1b6d18a9)arg1;
- (void)resume;
- (void)interupt;
- (void)pause;
- (void)stop;
- (void)play;
- (void)setIdentifier:(id)arg1;
- (id)initWithPlayer:(id)arg1;

@end

