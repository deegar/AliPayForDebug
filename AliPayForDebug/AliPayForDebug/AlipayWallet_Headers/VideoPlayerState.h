//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class VideoPlayerInternal;

@interface VideoPlayerState : NSObject
{
    _Bool _networkResource;
    VideoPlayerInternal *_player;
    unsigned long long _state;
}

@property(nonatomic) _Bool networkResource; // @synthesize networkResource=_networkResource;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(nonatomic) __weak VideoPlayerInternal *player; // @synthesize player=_player;
- (void).cxx_destruct;
- (void)loadingComplete;
- (void)setIdentifier:(id)arg1;
- (id)initWithPlayer:(id)arg1;

@end
