//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WHExposureControl.h"

@class BSBadgeView, UIButton, UIImageView, UILabel, UIView, WHUserHeaderViewModel;

@interface WHUserHeaderView : WHExposureControl
{
    UIView *_imageContentView;
    UIImageView *_portraitView;
    UIImageView *_vipImageView;
    UILabel *_nickNameLabel;
    UILabel *_descLabel;
    UILabel *_remarkLabel;
    UIButton *_arrowButton;
    _Bool _loadHeaderImageSuccess;
    BSBadgeView *_badgeView;
    WHUserHeaderViewModel *_viewModel;
}

+ (struct CGSize)viewSize;
@property(readonly, nonatomic) BSBadgeView *badgeView; // @synthesize badgeView=_badgeView;
@property(readonly, nonatomic) WHUserHeaderViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (void)reloadWithViewModel:(id)arg1 badgeInfo:(id)arg2;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

