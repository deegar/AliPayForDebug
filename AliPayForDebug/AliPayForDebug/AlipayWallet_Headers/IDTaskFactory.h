//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface IDTaskFactory : NSObject
{
    NSDictionary *_taskMap;
}

@property(retain, nonatomic) NSDictionary *taskMap; // @synthesize taskMap=_taskMap;
- (void).cxx_destruct;
- (id)taskWithContext:(id)arg1 id:(id)arg2 type:(unsigned long long)arg3;
- (id)init;

@end

