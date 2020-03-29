//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class APSearchManager, NSMutableArray;
@protocol OS_dispatch_queue;

@interface TFTransferInfoFilter : NSObject
{
    NSObject<OS_dispatch_queue> *_filterQueue;
    NSObject *_lock;
    _Bool _isStop;
    _Bool _isFiltering;
    _Bool _updateSearchFilter;
    APSearchManager *_bankSearchManager;
    NSMutableArray *_searchFilterRecords;
}

@property(retain, nonatomic) NSMutableArray *searchFilterRecords; // @synthesize searchFilterRecords=_searchFilterRecords;
@property(retain, nonatomic) APSearchManager *bankSearchManager; // @synthesize bankSearchManager=_bankSearchManager;
@property(nonatomic) _Bool updateSearchFilter; // @synthesize updateSearchFilter=_updateSearchFilter;
@property(nonatomic) _Bool isStop; // @synthesize isStop=_isStop;
@property(nonatomic) _Bool isFiltering; // @synthesize isFiltering=_isFiltering;
- (void).cxx_destruct;
- (void)updateSearchFilters:(id)arg1;
- (id)getBankInfoSearchManager;
- (void)searchBanksByKeyword:(id)arg1 inBankAry:(id)arg2 block:(CDUnknownBlockType)arg3;
- (id)init;

@end

