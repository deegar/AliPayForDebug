//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface Threshold : NSObject
{
    long long max;
    long long windowsize;
}

- (void)slideWindowIfNeed;
- (unsigned long long)getWindow:(unsigned long long)arg1;
- (void)reset;
- (_Bool)isThreshold;
- (long long)hited;
- (long long)inc;
- (id)initWith:(long long)arg1 windowsize:(long long)arg2;

@end

