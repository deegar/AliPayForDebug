//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class APSharedPreferences;
@protocol OS_dispatch_queue;

@interface AOCommomStorage : NSObject
{
    APSharedPreferences *_preferences;
    NSObject<OS_dispatch_queue> *_queue;
}

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) APSharedPreferences *preferences; // @synthesize preferences=_preferences;
- (void).cxx_destruct;
- (id)objectForKey:(id)arg1 business:(id)arg2;
- (_Bool)setObject:(id)arg1 forKey:(id)arg2 business:(id)arg3;
- (id)stringForKey:(id)arg1 business:(id)arg2;
- (_Bool)setString:(id)arg1 forKey:(id)arg2 business:(id)arg3;
- (id)init;

@end

