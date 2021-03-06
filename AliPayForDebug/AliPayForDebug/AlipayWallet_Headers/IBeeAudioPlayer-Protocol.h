//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSString;
@protocol BeeAudioPlayerDelegate;

@protocol IBeeAudioPlayer <NSObject>
@property(readonly, nonatomic, getter=getDurationLoaded) double durationLoaded;
@property(readonly, nonatomic, getter=getDurationWatched) double durationWatch;
@property(readonly, nonatomic, getter=getTotalDuration) double totalDuration;
@property(nonatomic) double startTime;
@property(copy, nonatomic) NSString *originalSrc;
@property(copy, nonatomic) NSString *appId;
@property(nonatomic) _Bool isLive;
@property(readonly, nonatomic) long long currentState;
@property(copy, nonatomic) NSString *url;
@property(nonatomic) __weak id <BeeAudioPlayerDelegate> delegate;
- (void)seekEnd;
- (void)seekToTime:(double)arg1;
- (void)stop;
- (void)pause;
- (void)play;
- (void)setAudioUrl:(NSString *)arg1 withBusiness:(NSString *)arg2 andExtraParams:(NSDictionary *)arg3;
@end

