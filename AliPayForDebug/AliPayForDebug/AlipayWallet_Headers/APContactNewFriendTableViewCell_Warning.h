//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "APContactNewFriendTableViewCell.h"

@class MFAttributeLabel;

@interface APContactNewFriendTableViewCell_Warning : APContactNewFriendTableViewCell
{
    MFAttributeLabel *_bottomLabel;
}

+ (double)heightOfCell;
@property(retain, nonatomic) MFAttributeLabel *bottomLabel; // @synthesize bottomLabel=_bottomLabel;
- (void).cxx_destruct;
- (void)adjustCommonItem:(double)arg1;
- (void)refreshBottomLabel;
- (void)refreshCellWithItem:(id)arg1;
- (void)setupBottomLabel;
- (void)setupUI;

@end

