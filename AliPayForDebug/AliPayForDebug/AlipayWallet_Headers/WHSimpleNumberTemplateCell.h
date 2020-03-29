//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WHCardBaseTableViewCell.h"

@class AULabel, UIImageView, WHAppModel, WHExposureView;

@interface WHSimpleNumberTemplateCell : WHCardBaseTableViewCell
{
    WHExposureView *_exposureView;
    AULabel *_titleLabel;
    UIImageView *_iconImageView;
    AULabel *_subTitleLabel;
    UIImageView *_arrowImageView;
    WHAppModel *_appModel;
}

+ (struct CGSize)templateSize:(id)arg1;
@property(retain, nonatomic) WHAppModel *appModel; // @synthesize appModel=_appModel;
@property(retain, nonatomic) UIImageView *arrowImageView; // @synthesize arrowImageView=_arrowImageView;
@property(retain, nonatomic) AULabel *subTitleLabel; // @synthesize subTitleLabel=_subTitleLabel;
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(retain, nonatomic) AULabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) WHExposureView *exposureView; // @synthesize exposureView=_exposureView;
- (void).cxx_destruct;
- (void)didSelectCell:(id)arg1;
- (void)layoutSubviews;
- (void)reloadCard:(id)arg1;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)awakeFromNib;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

