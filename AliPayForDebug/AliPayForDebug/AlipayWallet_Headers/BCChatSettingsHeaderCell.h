//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class BCChatSettingsHeaderModel, SCRoundCornerImageView, SUImageView, UIImageView, UILabel;

@interface BCChatSettingsHeaderCell : UITableViewCell
{
    UILabel *_nameLabel;
    SCRoundCornerImageView *_headImage;
    UIImageView *_arrow;
    SUImageView *_vipImageView;
    UILabel *_jobTitleLabel;
    BCChatSettingsHeaderModel *_model;
}

@property(retain, nonatomic) BCChatSettingsHeaderModel *model; // @synthesize model=_model;
@property(retain, nonatomic) UILabel *jobTitleLabel; // @synthesize jobTitleLabel=_jobTitleLabel;
@property(retain, nonatomic) SUImageView *vipImageView; // @synthesize vipImageView=_vipImageView;
@property(retain, nonatomic) UIImageView *arrow; // @synthesize arrow=_arrow;
@property(retain, nonatomic) SCRoundCornerImageView *headImage; // @synthesize headImage=_headImage;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
- (void).cxx_destruct;
- (double)vipImageWidth;
- (void)layoutSubviews;
- (void)bindData:(id)arg1;
- (void)commonInit;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

