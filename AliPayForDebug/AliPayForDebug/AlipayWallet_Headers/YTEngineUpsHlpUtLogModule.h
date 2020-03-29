//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "YTEngineHlpUtLogModuleProtocal-Protocol.h"
#import "YTEngineModule-Protocol.h"

@class HLPPlayService, NSString;
@protocol YTEngineModuleController;

@interface YTEngineUpsHlpUtLogModule : NSObject <YTEngineModule, YTEngineHlpUtLogModuleProtocal>
{
    _Bool _isVideoStart;
    id <YTEngineModuleController> moduleController;
    HLPPlayService *hlpService;
}

@property(nonatomic) _Bool isVideoStart; // @synthesize isVideoStart=_isVideoStart;
@property(retain, nonatomic) HLPPlayService *hlpService; // @synthesize hlpService;
@property(nonatomic) __weak id <YTEngineModuleController> moduleController; // @synthesize moduleController;
- (void).cxx_destruct;
- (void)moduleController:(id)arg1 playerStateSwitchTo:(id)arg2 from:(id)arg3 userInfo:(id)arg4;
- (void)hlpCollectAnalyticsStartVideo;
- (void)clear;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool isInactive;
@property(readonly) Class superclass;

@end

