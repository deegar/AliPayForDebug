//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface PLDTimming : NSObject
{
    struct JSEngine *engine_;
    NSString *instanceId_;
}

- (void).cxx_destruct;
- (void)excuteTimerTask;
- (id)initWithEngine:(struct JSEngine *)arg1 instanceId:(id)arg2;

@end
