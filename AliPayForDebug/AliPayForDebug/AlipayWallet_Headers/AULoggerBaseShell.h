//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface AULoggerBaseShell : NSObject
{
}

+ (void)eventLog:(id)arg1 params:(id)arg2;
+ (void)performanceLog:(id)arg1 controlName:(id)arg2;
+ (void)MTBIZReport:(id)arg1 subName:(id)arg2 failCode:(long long)arg3 params:(id)arg4;
+ (void)remoteLogging:(id)arg1 exInfo:(id)arg2;
+ (void)remoteLogging:(id)arg1 ucId:(id)arg2 exInfo:(id)arg3;
+ (void)setButtonActionLog:(id)arg1 actionNameLog:(id)arg2;

@end

