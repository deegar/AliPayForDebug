//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class APRWLock, NSMutableDictionary, SPProfileInfoDAO;

@interface SPProfileInfoManager : NSObject
{
    SPProfileInfoDAO *_profileDAO;
    APRWLock *_rwLock;
    NSMutableDictionary *_profileCache;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSMutableDictionary *profileCache; // @synthesize profileCache=_profileCache;
@property(retain, nonatomic) APRWLock *rwLock; // @synthesize rwLock=_rwLock;
@property(retain, nonatomic) SPProfileInfoDAO *profileDAO; // @synthesize profileDAO=_profileDAO;
- (void).cxx_destruct;
- (void)deleteProfileInfoFromCacheWith:(id)arg1;
- (void)updateCachedProfileInfoListIfNotExistWith:(id)arg1;
- (void)updateCachedProfileInfoListWith:(id)arg1;
- (id)getCachedProfileInfoWith:(id)arg1 copy:(_Bool)arg2;
- (_Bool)insertOrUpdateProfileInfo:(id)arg1;
- (id)queryInfoWithUserId:(id)arg1;
- (id)init;

@end

