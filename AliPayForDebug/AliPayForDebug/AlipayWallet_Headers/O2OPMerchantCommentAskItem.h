//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "VZListItem.h"

@class NSArray;

@interface O2OPMerchantCommentAskItem : VZListItem
{
    long long _totalComments;
    NSArray *_featuredQuestions;
}

+ (id)parseItemFromDic:(id)arg1 commonDic:(id)arg2 vc:(id)arg3 block:(id)arg4;
@property(retain, nonatomic) NSArray *featuredQuestions; // @synthesize featuredQuestions=_featuredQuestions;
@property(nonatomic) long long totalComments; // @synthesize totalComments=_totalComments;
- (void).cxx_destruct;

@end
