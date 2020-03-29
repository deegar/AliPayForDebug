//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CLRecommendInfoItem, NSArray, NSMutableArray, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface CLRecommendManager : NSObject
{
    NSObject<OS_dispatch_semaphore> *_updateSemaphore;
    NSObject<OS_dispatch_queue> *_dataQueue;
    NSString *_currentUserId;
    CLRecommendInfoItem *_localFriendItem;
    NSMutableArray *_topArray;
    NSMutableArray *_normalArray;
    NSMutableDictionary *_recommendDic;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSMutableDictionary *recommendDic; // @synthesize recommendDic=_recommendDic;
@property(retain, nonatomic) NSMutableArray *normalArray; // @synthesize normalArray=_normalArray;
@property(retain, nonatomic) NSMutableArray *topArray; // @synthesize topArray=_topArray;
@property(retain, nonatomic) CLRecommendInfoItem *localFriendItem; // @synthesize localFriendItem=_localFriendItem;
@property(retain, nonatomic) NSString *currentUserId; // @synthesize currentUserId=_currentUserId;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dataQueue; // @synthesize dataQueue=_dataQueue;
- (void).cxx_destruct;
- (void)clearMemory;
- (void)insertNormalItem:(id)arg1;
- (void)insertTopItem:(id)arg1;
- (void)updateLoaclItem:(id)arg1;
- (void)readDataFromDB;
@property(readonly, nonatomic) CLRecommendInfoItem *friendMomentItem;
- (_Bool)updateFixedItem:(id)arg1;
@property(readonly, nonatomic) NSMutableArray *recommendArray;
@property(readonly, nonatomic) NSArray *normalItems;
@property(readonly, nonatomic) NSArray *topItems;
- (void)reloadData;
- (void)deleteAllItemsKeepTopLogic:(_Bool)arg1;
- (id)itemById:(id)arg1;
- (void)deleteItemById:(id)arg1;
- (void)cancelTopItem:(id)arg1;
- (void)makeTopItem:(id)arg1;
- (void)updateRecommendItems:(id)arg1;
- (void)updateItem:(id)arg1;
- (void)migrateRecommendItemsFromSocial:(id)arg1;
- (void)didChangedAccount;
- (void)markAllAsRead;
- (void)unlockUpdateSemaphore;
- (void)lockUpdateSemaphore;
- (id)init;

@end

