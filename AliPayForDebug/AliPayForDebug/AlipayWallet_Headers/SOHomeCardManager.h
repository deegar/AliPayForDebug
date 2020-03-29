//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class APCustomStorage;
@protocol SOHomeCardDAO;

@interface SOHomeCardManager : NSObject
{
    APCustomStorage *_storage;
    id <SOHomeCardDAO> _sohomeCardDAO;
}

+ (id)sortHomeCardList:(id)arg1;
+ (id)shareHomeCardManager;
+ (id)shareTimelineCardManager;
@property(retain, nonatomic) id <SOHomeCardDAO> sohomeCardDAO; // @synthesize sohomeCardDAO=_sohomeCardDAO;
@property(retain, nonatomic) APCustomStorage *storage; // @synthesize storage=_storage;
- (void).cxx_destruct;
- (void)postCardNotification:(id)arg1 state:(int)arg2 userInfo:(id)arg3;
- (void)handleApplicationDidEnterBackgroundNotification:(id)arg1;
- (id)daoSelectValidCardListWithLimit:(id)arg1;
- (id)daoSelectAllValidCardCount;
- (id)daoSelectAllLocalCard;
- (id)daoSelectTopCardList;
- (id)daoSelectCardListWithBizNos:(id)arg1 bizTypes:(id)arg2 sceneCodes:(id)arg3;
- (id)daoUpdateCardTemplateData:(id)arg1 clientId:(id)arg2;
- (id)daoUpdateCardList:(id)arg1;
- (id)daoSelectAllInvalidCard;
- (id)daoCleanAllCard;
- (id)daoSelectCardWithCardIdList:(id)arg1;
- (id)daoSelectCardWithClientIdList:(id)arg1;
- (id)daoSelectAllCard;
- (id)daoDeleteCardWithClientIdList:(id)arg1;
- (id)daoInsertCardList:(id)arg1;
- (id)selectTopCardList;
- (void)cleanInvalidTopCard;
- (void)updateCardList:(id)arg1 notification:(_Bool)arg2 needSync:(_Bool)arg3 biz:(id)arg4;
- (void)updateCardList:(id)arg1 notification:(_Bool)arg2 needSync:(_Bool)arg3;
- (id)selectCardListWithBizNos:(id)arg1 bizTypes:(id)arg2 sceneCodes:(id)arg3;
- (id)selectCardListWithClientIdList:(id)arg1;
- (id)selectAllCardWithLimit:(id)arg1;
- (id)selectAllLocalCard;
- (id)selectAllCard;
- (void)deleteCardWithClientIdList:(id)arg1 notification:(_Bool)arg2 needSync:(_Bool)arg3 biz:(id)arg4;
- (void)deleteCardWithClientIdList:(id)arg1 notification:(_Bool)arg2 needSync:(_Bool)arg3;
- (id)insertCardList:(id)arg1 needClean:(_Bool)arg2 notification:(_Bool)arg3 needSync:(_Bool)arg4 biz:(id)arg5;
- (id)insertCardList:(id)arg1 needClean:(_Bool)arg2 notification:(_Bool)arg3 needSync:(_Bool)arg4;
- (id)initHomeCardManager;
- (void)dealloc;
- (id)init;
- (id)initTimelineCardManager;
- (void)daoMergeDBTo10012;

@end

