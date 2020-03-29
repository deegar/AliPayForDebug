//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "APConfigObserverProtocol-Protocol.h"

@class CADisplayLink, NSHashTable, NSString;

@interface YZImageThread : NSObject <APConfigObserverProtocol>
{
    _Bool _isBackground;
    NSString *_gifplayerConfig;
    CADisplayLink *_displayLink;
    NSHashTable *_table;
    double _version;
}

+ (id)shareInstance;
@property(nonatomic) double version; // @synthesize version=_version;
@property(nonatomic) _Bool isBackground; // @synthesize isBackground=_isBackground;
@property(retain, nonatomic) NSHashTable *table; // @synthesize table=_table;
@property(retain, nonatomic) CADisplayLink *displayLink; // @synthesize displayLink=_displayLink;
@property(retain, nonatomic) NSString *gifplayerConfig; // @synthesize gifplayerConfig=_gifplayerConfig;
- (void).cxx_destruct;
- (void)changeCurrentFrame:(id)arg1;
- (void)start;
- (void)removeImageView:(id)arg1;
- (void)addImageView:(id)arg1;
- (void)start:(id)arg1;
- (void)remove:(id)arg1;
- (void)dealloc;
- (void)ApplicationDidBecomeActive;
- (void)ApplicationWillResignActive;
- (void)configChangedForKey:(id)arg1 value:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

