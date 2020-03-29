//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSMutableArray;

@protocol VZListModel <NSObject>
@property(retain, nonatomic) NSMutableArray *objects;
@property(nonatomic) long long pageSize;
@property(nonatomic) long long totalCount;
@property(nonatomic) long long currentPageIndex;
@property(nonatomic) unsigned long long pageMode;
@property(nonatomic) long long sectionNumber;
@property(readonly, nonatomic) _Bool hasMore;
- (NSMutableArray *)responseObjects:(id)arg1;

@optional
@property(nonatomic) _Bool needLoadAll;
- (void)loadAllWithCompletion:(void (^)(VZModel *, NSError *))arg1;
- (void)loadAll;
- (_Bool)loadMore;
- (_Bool)canLoadMore;
@end

