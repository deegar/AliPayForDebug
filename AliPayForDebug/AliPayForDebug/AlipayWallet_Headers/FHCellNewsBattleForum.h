//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FHCellNewsBattleItemModel.h"

@class NSArray, NSString;

@interface FHCellNewsBattleForum : FHCellNewsBattleItemModel
{
    _Bool _commentsDegrade;
    NSString *_chgText;
    NSString *_chgState;
    NSString *_forumDesc;
    NSString *_topicType;
    NSArray *_commentItems;
    NSString *_backgroundPic;
    NSString *_backgroundColor;
}

@property _Bool commentsDegrade; // @synthesize commentsDegrade=_commentsDegrade;
@property(retain, nonatomic) NSString *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(retain, nonatomic) NSString *backgroundPic; // @synthesize backgroundPic=_backgroundPic;
@property(retain, nonatomic) NSArray *commentItems; // @synthesize commentItems=_commentItems;
@property(retain, nonatomic) NSString *topicType; // @synthesize topicType=_topicType;
@property(retain, nonatomic) NSString *forumDesc; // @synthesize forumDesc=_forumDesc;
@property(retain, nonatomic) NSString *chgState; // @synthesize chgState=_chgState;
@property(retain, nonatomic) NSString *chgText; // @synthesize chgText=_chgText;
- (void).cxx_destruct;
- (id)prefix_dSpmId;
- (id)prefix_spmId;
- (id)initWithDataModel:(id)arg1 card:(id)arg2 obFloor:(id)arg3 index:(unsigned long long)arg4 fagId:(id)arg5;

@end
