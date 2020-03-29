//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FHTemplateBaseCell.h"

@class AUPopTipView, FHCellTitleModel, MPBadgeView, UILabel;

@interface FHTemplateTitleCell : FHTemplateBaseCell
{
    FHCellTitleModel *_cellModel;
    UILabel *_moreLabel;
    UILabel *_titleLabel;
    MPBadgeView *_redPoint;
    AUPopTipView *_popTipView;
}

@property(retain, nonatomic) AUPopTipView *popTipView; // @synthesize popTipView=_popTipView;
@property(retain, nonatomic) MPBadgeView *redPoint; // @synthesize redPoint=_redPoint;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UILabel *moreLabel; // @synthesize moreLabel=_moreLabel;
@property(retain, nonatomic) FHCellTitleModel *cellModel; // @synthesize cellModel=_cellModel;
- (void).cxx_destruct;
- (id)viewsNeedExposure;
- (_Bool)cellIsNeedFilterExposure;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (double)getMoreLabelWidth;
- (void)layoutSubviews;
- (void)updateData:(id)arg1 userStatusMap:(id)arg2;
- (void)updateData:(id)arg1 userStatusMap:(id)arg2 mark:(id)arg3;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)removeFromSuperview;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

