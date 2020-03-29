//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class HKHealthStore, HKQuery;

@interface APStepCountObserver : NSObject
{
    _Bool _underObserver;
    CDUnknownBlockType _callback;
    HKHealthStore *_healthStore;
    HKQuery *_observerQuery;
}

+ (_Bool)isAvaliable;
+ (id)shared;
@property(nonatomic) _Bool underObserver; // @synthesize underObserver=_underObserver;
@property(retain, nonatomic) HKQuery *observerQuery; // @synthesize observerQuery=_observerQuery;
@property(retain, nonatomic) HKHealthStore *healthStore; // @synthesize healthStore=_healthStore;
@property(copy, nonatomic) CDUnknownBlockType callback; // @synthesize callback=_callback;
- (void).cxx_destruct;
- (void)stopObserver;
- (void)registerObserverQueryIfNeeded;
- (void)logObserverError:(id)arg1;
- (void)disableBackgroundDelivery;
- (void)enableBackgroundDelivery;
- (id)init;

@end

