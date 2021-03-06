//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface WTConfigUtils : NSObject
{
}

+ (void)updateConfigByVersion:(long long)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)checkConfigOnConfigTimeUpdate;
+ (void)checkConfigNeverRPC:(CDUnknownBlockType)arg1;
+ (id)decodeText:(id)arg1;
+ (void)saveConfig:(id)arg1;
+ (id)readConfig;
+ (void)saveCodeTable:(id)arg1;
+ (id)readCodeTable;
+ (long long)getConfigVersionFromAVMP;
+ (id)decodeByAVMP:(id)arg1 codeTable:(id)arg2 configText:(id)arg3;
+ (id)sharedAVMP;

@end

