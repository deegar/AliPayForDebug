//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class AUButton, HBadgeMarkView, HImageView, UILabel, UIView;

@interface HMyAppsRedPointCollectionViewCell : UICollectionViewCell
{
    UIView *_separatorView;
    UIView *_recommendView;
    HImageView *_appImageView;
    UILabel *_appNameLabel;
    UILabel *_appDescriptionLabel;
    HBadgeMarkView *_badgeMarkView;
    AUButton *_goButton;
}

+ (_Bool)isRecommendTextShowing;
+ (double)cellHeight;
@property(retain, nonatomic) AUButton *goButton; // @synthesize goButton=_goButton;
@property(retain, nonatomic) HBadgeMarkView *badgeMarkView; // @synthesize badgeMarkView=_badgeMarkView;
@property(retain, nonatomic) UILabel *appDescriptionLabel; // @synthesize appDescriptionLabel=_appDescriptionLabel;
@property(retain, nonatomic) UILabel *appNameLabel; // @synthesize appNameLabel=_appNameLabel;
@property(retain, nonatomic) HImageView *appImageView; // @synthesize appImageView=_appImageView;
@property(retain, nonatomic) UIView *recommendView; // @synthesize recommendView=_recommendView;
@property(retain, nonatomic) UIView *separatorView; // @synthesize separatorView=_separatorView;
- (void).cxx_destruct;
- (void)reloadWithAppCellModel:(id)arg1 bizMarkModel:(id)arg2;
- (void)layoutSubviews;

@end

