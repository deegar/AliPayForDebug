//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IBioAuthFactor-Protocol.h"

@class APBToygerBioBisConfigManager, APBToygerDataCenter, APBToygerRemoteConfig, NSArray, NSDate, NSDictionary, NSMutableArray, NSMutableDictionary, NSString, UIViewController;

@interface APBToygerFacade : NSObject <IBioAuthFactor>
{
    _Bool _bIsCardFace;
    NSString *_factorName;
    UIViewController *_vc;
    NSMutableArray *_tasks;
    NSMutableDictionary *_pipeInfo;
    APBToygerRemoteConfig *_bisConfig;
    APBToygerBioBisConfigManager *_biocfgManager;
    NSDictionary *_extInfo;
    NSArray *_actionList;
    NSArray *_actionListStack;
    long long _currentRetryCnt;
    APBToygerDataCenter *_dataCenter;
    double _brightness;
    NSDate *_startTime;
    NSString *_fcToken;
}

+ (id)getMetaInfo;
+ (id)getVersion;
@property(copy, nonatomic) NSString *fcToken; // @synthesize fcToken=_fcToken;
@property(nonatomic) _Bool bIsCardFace; // @synthesize bIsCardFace=_bIsCardFace;
@property(retain, nonatomic) NSDate *startTime; // @synthesize startTime=_startTime;
@property(nonatomic) double brightness; // @synthesize brightness=_brightness;
@property(retain, nonatomic) APBToygerDataCenter *dataCenter; // @synthesize dataCenter=_dataCenter;
@property(nonatomic) long long currentRetryCnt; // @synthesize currentRetryCnt=_currentRetryCnt;
@property(retain, nonatomic) NSArray *actionListStack; // @synthesize actionListStack=_actionListStack;
@property(retain, nonatomic) NSArray *actionList; // @synthesize actionList=_actionList;
@property(retain, nonatomic) NSDictionary *extInfo; // @synthesize extInfo=_extInfo;
@property(retain, nonatomic) APBToygerBioBisConfigManager *biocfgManager; // @synthesize biocfgManager=_biocfgManager;
@property(retain, nonatomic) APBToygerRemoteConfig *bisConfig; // @synthesize bisConfig=_bisConfig;
@property(retain, nonatomic) NSMutableDictionary *pipeInfo; // @synthesize pipeInfo=_pipeInfo;
@property(retain, nonatomic) NSMutableArray *tasks; // @synthesize tasks=_tasks;
@property(nonatomic) __weak UIViewController *vc; // @synthesize vc=_vc;
@property(copy, nonatomic) NSString *factorName; // @synthesize factorName=_factorName;
- (void).cxx_destruct;
- (id)getActionListfromeStack:(id)arg1 RetryCnt:(long long)arg2;
- (void)onEngineWillRestart:(id)arg1;
- (void)finalizeResponse:(id)arg1;
- (id)getGlobalConfig;
- (id)getTasks;
- (id)initWithRequest:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

