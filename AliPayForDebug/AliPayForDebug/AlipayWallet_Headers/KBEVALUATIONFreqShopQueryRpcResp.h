//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KBEVALUATIONBaseResult.h"

@class NSArray, NSDictionary, NSString;

@interface KBEVALUATIONFreqShopQueryRpcResp : KBEVALUATIONBaseResult
{
    _Bool _hasMore;
    NSString *_nextPageStart;
    NSDictionary *_blockTemplates;
    NSArray *_blocks;
}

+ (Class)blocksElementClass;
+ (Class)blockTemplatesElementClass;
@property(retain, nonatomic) NSArray *blocks; // @synthesize blocks=_blocks;
@property(retain, nonatomic) NSDictionary *blockTemplates; // @synthesize blockTemplates=_blockTemplates;
@property(nonatomic) _Bool hasMore; // @synthesize hasMore=_hasMore;
@property(retain, nonatomic) NSString *nextPageStart; // @synthesize nextPageStart=_nextPageStart;
- (void).cxx_destruct;

@end

