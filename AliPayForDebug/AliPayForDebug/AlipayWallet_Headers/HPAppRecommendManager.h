//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DTRpcAsyncCaller, NSArray, NSMutableDictionary;

@interface HPAppRecommendManager : NSObject
{
    double _clickExpirySeconds;
    long long _clickEffectiveTimes;
    NSArray *_recommendAppIdList;
    NSArray *_alternativeAppIdList;
    NSMutableDictionary *_alternativeAppInfos;
    CDUnknownBlockType _viewCompletion;
    CDUnknownBlockType _appCompletion;
    DTRpcAsyncCaller *_asyncCaller;
}

+ (void)clearCachedAppIdList;
+ (void)resetAddToHomeFatigueWithAppId:(id)arg1;
@property(retain, nonatomic) DTRpcAsyncCaller *asyncCaller; // @synthesize asyncCaller=_asyncCaller;
@property(copy, nonatomic) CDUnknownBlockType appCompletion; // @synthesize appCompletion=_appCompletion;
@property(copy, nonatomic) CDUnknownBlockType viewCompletion; // @synthesize viewCompletion=_viewCompletion;
@property(retain, nonatomic) NSMutableDictionary *alternativeAppInfos; // @synthesize alternativeAppInfos=_alternativeAppInfos;
@property(retain, nonatomic) NSArray *alternativeAppIdList; // @synthesize alternativeAppIdList=_alternativeAppIdList;
@property(retain, nonatomic) NSArray *recommendAppIdList; // @synthesize recommendAppIdList=_recommendAppIdList;
@property(nonatomic) long long clickEffectiveTimes; // @synthesize clickEffectiveTimes=_clickEffectiveTimes;
@property(nonatomic) double clickExpirySeconds; // @synthesize clickExpirySeconds=_clickExpirySeconds;
- (void).cxx_destruct;
- (void)clearCachedAppIdList;
- (void)resetAddToHomeFatigueWithAppId:(id)arg1;
- (void)getRecommendApp;
- (void)setAlternativeInfo:(id)arg1;
- (void)getAppRecommendViewWithAppList:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getRecommendAppWithAppList:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)requestRecommendAppList;
- (_Bool)needReqeust;
- (void)setupAddAppToHomeFatigue;
- (void)dealloc;
- (id)init;

@end

