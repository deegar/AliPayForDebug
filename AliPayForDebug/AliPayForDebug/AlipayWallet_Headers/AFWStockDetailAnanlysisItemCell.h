//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UIButton, UIImageView, UILabel, finscbffToolItemPB;

@interface AFWStockDetailAnanlysisItemCell : UITableViewCell
{
    UIImageView *_iconImageView;
    UILabel *_titleLabel;
    UILabel *_subTitleLabel;
    UILabel *_timeLabel;
    UIButton *_actionButton;
    finscbffToolItemPB *_model;
}

@property(retain, nonatomic) finscbffToolItemPB *model; // @synthesize model=_model;
@property(retain, nonatomic) UIButton *actionButton; // @synthesize actionButton=_actionButton;
@property(retain, nonatomic) UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(retain, nonatomic) UILabel *subTitleLabel; // @synthesize subTitleLabel=_subTitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
- (void).cxx_destruct;
- (void)updateWithToolModel:(id)arg1;
- (void)setUpView;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
