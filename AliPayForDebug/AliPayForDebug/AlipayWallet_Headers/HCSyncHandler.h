//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface HCSyncHandler : NSObject
{
}

+ (id)syncHandler;
- (id)rmDirtySyncFeedVO:(id)arg1 type:(_Bool)arg2;
- (id)hcCategoryPBVOFromCategoryPbVO:(id)arg1 withTraceId:(id)arg2;
- (void)clearCards:(id)arg1;
- (id)queryFeedIdsFrom:(id)arg1 bizType:(id)arg2 sceneCode:(id)arg3 cardlist:(id)arg4;
- (id)queryFeedIdsFromContentId:(id)arg1 cardlist:(id)arg2;
- (id)queryCardFromCardList:(id)arg1 feedId:(id)arg2;
- (id)queryCategoryCardWithFeedId:(id)arg1;
- (id)queryHomeFeedIdsFrom:(id)arg1 bizType:(id)arg2 startTime:(id)arg3 endTime:(id)arg4;
- (id)queryHomeCategoryFeedIds:(id)arg1 startTime:(id)arg2 endTime:(id)arg3;
- (id)queryHomeFeedIdsFrom:(id)arg1 bizType:(id)arg2 categoryCode:(id)arg3 ScenCode:(id)arg4;
- (id)SyncFeedVOFromData:(id)arg1;
- (void)onHandler_UCF_HCNO_SYNC:(id)arg1;
- (void)onHandler_CardNewOptions:(id)arg1;
- (void)onHandler_UCF_HCCO_SYNC:(id)arg1;
- (void)onHandler_UCF_DEL_G_SYNC:(id)arg1;
- (void)addSync;
- (void)dealloc;
- (id)init;
- (id)homeDataManager;

@end

