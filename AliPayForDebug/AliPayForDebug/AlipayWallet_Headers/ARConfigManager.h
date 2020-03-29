//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ARActivityConfig, AREventConfig, ARHMCodeConfig, ARIntroduceYearConfig, ARTabConfig;

@interface ARConfigManager : NSObject
{
    _Bool _upgradeUI;
    _Bool _showStatusBar;
    ARActivityConfig *_activityConfig;
    AREventConfig *_eventConfig;
    ARIntroduceYearConfig *_introduceYearConfig;
    ARTabConfig *_arTabConfig;
    ARHMCodeConfig *_arHMCodeConfig;
}

+ (_Bool)cpuDegrade;
+ (long long)arRequestTimeout;
+ (long long)emptyRecRestartDelay;
+ (double)exitAfterOpenUrlDelay;
+ (id)exitAfterOpenUrlList;
+ (_Bool)skipOddFrame;
+ (id)spCodeConfig;
+ (_Bool)animReleaseEngine;
+ (_Bool)clientNoRetUploadEnabled;
+ (_Bool)classifyEnabled;
+ (_Bool)memoryTrackEnabled;
+ (_Bool)switchCameraSync;
+ (_Bool)translateEnabled;
+ (_Bool)needFixCameraIssue;
+ (double)getMemWarnKillInterval;
+ (unsigned long long)getExitMemoryWarningMode;
+ (_Bool)exitAfterFuJump;
+ (double)fuResumeRecOtherDelay;
+ (double)fuResumeRecDelay;
+ (double)arLbsCacheTime;
+ (_Bool)arLbsEnable;
+ (_Bool)arCameraBlurEnable;
+ (_Bool)arShareEnable;
+ (_Bool)enableParDebug;
+ (_Bool)cameraSwitch;
+ (_Bool)isVipDownloadEnabel;
+ (double)beautyLevel;
+ (double)edgeTimeOutNum;
+ (_Bool)edgeEnable;
+ (_Bool)remoteRecEnable;
+ (id)recPackSsdConfig;
+ (id)recPackXFuNetConfig;
+ (id)createFileUpdateConfig:(id)arg1;
+ (_Bool)matchTimestamp:(long long)arg1 end:(long long)arg2;
+ (id)defaultManager;
@property(nonatomic) _Bool showStatusBar; // @synthesize showStatusBar=_showStatusBar;
@property(nonatomic) _Bool upgradeUI; // @synthesize upgradeUI=_upgradeUI;
@property(retain, nonatomic) ARHMCodeConfig *arHMCodeConfig; // @synthesize arHMCodeConfig=_arHMCodeConfig;
@property(retain, nonatomic) ARTabConfig *arTabConfig; // @synthesize arTabConfig=_arTabConfig;
@property(retain, nonatomic) ARIntroduceYearConfig *introduceYearConfig; // @synthesize introduceYearConfig=_introduceYearConfig;
@property(retain, nonatomic) AREventConfig *eventConfig; // @synthesize eventConfig=_eventConfig;
@property(retain, nonatomic) ARActivityConfig *activityConfig; // @synthesize activityConfig=_activityConfig;
- (void).cxx_destruct;
- (id)spCodeBinarizerOrder;
- (double)spCodeClipRatio;
- (_Bool)spCodeUseEmbedCfg;
- (_Bool)spCodeEnabled;
- (id)getHMCodeConfig;
- (long long)getRecCapacity;
- (_Bool)showYearSkin;
- (_Bool)recognizeFu;
- (id)getARActivityConfig;
- (id)getARTabConfig;
- (id)getARIntroduceYearConfig;
- (id)getAREventConfig;
- (void)reload;

@end

