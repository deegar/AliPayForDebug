//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBManagerBase.h"

@class CNContactStore;

@interface PBManager : PBManagerBase
{
    CNContactStore *_store;
}

+ (long long)checkAuth;
@property(retain, nonatomic) CNContactStore *store; // @synthesize store=_store;
- (void).cxx_destruct;
- (void)requestAuthWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)queryAllContactsSummaryWithComplete:(CDUnknownBlockType)arg1;
- (void)queryAllContactsWithComplete:(CDUnknownBlockType)arg1;
- (void)queryAllContactsOnlySummary:(_Bool)arg1 withComplete:(CDUnknownBlockType)arg2;
- (id)convert2PBPerson:(id)arg1 onlySummary:(_Bool)arg2;
- (id)init;

@end

