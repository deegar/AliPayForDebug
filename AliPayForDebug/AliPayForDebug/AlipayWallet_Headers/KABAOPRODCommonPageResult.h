//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KABAOPRODCommonResult.h"

@interface KABAOPRODCommonPageResult : KABAOPRODCommonResult
{
    _Bool _hasNextPage;
    int _pageSize;
    int _currentPage;
    int _totalSize;
    int _totalPage;
    long long _endTime;
}

@property(nonatomic) _Bool hasNextPage; // @synthesize hasNextPage=_hasNextPage;
@property(nonatomic) long long endTime; // @synthesize endTime=_endTime;
@property(nonatomic) int totalPage; // @synthesize totalPage=_totalPage;
@property(nonatomic) int totalSize; // @synthesize totalSize=_totalSize;
@property(nonatomic) int currentPage; // @synthesize currentPage=_currentPage;
@property(nonatomic) int pageSize; // @synthesize pageSize=_pageSize;

@end

