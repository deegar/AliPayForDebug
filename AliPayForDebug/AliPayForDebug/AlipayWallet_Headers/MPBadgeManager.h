//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MPBadgeViewDelegate-Protocol.h"

@class NSMutableArray, NSMutableDictionary, NSRecursiveLock, NSString;
@protocol MPBadgeDaoProtocol, MPBadgeServiceConfig;

@interface MPBadgeManager : NSObject <MPBadgeViewDelegate>
{
    NSMutableArray *_badgeMessages;
    NSMutableArray *_localBadgeMessages;
    NSMutableDictionary *_badgeMap;
    NSMutableArray *_badgeWidgets;
    NSRecursiveLock *_badgeMessagesLock;
    NSRecursiveLock *_localBadgeMessagesLock;
    NSRecursiveLock *_badgeMapLock;
    NSString *_userId;
    id <MPBadgeDaoProtocol> _proxy;
    id <MPBadgeServiceConfig> _badgeConfig;
}

+ (id)sharedInstance;
@property(retain, nonatomic) id <MPBadgeServiceConfig> badgeConfig; // @synthesize badgeConfig=_badgeConfig;
- (void).cxx_destruct;
- (_Bool)hasBadge:(id)arg1 userId:(id)arg2;
- (void)refreshBadgeViewStyle:(id)arg1;
- (void)refreshBadgeView:(id)arg1;
- (void)getBadgeDataFromLocalCache;
- (void)postBadgeUpdateNotification;
- (void)setBadgeStyle:(id)arg1 style:(id)arg2;
- (_Bool)addBadgeMessageLocalData:(id)arg1;
- (_Bool)updateBadgeMessageRemoteData:(id)arg1 mode:(long long)arg2;
- (void)refreshWidgets;
- (void)updateLocalDataWithLocalData:(id)arg1;
- (void)deleteBadgeDataWithRemoteData:(id)arg1;
- (void)addBadgeDataWithRemoteData:(id)arg1;
- (void)updateLocalDataWithRemoteDataAndRefresh:(id)arg1 mode:(long long)arg2;
- (id)findMessagesByWidgetIdInLocalData:(id)arg1 isLeaf:(_Bool)arg2;
- (id)findMessagesByWidgetIdInRemoteData:(id)arg1 isLeaf:(_Bool)arg2;
- (_Bool)tapBadgeViewInLocalData:(id)arg1;
- (_Bool)tapBadgeViewInRemoteData:(id)arg1;
- (void)updateWidget;
- (void)refreshAllWidgets;
- (void)insertLocalBadgeInfo:(id)arg1;
- (void)deleteRemoteBadgeInfo:(id)arg1;
- (void)modifyRemoteBadgeInfo:(id)arg1;
- (void)insertRemoteBadgeInfo:(id)arg1;
- (id)badgeCountDetailWithWidgetId:(id)arg1;
- (unsigned long long)badgeCountWithWidgetId:(id)arg1;
- (unsigned long long)badgeCountWithBizId:(id)arg1;
- (id)badgeInfoWithBadgeId:(id)arg1;
- (void)clearBadgeWithWidgetId:(id)arg1;
- (void)tapBadgeViewWithWidgetId:(id)arg1;
- (void)tapBadgeView:(id)arg1;
- (void)unregisterBadgeView:(id)arg1;
- (void)registerBadgeView:(id)arg1;
- (void)clearAllBadges;
- (void)refreshAfterLogin:(id)arg1;
- (void)setBadgeServiceConfig:(id)arg1;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

