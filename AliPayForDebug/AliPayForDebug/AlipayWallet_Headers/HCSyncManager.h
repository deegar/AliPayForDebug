//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SyncUpCallback-Protocol.h"

@class NSString;

@interface HCSyncManager : NSObject <SyncUpCallback>
{
}

+ (id)shareInstance;
- (void)sendResultBiz:(id)arg1 msgID:(id)arg2 syncUpState:(long long)arg3;
- (void)hideCard:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)syncCardOptionNotification:(id)arg1;
- (void)syncCardAddNotification:(id)arg1;
- (void)setSyncNotification;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

