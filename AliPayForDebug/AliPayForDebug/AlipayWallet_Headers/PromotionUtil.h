//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface PromotionUtil : NSObject
{
}

+ (void)sampleForAlixForSpaceInfo:(id)arg1 objectInfo:(id)arg2 label:(id)arg3;
+ (id)jsApiResultsRemovePrivateParams:(id)arg1;
+ (_Bool)ignoreCheckLang:(id)arg1;
+ (id)currentLanguage;
+ (void)resumeObjectViewAnimation:(id)arg1 spaceInfo:(id)arg2;
+ (void)stopObjectViewAnimation:(id)arg1 spaceInfo:(id)arg2;
+ (void)resetVersionForUserData;
+ (_Bool)versionChangedForUserData;
+ (id)bizContainerView:(id)arg1;
+ (id)allResKeys;
+ (void)allResIdsForResKey:(id)arg1 objectInfo:(id)arg2 complete:(CDUnknownBlockType)arg3;
+ (void)paramsWithObjectInfo:(id)arg1 complete:(CDUnknownBlockType)arg2;
+ (void)drawTextInImage:(id)arg1 jsonDic:(id)arg2;
+ (id)makeTextMixImage:(id)arg1 jsonDic:(id)arg2;
+ (_Bool)isWiFiNetwork;
+ (id)getO2OLocationInfo;
+ (void)lbsCallBack:(CDUnknownBlockType)arg1;
+ (id)getCurrentTopViewController;
+ (id)getAppId:(id)arg1;
+ (void)startApp:(id)arg1 title:(id)arg2 hideTitleBar:(_Bool)arg3 animated:(_Bool)arg4;
+ (id)hexStringToColor:(id)arg1 defaultColorString:(id)arg2 alpha:(double)arg3;
+ (_Bool)isCurrentMonth:(long long)arg1;
+ (_Bool)isCurrentWeek:(long long)arg1;
+ (_Bool)isCurrentDay:(long long)arg1;
+ (id)getCurrentUserId;
+ (long long)getAppStartUpTime;
+ (long long)getNowTime:(_Bool)arg1;

@end

