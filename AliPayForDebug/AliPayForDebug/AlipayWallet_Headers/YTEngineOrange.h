//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface YTEngineOrange : NSObject
{
    _Bool _pUseNewVPM;
    _Bool _pSmoothQualityEnable;
    _Bool _pSmoothQualityForFlvEnable;
    _Bool _pUseUPSCache;
    double _preAdTimeout;
    long long _pPlayMode;
    long long _pSmoothQualityForFlvOverImpairmentCount;
    long long _pSmoothQualityForFlvOverImpairmentQuickCount;
    long long _pSmoothQualityForFlvImpairmentQuickInterval;
    long long _pSmoothQualityForFlvImpairmentClearInterval;
    long long _pSmoothQualityDisableInDuration;
    long long _pBufferCheckTimes;
    long long _pBufferLenLimit;
    long long _pImpairmentTimeLimit;
    long long _pAutoSwitchRetryLimit;
    long long _pAutoSwitchRetryBufferLen;
    long long _pForecastUpsSecond;
    long long _pForecastUpsCount;
}

+ (id)sharedInstance;
@property(nonatomic) long long pForecastUpsCount; // @synthesize pForecastUpsCount=_pForecastUpsCount;
@property(nonatomic) long long pForecastUpsSecond; // @synthesize pForecastUpsSecond=_pForecastUpsSecond;
@property(nonatomic) _Bool pUseUPSCache; // @synthesize pUseUPSCache=_pUseUPSCache;
@property(nonatomic) long long pAutoSwitchRetryBufferLen; // @synthesize pAutoSwitchRetryBufferLen=_pAutoSwitchRetryBufferLen;
@property(nonatomic) long long pAutoSwitchRetryLimit; // @synthesize pAutoSwitchRetryLimit=_pAutoSwitchRetryLimit;
@property(nonatomic) long long pImpairmentTimeLimit; // @synthesize pImpairmentTimeLimit=_pImpairmentTimeLimit;
@property(nonatomic) long long pBufferLenLimit; // @synthesize pBufferLenLimit=_pBufferLenLimit;
@property(nonatomic) long long pBufferCheckTimes; // @synthesize pBufferCheckTimes=_pBufferCheckTimes;
@property(nonatomic) long long pSmoothQualityDisableInDuration; // @synthesize pSmoothQualityDisableInDuration=_pSmoothQualityDisableInDuration;
@property(nonatomic) long long pSmoothQualityForFlvImpairmentClearInterval; // @synthesize pSmoothQualityForFlvImpairmentClearInterval=_pSmoothQualityForFlvImpairmentClearInterval;
@property(nonatomic) long long pSmoothQualityForFlvImpairmentQuickInterval; // @synthesize pSmoothQualityForFlvImpairmentQuickInterval=_pSmoothQualityForFlvImpairmentQuickInterval;
@property(nonatomic) long long pSmoothQualityForFlvOverImpairmentQuickCount; // @synthesize pSmoothQualityForFlvOverImpairmentQuickCount=_pSmoothQualityForFlvOverImpairmentQuickCount;
@property(nonatomic) long long pSmoothQualityForFlvOverImpairmentCount; // @synthesize pSmoothQualityForFlvOverImpairmentCount=_pSmoothQualityForFlvOverImpairmentCount;
@property(nonatomic) _Bool pSmoothQualityForFlvEnable; // @synthesize pSmoothQualityForFlvEnable=_pSmoothQualityForFlvEnable;
@property(nonatomic) _Bool pSmoothQualityEnable; // @synthesize pSmoothQualityEnable=_pSmoothQualityEnable;
@property(nonatomic) _Bool pUseNewVPM; // @synthesize pUseNewVPM=_pUseNewVPM;
@property(nonatomic) long long pPlayMode; // @synthesize pPlayMode=_pPlayMode;
@property(nonatomic) double preAdTimeout; // @synthesize preAdTimeout=_preAdTimeout;
- (_Bool)playerHDLocalCache;
- (float)feedPreloadDelayTime;
- (_Bool)onePlayTimeShiftingProcess;
- (_Bool)useVipExtention;
- (_Bool)upsCompressOpen;
- (_Bool)upsNewInterfaceOpen;
- (_Bool)isPlayerPrePrepareOpen;
- (_Bool)isIrdetoDRMOpen;
- (_Bool)vrTypeOpen;
- (_Bool)isPrepareDoneSetTotalSecondsOpen;
- (_Bool)isDolbySdrOpen;
- (_Bool)isDolbyOpen;
- (_Bool)feedModeOpen;
- (_Bool)isPlayerStayLongOpen;
- (_Bool)isMultiUpsOpen;
- (long long)slicePreloadSize;
- (long long)maxCacheLightVideoItemCount;
- (long long)lightVideoItemLoseEfficacyTime;
- (_Bool)isH265Open;
- (long long)sumFromCommaStr:(id)arg1;
- (long long)loadingTimeOutDuration;
- (_Bool)isYTAdInstantPlayOpen;
- (_Bool)netcacheDiskAutoClearOpen;
- (long long)netcacheDiskSize;
@property(readonly, nonatomic) long long forecastUpsCount;
@property(readonly, nonatomic) long long forecastUpsSecond;
@property(readonly, nonatomic) _Bool useUPSCache;
@property(readonly, nonatomic) long long autoSwitchRetryBufferLen;
@property(readonly, nonatomic) long long autoSwitchRetryLimit;
@property(readonly, nonatomic) long long impairmentTimeLimit;
@property(readonly, nonatomic) long long bufferLenLimit;
@property(readonly, nonatomic) long long bufferCheckTimes;
@property(readonly, nonatomic) long long smoothQualityDisableInDuration;
@property(readonly, nonatomic) long long smoothQualityForFlvImpairmentClearInterval;
@property(readonly, nonatomic) long long smoothQualityForFlvImpairmentQuickInterval;
@property(readonly, nonatomic) long long smoothQualityForFlvOverImpairmentQuickCount;
@property(readonly, nonatomic) long long smoothQualityForFlvOverImpairmentCount;
@property(readonly, nonatomic) _Bool smoothQualityForFlvEnable;
@property(readonly, nonatomic) _Bool smoothQualityEnable;
@property(readonly, nonatomic) _Bool useNewVpm;
- (void)appDidFinishLanuchingDelay;
- (id)playerCoreDomain;
- (id)networkDomain;
- (void)setPlayMode:(long long)arg1;

@end

