//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIApplication.h>

@interface UIApplication (MTBgTask)
+ (void)doMTLoadWork;
- (void)mt_endBackgroundTask:(unsigned long long)arg1;
- (unsigned long long)mt_beginBackgroundTaskWithName:(id)arg1 expirationHandler:(CDUnknownBlockType)arg2;
- (unsigned long long)mt_beginBackgroundTaskWithExpirationHandler:(CDUnknownBlockType)arg1;
@end

