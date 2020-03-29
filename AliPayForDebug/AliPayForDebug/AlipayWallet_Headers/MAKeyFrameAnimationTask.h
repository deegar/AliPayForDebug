//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MAAnimationTask.h"

@class MAMediaTimingFunction, NSArray;

@interface MAKeyFrameAnimationTask : MAAnimationTask
{
    id _currentFromValue;
    id _currentToValue;
    MAMediaTimingFunction *_currentMediaTimingFunction;
    double _currentFromSlices;
    double _currentToSlices;
    unsigned long long _segmentIndex;
    NSArray *_keyTimes;
    NSArray *_values;
    NSArray *_mediaTimingFunctions;
}

@property(retain, nonatomic) NSArray *mediaTimingFunctions; // @synthesize mediaTimingFunctions=_mediaTimingFunctions;
@property(retain, nonatomic) NSArray *values; // @synthesize values=_values;
@property(retain, nonatomic) NSArray *keyTimes; // @synthesize keyTimes=_keyTimes;
- (void).cxx_destruct;
- (id)init;
- (id)doAnimationTaskWithDuration:(double)arg1 frameInterval:(double)arg2;

@end

