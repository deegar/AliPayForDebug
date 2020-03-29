//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class APCustomStorage, NSOperationQueue;

@interface APContactFriendManager : NSObject
{
    _Bool _isLoadingData;
    long long _hasFriendState;
    APCustomStorage *_storage;
    NSOperationQueue *_friendQueue;
}

+ (id)getContactInfoWithSyncDict:(id)arg1;
+ (id)getContactInfoWithMobileRelationFriendVO:(id)arg1;
+ (id)getContactInfoWithFriendVOPB:(id)arg1;
+ (id)getContactInfoWithFriendVO:(id)arg1;
@property(retain, nonatomic) NSOperationQueue *friendQueue; // @synthesize friendQueue=_friendQueue;
@property(retain, nonatomic) APCustomStorage *storage; // @synthesize storage=_storage;
@property(nonatomic) _Bool isLoadingData; // @synthesize isLoadingData=_isLoadingData;
@property(nonatomic) long long hasFriendState; // @synthesize hasFriendState=_hasFriendState;
- (void).cxx_destruct;
- (void)myInfoDidChange:(id)arg1;
- (void)friendDataDidChange:(id)arg1;
- (void)becomeFriendFromChat:(id)arg1;
- (void)registerFriendSyncService;
- (void)orginizeFriendData:(id)arg1;
- (void)queryAllUnusualFriendData:(CDUnknownBlockType)arg1;
- (void)queryHasFriendData:(CDUnknownBlockType)arg1;
- (void)queryAllMyFriendData:(CDUnknownBlockType)arg1;
- (void)handleSocialTags:(id)arg1;
- (void)handleAllFriendPBResult:(id)arg1;
- (id)findAllMyFriend_New;
- (void)queryAllBlackFriendData:(CDUnknownBlockType)arg1;
- (void)queryAllFriendDataWithCallBack:(CDUnknownBlockType)arg1;
- (void)loadMySelf;
- (void)startLoadAllFriends;
- (_Bool)isLoadAllFriendTimeExpried;
- (void)judgeToLoadAllFriends;
- (void)dealloc;
- (id)init;

@end

