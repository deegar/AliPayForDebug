//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "O2OMerchantCommonItem.h"

@class NSArray, NSDictionary;

@interface O2OMerchantAnchorItem : O2OMerchantCommonItem
{
    long long _sectionIndex;
    NSArray *_anchorList;
    long long _selectIndex;
    NSDictionary *_commonDic;
}

+ (id)parseItemFromDic:(id)arg1 commonDic:(id)arg2 vc:(id)arg3 cache:(_Bool)arg4;
@property(retain, nonatomic) NSDictionary *commonDic; // @synthesize commonDic=_commonDic;
@property(nonatomic) long long selectIndex; // @synthesize selectIndex=_selectIndex;
@property(retain, nonatomic) NSArray *anchorList; // @synthesize anchorList=_anchorList;
@property(nonatomic) long long sectionIndex; // @synthesize sectionIndex=_sectionIndex;
- (void).cxx_destruct;

@end
