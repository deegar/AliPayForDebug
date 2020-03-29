//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface ALPMemoryInfo : NSObject
{
    unsigned long long _totalMemeory;
    double _freeMemory;
    double _residentMemory;
    double _virtualMemory;
    double _physFootprint;
    long long _systemMemoryLevel;
}

@property(nonatomic) long long systemMemoryLevel; // @synthesize systemMemoryLevel=_systemMemoryLevel;
@property(nonatomic) double physFootprint; // @synthesize physFootprint=_physFootprint;
@property(nonatomic) double virtualMemory; // @synthesize virtualMemory=_virtualMemory;
@property(nonatomic) double residentMemory; // @synthesize residentMemory=_residentMemory;
@property(nonatomic) double freeMemory; // @synthesize freeMemory=_freeMemory;
@property(nonatomic) unsigned long long totalMemeory; // @synthesize totalMemeory=_totalMemeory;

@end

