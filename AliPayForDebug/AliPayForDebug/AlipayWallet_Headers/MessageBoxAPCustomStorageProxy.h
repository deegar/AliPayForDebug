//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class APCustomStorage, NSLock;

@interface MessageBoxAPCustomStorageProxy : NSObject
{
    APCustomStorage *_storage;
    NSLock *_lock;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)dealloc;
- (void)updateOldData;
- (void)loginNotification:(id)arg1;
- (id)daoWithPath:(id)arg1 userDependent:(_Bool)arg2 protocol:(id)arg3;
- (id)userPreferences;
- (id)commonPreferences;
- (id)init;

@end
