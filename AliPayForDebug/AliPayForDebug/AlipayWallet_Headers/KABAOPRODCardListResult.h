//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KABAOPRODKabaoCommonResult.h"

@class NSArray;

@interface KABAOPRODCardListResult : KABAOPRODKabaoCommonResult
{
    int _hasMore;
    NSArray *_cardList;
}

+ (Class)cardListElementClass;
@property(nonatomic) int hasMore; // @synthesize hasMore=_hasMore;
@property(retain, nonatomic) NSArray *cardList; // @synthesize cardList=_cardList;
- (void).cxx_destruct;

@end

