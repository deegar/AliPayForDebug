//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "APConfigObserverProtocol-Protocol.h"

@class APCustomStorage, NSDictionary, NSLock, NSMutableArray, NSMutableDictionary, NSNumber, NSOperationQueue, NSString;
@protocol GTDMessageProxy;

@interface GTDLocalDataManager : NSObject <APConfigObserverProtocol>
{
    NSDictionary *_config;
    NSString *_currentUserId;
    APCustomStorage *_storage;
    id <GTDMessageProxy> _messageProxy;
    NSOperationQueue *_sortQueue;
    NSLock *_msgLock;
    NSMutableDictionary *_cacheMsgDictionary;
    NSMutableDictionary *_cacheRecentSessionDictionary;
    NSMutableArray *_cacheRecentSessionArray;
    NSNumber *_cacheHasDoneMessage;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSNumber *cacheHasDoneMessage; // @synthesize cacheHasDoneMessage=_cacheHasDoneMessage;
@property(retain, nonatomic) NSMutableArray *cacheRecentSessionArray; // @synthesize cacheRecentSessionArray=_cacheRecentSessionArray;
@property(retain, nonatomic) NSMutableDictionary *cacheRecentSessionDictionary; // @synthesize cacheRecentSessionDictionary=_cacheRecentSessionDictionary;
@property(retain, nonatomic) NSMutableDictionary *cacheMsgDictionary; // @synthesize cacheMsgDictionary=_cacheMsgDictionary;
@property(retain, nonatomic) NSLock *msgLock; // @synthesize msgLock=_msgLock;
@property(retain, nonatomic) NSOperationQueue *sortQueue; // @synthesize sortQueue=_sortQueue;
@property(retain, nonatomic) id <GTDMessageProxy> messageProxy; // @synthesize messageProxy=_messageProxy;
@property(retain, nonatomic) APCustomStorage *storage; // @synthesize storage=_storage;
@property(copy, nonatomic) NSString *currentUserId; // @synthesize currentUserId=_currentUserId;
@property(copy, nonatomic) NSDictionary *config; // @synthesize config=_config;
- (void).cxx_destruct;
- (id)insertMessageList:(id)arg1 sync:(_Bool)arg2;
- (id)insertMessageList:(id)arg1;
- (id)insertMessage:(id)arg1;
- (void)deleteMessagesWithGroupId:(id)arg1;
- (void)deleteNotDoneMessagesWithGroupId:(id)arg1;
- (void)deleteMessageWithMessageIdList:(id)arg1 updateDoneIfNeeded:(_Bool)arg2;
- (void)deleteMessageWithMessageIdList:(id)arg1;
- (void)deleteMessageWithMessageId:(id)arg1;
- (id)queryAllValidMessageListFromDate:(id)arg1 limit:(long long)arg2;
- (id)queryAllMessageList;
- (id)queryMessageListWithGroupId:(id)arg1;
- (void)markMessageAsDoneByMsgId:(id)arg1;
- (_Bool)queryHasDoneMessage;
- (id)calculateMsgListWithGroupId:(id)arg1;
- (id)queryMessageWithMsgId:(id)arg1;
- (id)queryRecentSessionWithGroupId:(id)arg1;
- (void)queryRecentSessionWithCallback:(CDUnknownBlockType)arg1;
- (id)queryRecentSession;
- (void)postMessageUpdateNotification;
- (id)generateRecentWithGroupId:(id)arg1 msgs:(id)arg2;
- (void)refreshCache;
- (void)clearAndReload;
- (void)loadCachedData;
@property(readonly, nonatomic) _Bool configEnabled;
@property(nonatomic) _Bool gtdEnabled;
- (void)userDidLogin:(id)arg1;
- (void)configChangedForKey:(id)arg1 value:(id)arg2;
- (void)setupObserver;
- (void)readConfig;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

