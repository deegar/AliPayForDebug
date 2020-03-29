//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class APCustomStorage, NSMutableDictionary, NSString;
@protocol APGroupInfoDAOProxy, APGroupNickNameDAOProxy;

@interface APGroupLocalDataManager : NSObject
{
    id <APGroupInfoDAOProxy> _groupInfoDAO;
    id <APGroupNickNameDAOProxy> _nickNameDAO;
    _Bool _didCacheAll;
    _Bool _isCachingAll;
    APCustomStorage *_storage;
    NSMutableDictionary *_cacheStorage;
    NSString *_currentUserId;
}

+ (id)shareInstance;
@property(retain, nonatomic) NSString *currentUserId; // @synthesize currentUserId=_currentUserId;
@property(nonatomic) _Bool isCachingAll; // @synthesize isCachingAll=_isCachingAll;
@property(nonatomic) _Bool didCacheAll; // @synthesize didCacheAll=_didCacheAll;
@property(retain, nonatomic) NSMutableDictionary *cacheStorage; // @synthesize cacheStorage=_cacheStorage;
@property(retain, nonatomic) APCustomStorage *storage; // @synthesize storage=_storage;
- (void).cxx_destruct;
- (_Bool)markGroupNoticeDidsplayed:(id)arg1;
- (_Bool)markGroupNoticeRead:(id)arg1;
- (_Bool)updateGroupNotice:(id)arg1 notice:(id)arg2 isRead:(_Bool)arg3;
- (_Bool)updateGroupNotice:(id)arg1 notice:(id)arg2;
- (id)queryGroupNickNameWithIDs:(id)arg1;
- (id)selectGroupInfoWithUID:(id)arg1;
- (void)deleteAPGroupInfos:(id)arg1;
- (void)deleteAPGroupInfo:(id)arg1;
- (id)selectContactGroupInfoList;
- (id)selectAPGroupInfoDict;
- (id)selectAPGroupInfoList;
- (id)selectAPGroupInfoListOrderByIds:(id)arg1;
- (id)selectAPGroupInfoList:(id)arg1;
- (id)selectAPGroupInfo:(id)arg1;
- (id)getNickNameItemWithGroupInfo:(id)arg1;
- (id)insertAPGroupInfoList:(id)arg1;
- (void)insertAPGroupInfo:(id)arg1;
- (id)selectCacheGroup:(id)arg1;
- (void)deleteCacheGroups:(id)arg1;
- (void)deleteCacheGroup:(id)arg1;
- (void)insertCacheGroups:(id)arg1;
- (void)cacheAllGroups;
- (void)responseApplicationMemoryWarningNotification:(id)arg1;
- (void)responseLoginDidFinishNotification:(id)arg1;
- (id)getSearchNickDictWithArguments:(id)arg1;
- (id)getSearchDictWithArguments:(id)arg1;
- (void)registerGroupGlobeSearch;
- (void)clearCache;
- (void)dealloc;
- (id)init;

@end
