//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface MBSyncManager : NSObject
{
    NSObject<OS_dispatch_queue> *_syncQueue;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)billMenuRefreshHandler:(id)arg1;
- (void)deleteMessage:(id)arg1;
- (void)syncMessage:(id)arg1;
- (void)dealloc;
- (void)willDestroy;
- (void)start;
- (id)init;

@end

