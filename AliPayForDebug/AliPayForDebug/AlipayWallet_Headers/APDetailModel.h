//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CCard, NSArray;

@interface APDetailModel : NSObject
{
    CCard *_loadDataCard;
    NSArray *_praiseArr;
    NSArray *_rewardArr;
    NSArray *_commArr;
}

+ (id)constructDetailModel:(id)arg1 praiseArr:(id)arg2 rewardArr:(id)arg3 commArr:(id)arg4;
@property(retain, nonatomic) NSArray *commArr; // @synthesize commArr=_commArr;
@property(retain, nonatomic) NSArray *rewardArr; // @synthesize rewardArr=_rewardArr;
@property(retain, nonatomic) NSArray *praiseArr; // @synthesize praiseArr=_praiseArr;
@property(retain, nonatomic) CCard *loadDataCard; // @synthesize loadDataCard=_loadDataCard;
- (void).cxx_destruct;

@end
