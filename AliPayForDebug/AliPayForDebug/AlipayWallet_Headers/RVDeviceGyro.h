//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CMMotionManager;

@interface RVDeviceGyro : NSObject
{
    CMMotionManager *_motionManager;
    double _interval;
}

@property(nonatomic) double interval; // @synthesize interval=_interval;
@property(retain, nonatomic) CMMotionManager *motionManager; // @synthesize motionManager=_motionManager;
- (void).cxx_destruct;
- (void)dealloc;
- (void)clearWatchGyro;
- (void)watchGyroWithInterval:(double)arg1 callback:(CDUnknownBlockType)arg2;

@end

