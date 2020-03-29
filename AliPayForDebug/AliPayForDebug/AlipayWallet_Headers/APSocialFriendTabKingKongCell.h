//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "APCommonSelectTableViewCell.h"

@class NSMutableArray, UIView;

@interface APSocialFriendTabKingKongCell : APCommonSelectTableViewCell
{
    CDUnknownBlockType _kkClickedBlk;
    UIView *_separatorLine;
    NSMutableArray *_itemViews;
}

+ (double)heightOfCell;
+ (id)cellIdentifier;
@property(retain, nonatomic) NSMutableArray *itemViews; // @synthesize itemViews=_itemViews;
@property(retain, nonatomic) UIView *separatorLine; // @synthesize separatorLine=_separatorLine;
@property(copy, nonatomic) CDUnknownBlockType kkClickedBlk; // @synthesize kkClickedBlk=_kkClickedBlk;
- (void).cxx_destruct;
- (void)itemClicked:(id)arg1;
- (void)refreshSeparatorLineByItems:(id)arg1;
- (void)configItemViewsByCount:(unsigned long long)arg1;
- (void)refreshCellWithItems:(id)arg1;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (double)realHeightOfCell;
- (_Bool)isNewFriendTab;

@end

