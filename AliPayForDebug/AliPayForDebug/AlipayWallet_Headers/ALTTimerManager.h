//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ALTDataManager, NSSet, NSTimer;

@interface ALTTimerManager : NSObject
{
    _Bool _started;
    ALTDataManager *_dataManager;
    NSSet *_cardTypeIds;
    NSTimer *_timer;
}

@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(nonatomic) _Bool started; // @synthesize started=_started;
@property(copy, nonatomic) NSSet *cardTypeIds; // @synthesize cardTypeIds=_cardTypeIds;
@property(nonatomic) __weak ALTDataManager *dataManager; // @synthesize dataManager=_dataManager;
- (void).cxx_destruct;
- (void)timerFireMethod:(id)arg1;
- (void)stop;
- (void)start;
- (void)dealloc;
@property(readonly, nonatomic) double timeInterval;
- (id)initWithTimeInterval:(double)arg1 repeats:(_Bool)arg2;

@end
