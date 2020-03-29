//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NBComponent.h"

#import "BeeLivePusherDelegate-Protocol.h"

@class BeeLivePusherView, NSString;

@interface NBLivePusherComponent : NBComponent <BeeLivePusherDelegate>
{
    BeeLivePusherView *_liveView;
}

@property(retain, nonatomic) BeeLivePusherView *liveView; // @synthesize liveView=_liveView;
- (void).cxx_destruct;
- (void)BeeLivePusherOnError:(long long)arg1 withInfo:(id)arg2;
- (void)BeeLivePusherChangeNetStatus:(long long)arg1;
- (void)BeeLivePusherChangeStatus:(long long)arg1;
- (void)componentReceiveMessage:(id)arg1 data:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (void)componentDataDidChangeWithData:(id)arg1;
- (void)componentWillDestory;
- (id)contentView;
- (id)initWithConfig:(id)arg1 messageDelegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

