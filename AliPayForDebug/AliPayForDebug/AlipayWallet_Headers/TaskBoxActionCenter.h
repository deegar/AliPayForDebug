//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface TaskBoxActionCenter : NSObject
{
    NSMutableDictionary *_taskboxActions;
}

- (void).cxx_destruct;
- (CDUnknownBlockType)queryActionBlock:(id)arg1 actionId:(id)arg2;
- (void)removeAction:(id)arg1 actionId:(id)arg2;
- (void)loadAction:(id)arg1 actionId:(id)arg2 block:(CDUnknownBlockType)arg3;
- (id)init;

@end

