//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RVKView.h"

#import "NXEngineView-Protocol.h"

@class NSString;

@interface NXEAdapterBase : RVKView <NXEngineView>
{
}

- (id)snapshotForView:(id)arg1;
- (Class)renderClass;
- (id)renderResourceTag;
- (_Bool)canHandleCreateView:(id)arg1 result:(id *)arg2;
- (void)onEngineCreate:(id)arg1 session:(id)arg2;
- (_Bool)canHandleEngineLaunch:(id)arg1 result:(id *)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

