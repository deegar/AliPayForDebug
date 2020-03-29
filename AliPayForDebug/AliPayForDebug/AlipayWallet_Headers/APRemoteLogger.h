//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface APRemoteLogger : NSObject
{
}

+ (void)globalClickWithSpm:(id)arg1 seq:(id)arg2 hash:(id)arg3;
+ (void)setNextPageOpenId:(id)arg1;
+ (void)deallocPageWithSpm:(id)arg1 pageId:(id)arg2 hash:(id)arg3 pageType:(long long)arg4;
+ (void)endPageWithSpm:(id)arg1 pageId:(id)arg2 hash:(id)arg3 pageType:(long long)arg4;
+ (id)getCurrentReferDictWithHash:(id)arg1 pageType:(long long)arg2;
+ (void)setCurrentSpm:(id)arg1 pageId:(id)arg2 hash:(id)arg3 pageType:(long long)arg4;
+ (id)spmtrackerConfig;
+ (id)glabalPageParamsWithWithIndex:(id)arg1 pageType:(long long)arg2;
+ (void)setApplicationParams:(id)arg1 forIndex:(id)arg2 pageType:(long long)arg3;
+ (void)setPageParams:(id)arg1 forIndex:(id)arg2 traceStep:(unsigned long long)arg3 isForce:(_Bool)arg4 pageType:(long long)arg5;
+ (void)endPageWithSpm:(id)arg1 pageId:(id)arg2 index:(id)arg3 pageType:(long long)arg4;
+ (id)getCurrentReferDictWithIndex:(id)arg1 pageType:(long long)arg2;
+ (void)setCurrentSpm:(id)arg1 pageId:(id)arg2 index:(id)arg3 pageType:(long long)arg4;
+ (void)writeLogWithCustomContent:(id)arg1 bizType:(id)arg2;
+ (void)writeLogWithLogDictionary:(id)arg1;
+ (id)convertToStringFromDictionary:(id)arg1 kvSeparator:(id)arg2 componentsSeparator:(id)arg3;
+ (id)convertToStringFromArray:(id)arg1;
+ (id)descriptionFromDictionary:(id)arg1;
+ (id)convertToStringFromExtDictionary:(id)arg1;
+ (long long)levelNumberForString:(id)arg1;
+ (void)protectExtentionParams:(id)arg1;
+ (id)timeIntervalSinceAutoEventDate;
+ (id)stringWithDate:(id)arg1;
+ (_Bool)isHistoryLogFileChecked;
+ (void)upload;
+ (_Bool)statusForSendLogSwitch:(id)arg1;
+ (_Bool)statusForWriteLogSwitch:(id)arg1;
+ (id)switchValueForKey:(id)arg1;
+ (void)setSwitchDict:(id)arg1;
+ (void)setSwitchValue:(id)arg1 forKey:(id)arg2;
+ (void)addPeriodicallyExecutedBlock:(CDUnknownBlockType)arg1;
+ (void)setFoundationExtended:(id)arg1;
+ (void)resetCurrentPageId:(id)arg1;
+ (id)currentPageId;
+ (id)currentFullGuideDicts;
+ (id)currentSrcSpm;
+ (id)nextOpenId;
+ (id)nextPageChinfoDict;
+ (id)nextPageFullGideDict;
+ (id)currentRefer;
+ (id)currentAutoRefer;
+ (void)setLastClickSpm:(id)arg1;
+ (id)lastClickSpm;
+ (id)currentPageInfo;
+ (id)currentSubAppID;
+ (id)lastPageID;
+ (id)currentPageID;
+ (id)currentActionControlID;
+ (unsigned long long)tokenTimestamp;
+ (id)currentActionToken;
+ (id)logPageMonitorType;
+ (void)logPageMonitorWithMonitorType:(id)arg1;
+ (void)logPageStartWithPageId:(id)arg1 appId:(id)arg2 sourceAppId:(id)arg3 pageName:(id)arg4;
+ (void)logAutoEventWithActionType:(id)arg1 extInfo:(id)arg2;
+ (void)logAutoEventWithActionType:(id)arg1 previous:(id)arg2 stayTime:(id)arg3;
+ (void)logAutoEventWithBizType:(id)arg1 params:(id)arg2;
+ (void)logPageEndRenderWithPageName:(id)arg1;
+ (void)logPageBeginRenderWithPageName:(id)arg1;
+ (void)pageDidFinishInitializing;
+ (void)APWriteNetLog:(id)arg1 size:(id)arg2 type:(id)arg3 owner:(id)arg4 extDict:(id)arg5;
+ (void)SLWriteMonitorLog:(id)arg1 appID:(id)arg2 monitorType:(id)arg3 subMonitorType:(id)arg4;
+ (id)bizTypeForPerformanceLogType:(int)arg1;
+ (void)writePerformanceLogWithBizType:(id)arg1 subType:(id)arg2 extraParams:(id)arg3 actionControlID:(id)arg4 actionToken:(id)arg5 formatterDictionary:(id)arg6 perUploadNum:(unsigned long long)arg7;
+ (void)writePerformanceLogWithType:(int)arg1 subType:(id)arg2 extraParams:(id)arg3 actionControlID:(id)arg4 actionToke:(id)arg5 perUploadNum:(unsigned long long)arg6;
+ (void)writePerformanceLogWithType:(int)arg1 subType:(id)arg2 extraParams:(id)arg3 actionControlID:(id)arg4 actionToke:(id)arg5;
+ (void)writeWithType:(int)arg1 subType:(id)arg2 paramArray:(id)arg3 perUploadNum:(unsigned long long)arg4;
+ (void)writePerformanceLogWithType:(int)arg1 subType:(id)arg2 extraParams:(id)arg3 formatterDictionary:(id)arg4 perUploadNum:(unsigned long long)arg5;
+ (void)writePerformanceLogWithType:(int)arg1 subType:(id)arg2 extraParams:(id)arg3;
+ (void)writePerformanceLogWithBizType:(id)arg1 subType:(id)arg2 extraParams:(id)arg3 formatterDictionary:(id)arg4 perUploadNum:(unsigned long long)arg5;
+ (void)logPerformance:(id)arg1;
+ (void)checkCrashLogWithCompletionBlock:(CDUnknownBlockType)arg1;
+ (void)writeOOMLog:(id)arg1 state:(id)arg2;
+ (void)writeCrashLog:(id)arg1 state:(id)arg2 innerVersion:(id)arg3;
+ (id)currentExtensionInfoWithCrashedThead:(unsigned int)arg1;
+ (id)stateWhenCrashed:(id)arg1 thread:(unsigned int)arg2 ucontext:(void *)arg3;
+ (void)writeExceptionWithAppStack:(id)arg1 subType:(id)arg2 extraParam:(id)arg3 bizType:(id)arg4;
+ (void)writeCrashLog:(id)arg1 vcStack:(id)arg2;
+ (void)addSpmPage:(id)arg1;
+ (void)resetPageMonitorContext;
+ (id)pageInfomationForIndex:(id)arg1 forType:(long long)arg2;
+ (id)spmIdForIndex:(id)arg1;
+ (id)pageIdTimestampForIndex:(id)arg1;
+ (id)pageIdForIndex:(id)arg1;
+ (void)logPageEndWithSpmId:(id)arg1 index:(id)arg2 bizType:(id)arg3 param:(id)arg4;
+ (void)logPageStartWithSpmId:(id)arg1 index:(id)arg2;
+ (void)writeLogWithActionId:(id)arg1 extParams:(id)arg2 appId:(id)arg3 seed:(id)arg4 ucId:(id)arg5 bizType:(id)arg6 formatterDictionary:(id)arg7;
+ (void)writeLogWithActionId:(id)arg1 extParams:(id)arg2 appId:(id)arg3 seed:(id)arg4 ucId:(id)arg5 bizType:(id)arg6;
+ (void)writeLogWithActionId:(id)arg1 extParams:(id)arg2 appId:(id)arg3 seed:(id)arg4 ucId:(id)arg5;
+ (void)logBehavior:(id)arg1;
+ (void)load;
+ (void)pageDidFinishInitializing;
+ (id)currentAutoRefer;
+ (void)discoveryLogWithActionId:(id)arg1 appId:(id)arg2 seed:(id)arg3 bizType:(id)arg4 extParams:(id)arg5;
+ (void)globalClickWithSpm:(id)arg1 seq:(id)arg2 hash:(id)arg3;
+ (void)setNextPageOpenId:(id)arg1;
+ (void)deallocPageWithSpm:(id)arg1 pageId:(id)arg2 hash:(id)arg3 pageType:(long long)arg4;
+ (void)endPageWithSpm:(id)arg1 pageId:(id)arg2 hash:(id)arg3 pageType:(long long)arg4;
+ (id)getCurrentReferDictWithHash:(id)arg1 pageType:(long long)arg2;
+ (void)setCurrentSpm:(id)arg1 pageId:(id)arg2 hash:(id)arg3 pageType:(long long)arg4;
+ (id)spmtrackerConfig;
+ (id)glabalPageParamsWithWithIndex:(id)arg1 pageType:(long long)arg2;
+ (void)setApplicationParams:(id)arg1 forIndex:(id)arg2 pageType:(long long)arg3;
+ (void)setPageParams:(id)arg1 forIndex:(id)arg2 traceStep:(unsigned long long)arg3 isForce:(_Bool)arg4 pageType:(long long)arg5;
+ (void)endPageWithSpm:(id)arg1 pageId:(id)arg2 index:(id)arg3 pageType:(long long)arg4;
+ (id)getCurrentReferDictWithIndex:(id)arg1 pageType:(long long)arg2;
+ (void)setCurrentSpm:(id)arg1 pageId:(id)arg2 index:(id)arg3 pageType:(long long)arg4;
+ (void)setupConfig;
+ (void)setMLastPageInfo:(id)arg1;
+ (id)mLastPageInfo;
+ (void)setMPageInfo:(id)arg1;
+ (id)mPageInfo;
+ (id)handlePageParams:(id)arg1 view:(id)arg2;
+ (_Bool)isBack:(id)arg1 spmId:(id)arg2;
+ (void)safelySetDict:(id)arg1 withPageParams:(id)arg2 andKey:(id)arg3;
+ (void)manualPageEndWithSpmId:(id)arg1 index:(id)arg2 bizType:(id)arg3 param:(id)arg4;
+ (void)manualPageStartWithSpmId:(id)arg1 index:(id)arg2 pageType:(long long)arg3;
+ (void)handleApplicationParmas:(id)arg1 newPageInfo:(id)arg2 isJustRead:(_Bool)arg3;
+ (id)nextOpenId;
+ (id)currentFullGuideDicts;
+ (id)currentSrcSpm;
+ (id)nextPageChinfoDict;
+ (id)nextPageFullGideDict;
+ (id)currentRefer;
+ (id)currentPageId;
+ (void)setLastClickSpm:(id)arg1;
+ (void)setLastClickSpm:(id)arg1 shouldCallGlobalClick:(_Bool)arg2;
+ (id)lastClickSpm;
+ (id)currentPageInfo;
+ (id)pageInfomationForIndex:(id)arg1 forType:(long long)arg2;
+ (id)spmIdForIndex:(id)arg1;
+ (id)pageIdTimestampForIndex:(id)arg1;
+ (id)pageIdForIndex:(id)arg1;
+ (void)logPageEndWithSpmId:(id)arg1 index:(id)arg2 bizType:(id)arg3 param:(id)arg4;
+ (void)logPageStartWithSpmId:(id)arg1 index:(id)arg2 pageType:(long long)arg3;
+ (void)logPageStartWithSpmId:(id)arg1 index:(id)arg2;

@end
