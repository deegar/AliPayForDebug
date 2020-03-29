//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RVKSession.h"

#import "RVKNodeProtocol-Protocol.h"

@class NSString, RVKSessionParam;

@interface RVKApp : RVKSession <RVKNodeProtocol>
{
    _Bool _isRVKNode;
    RVKSessionParam *_sessionParamOverride;
}

@property(nonatomic) _Bool isRVKNode; // @synthesize isRVKNode=_isRVKNode;
@property(retain, nonatomic) RVKSessionParam *sessionParamOverride; // @synthesize sessionParamOverride=_sessionParamOverride;
- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (id)createParam;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

