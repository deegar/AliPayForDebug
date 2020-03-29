//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MBSwipeTableCell.h"

@class MBListCellModel, NSIndexPath;
@protocol MBListBaseCellDelegate;

@interface MBListBaseCell : MBSwipeTableCell
{
    MBListCellModel *_cellModel;
    NSIndexPath *_indexPath;
    id <MBListBaseCellDelegate> _delegate;
}

+ (id)simulationTemplateId;
+ (double)cellHeightWithData:(id)arg1;
@property(nonatomic) __weak id <MBListBaseCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSIndexPath *indexPath; // @synthesize indexPath=_indexPath;
@property(retain, nonatomic) MBListCellModel *cellModel; // @synthesize cellModel=_cellModel;
- (void).cxx_destruct;
- (id)createSwipeBtn:(id)arg1;
- (long long)editTypeForIndex:(long long)arg1;
- (id)cellRowActions;
- (void)setFrame:(struct CGRect)arg1;
- (_Bool)updateCellWithData:(id)arg1 indexPath:(id)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 delegate:(id)arg3;

@end

