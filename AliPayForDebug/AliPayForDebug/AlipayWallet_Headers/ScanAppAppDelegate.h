//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "DTMicroApplicationDelegate-Protocol.h"
#import "PromotionCenterDelegate-Protocol.h"

@class APScanIdleDetector, CTCellularData, NSDictionary, NSString, SALauncherMgr, UIViewController;

@interface ScanAppAppDelegate : NSObject <PromotionCenterDelegate, DTMicroApplicationDelegate>
{
    _Bool _isRouting;
    _Bool _upgradeUI;
    _Bool _showScanIdleMask;
    _Bool _showNetworkMask;
    NSDictionary *_launchOpts;
    NSDictionary *_excrescentParams;
    NSDictionary *_sceneParams;
    NSDictionary *_schemeAuthInfo;
    UIViewController *_rootController;
    SALauncherMgr *_launcherMgr;
    CTCellularData *_cellularData;
    unsigned long long _restrictedState;
    APScanIdleDetector *_idleDetector;
}

@property(nonatomic) _Bool showNetworkMask; // @synthesize showNetworkMask=_showNetworkMask;
@property(nonatomic) _Bool showScanIdleMask; // @synthesize showScanIdleMask=_showScanIdleMask;
@property(retain, nonatomic) APScanIdleDetector *idleDetector; // @synthesize idleDetector=_idleDetector;
@property(nonatomic) unsigned long long restrictedState; // @synthesize restrictedState=_restrictedState;
@property(retain, nonatomic) CTCellularData *cellularData; // @synthesize cellularData=_cellularData;
@property(retain, nonatomic) SALauncherMgr *launcherMgr; // @synthesize launcherMgr=_launcherMgr;
@property(nonatomic) _Bool upgradeUI; // @synthesize upgradeUI=_upgradeUI;
@property(retain, nonatomic) UIViewController *rootController; // @synthesize rootController=_rootController;
@property(retain, nonatomic) NSDictionary *schemeAuthInfo; // @synthesize schemeAuthInfo=_schemeAuthInfo;
@property(retain, nonatomic) NSDictionary *sceneParams; // @synthesize sceneParams=_sceneParams;
@property(retain, nonatomic) NSDictionary *excrescentParams; // @synthesize excrescentParams=_excrescentParams;
@property(retain, nonatomic) NSDictionary *launchOpts; // @synthesize launchOpts=_launchOpts;
@property(nonatomic) _Bool isRouting; // @synthesize isRouting=_isRouting;
- (void).cxx_destruct;
- (void)setupDowngradeConfig;
- (void)removeCellularData;
- (void)initCellularData;
- (void)setupMemoryMonitorSwitchAndLogCreateStub:(id)arg1;
- (void)logLinkStub:(id)arg1 app:(id)arg2;
- (void)checkNetWorking;
- (void)checkIfNeedIdleDetector:(id)arg1;
- (void)relaunch:(id)arg1;
- (void)nextApplicationWillStartNotification:(id)arg1;
- (_Bool)applicationShouldStart:(id)arg1 params:(id)arg2 aunchMode:(long long)arg3;
- (_Bool)applicationShouldStartMultapplication:(id)arg1 launchMode:(long long)arg2 sourceId:(id)arg3;
- (_Bool)applicationStartRootControllerWithNoAnimation:(id)arg1;
- (_Bool)applicationInterruptStart:(id)arg1 params:(id)arg2 aunchMode:(long long)arg3;
- (void)applicationWillTerminate:(id)arg1 animated:(_Bool)arg2;
- (void)application:(id)arg1 didResumeWithOptions:(id)arg2;
- (void)applicationWillPause:(id)arg1;
- (void)applicationDidFinishLaunching:(id)arg1;
- (void)application:(id)arg1 willStartLaunchingWithOptions:(id)arg2;
- (id)parseBlackStartParams:(id)arg1;
- (_Bool)checkBlackStartParamsWithLaunchOptions:(id)arg1;
- (void)setUpgradeUIWithOptions:(id)arg1;
- (void)applicationDidCreate:(id)arg1;
- (id)rootControllerInApplication:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

