//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface DRLTinySDKProfiler : NSObject
{
}

+ (void)profileEndEvent:(unsigned long long)arg1 category:(id)arg2;
+ (void)profileBeginEvent:(unsigned long long)arg1 name:(id)arg2 args:(id)arg3;
+ (void)profileEnd:(CDUnknownBlockType)arg1;
+ (void)profileInit;

@end

