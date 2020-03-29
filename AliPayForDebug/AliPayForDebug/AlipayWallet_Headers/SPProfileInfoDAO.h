//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class APCustomStorage;
@protocol SPProfileInfoDAOProxy;

@interface SPProfileInfoDAO : NSObject
{
    APCustomStorage *_storage;
    id <SPProfileInfoDAOProxy> _proxy;
}

@property(readonly, nonatomic) id <SPProfileInfoDAOProxy> proxy; // @synthesize proxy=_proxy;
@property(retain, nonatomic) APCustomStorage *storage; // @synthesize storage=_storage;
- (void).cxx_destruct;
- (id)deleteProfilesWithUserIdArr:(id)arg1;
- (id)deleteProfileWithUserId:(id)arg1;
- (id)getTotalRecordsCount;
- (id)selectProfileInfoWithUserIdArr:(id)arg1;
- (id)selectProfileInfoWithUserId:(id)arg1;
- (id)insertProfileInfoList:(id)arg1;
- (id)insertProfileInfo:(id)arg1;
- (id)init;

@end

