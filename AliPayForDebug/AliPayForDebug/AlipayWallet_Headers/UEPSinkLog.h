//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface UEPSinkLog : NSObject
{
}

+ (long long)spmPageTypeWithUepPageType:(int)arg1;
+ (id)commonFiledsPB;
+ (void)writeAppOutLog:(id)arg1;
+ (void)writePushLog:(id)arg1;
+ (void)writeAppInLog:(id)arg1;
+ (void)writeScrollLog:(id)arg1;
+ (void)writeInputLog:(id)arg1;
+ (void)writeTouchLog:(id)arg1;
+ (void)writeExposureLog:(id)arg1;
+ (void)writeClickLog:(id)arg1;
+ (void)logPv:(id)arg1;
+ (void)logEvent:(id)arg1;

@end

