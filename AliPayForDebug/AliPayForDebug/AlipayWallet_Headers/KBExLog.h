//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface KBExLog : NSObject
{
}

+ (id)findObject2SpmIdKeyWithIndex:(id)arg1;
+ (id)spmId4View:(id)arg1 type:(id)arg2;
+ (void)writePerformanceLogWithType:(id)arg1 title:(id)arg2 costTime:(float)arg3 view:(id)arg4;
+ (void)writeErrorLogWithType:(id)arg1 title:(id)arg2 errorMsg:(id)arg3 detail:(id)arg4 view:(id)arg5;

@end

