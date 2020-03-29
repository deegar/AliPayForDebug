//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSArray, NSString;

@interface APGLocalSearchEngineResultItem : NSObject <NSCopying>
{
    _Bool _hasMore;
    long long _foundCount;
    long long _returnCount;
    NSString *_databaseName;
    NSString *_tableName;
    NSArray *_primaryKeys;
    NSArray *_searchMatchedField;
    NSArray *_weights;
}

@property(retain, nonatomic) NSArray *weights; // @synthesize weights=_weights;
@property(retain, nonatomic) NSArray *searchMatchedField; // @synthesize searchMatchedField=_searchMatchedField;
@property(retain, nonatomic) NSArray *primaryKeys; // @synthesize primaryKeys=_primaryKeys;
@property(copy, nonatomic) NSString *tableName; // @synthesize tableName=_tableName;
@property(copy, nonatomic) NSString *databaseName; // @synthesize databaseName=_databaseName;
@property(nonatomic) _Bool hasMore; // @synthesize hasMore=_hasMore;
@property(nonatomic) long long returnCount; // @synthesize returnCount=_returnCount;
@property(nonatomic) long long foundCount; // @synthesize foundCount=_foundCount;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

