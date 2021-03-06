//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NBComponent.h"

#import "BeeLottiePlayerProtocol-Protocol.h"

@class BeeLottiePlayer, NSMutableDictionary, NSString;

@interface NBLottieComponent : NBComponent <BeeLottiePlayerProtocol>
{
    NSString *_pageUrl;
    NSMutableDictionary *_imageCache;
    BeeLottiePlayer *_lottiePlayer;
}

@property(retain, nonatomic) BeeLottiePlayer *lottiePlayer; // @synthesize lottiePlayer=_lottiePlayer;
- (void).cxx_destruct;
- (void)sendLottieAnimationEvent:(id)arg1 data:(id)arg2;
- (id)syncGetCachedResourceDataWitRequest:(id)arg1;
- (void)getResourceDataWitRequest:(id)arg1;
- (id)getRootPath;
- (id)getResourceRootPath:(id)arg1;
- (id)getSourceDataFromCacheWithUrl:(id)arg1;
- (id)contentView;
- (void)componentWillDestory;
- (void)componentReceiveMessage:(id)arg1 data:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (void)componentDataDidChangeWithData:(id)arg1;
- (id)initWithConfig:(id)arg1 messageDelegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

