//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface APBinAOPLifeCycle : NSObject
{
    NSMutableArray *_delegaters;
}

+ (void)endSelWithWrapper:(id)arg1;
+ (void)startSelWithWrapper:(id)arg1;
+ (void)commitSelWithWrapper:(id)arg1;
+ (_Bool)canExcuteSelWithWrapper:(id)arg1;
+ (void)endBlockWithWrapper:(id)arg1;
+ (void)startBlockWithWrapper:(id)arg1;
+ (void)commitBlockWithWrapper:(id)arg1;
+ (_Bool)canExcuteBlockWithWrapper:(id)arg1;
+ (id)sharedInstance;
@property(retain, nonatomic) NSMutableArray *delegaters; // @synthesize delegaters=_delegaters;
- (void).cxx_destruct;
- (void)_endSelWithWrapper:(id)arg1;
- (void)_startSelWithWrapper:(id)arg1;
- (void)_commitSelWithWrapper:(id)arg1;
- (_Bool)_canExcuteSelWithWrapper:(id)arg1;
- (void)_endBlockWithWrapper:(id)arg1;
- (void)_startBlockWithWrapper:(id)arg1;
- (void)_commitBlockWithWrapper:(id)arg1;
- (_Bool)_canExcuteBlockWithWrapper:(id)arg1;
- (id)init;

@end

