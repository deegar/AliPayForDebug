//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RVKBridgeExtension.h"

#import "NXEvent4TRVSBridgeExtension4TBSessionKey-Protocol.h"

@class NSString;

@interface TRVSBridgeExtension4TBSessionKey : RVKBridgeExtension <NXEvent4TRVSBridgeExtension4TBSessionKey>
{
}

+ (void)__RVK_export__getTBSessionInfo521;
+ (void)__RVK_export__setTBSessionInfo280;
- (void)getTBSessionKey:(id)arg1 originParam:(id)arg2 page:(id)arg3 callback:(CDUnknownBlockType)arg4;
- (void)setTBSessionKey:(id)arg1 originParam:(id)arg2 page:(id)arg3 callback:(CDUnknownBlockType)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

