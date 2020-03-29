//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSMutableArray, NSString;

@interface BLListModel : NSObject <NSCoding>
{
    _Bool _hasMore;
    NSMutableArray *_list;
    NSString *_nextQueryPageType;
}

@property(nonatomic) _Bool hasMore; // @synthesize hasMore=_hasMore;
@property(copy, nonatomic) NSString *nextQueryPageType; // @synthesize nextQueryPageType=_nextQueryPageType;
@property(retain, nonatomic) NSMutableArray *list; // @synthesize list=_list;
- (void).cxx_destruct;
- (_Bool)containsObject:(id)arg1 inList:(id)arg2;
- (void)mergeStatusDataWithList:(id)arg1 type:(unsigned long long)arg2;
- (void)mergeFundStateFilter:(id)arg1 type:(unsigned long long)arg2;
- (long long)recordCountAtIndex:(long long)arg1;
- (long long)recordCount;
- (long long)monthCount;
- (id)monthAtIndex:(long long)arg1;
- (id)recordAtIndexPath:(id)arg1;
- (_Bool)removeRecordAtIndexPath:(id)arg1;
- (void)clear;
- (void)appendTallyList:(id)arg1;
- (void)appendList:(id)arg1;
- (void)appendRes:(id)arg1;
- (id)initWithRes:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

