//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView, UILabel;

@interface FHFeatureFinancingItemView : UIView
{
    unsigned long long _style;
    UIImageView *_iconView;
    UILabel *_titleLabel;
    UILabel *_subTitleLabel;
    UILabel *_descLabel;
}

@property(readonly, nonatomic) UILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(readonly, nonatomic) UILabel *subTitleLabel; // @synthesize subTitleLabel=_subTitleLabel;
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(readonly, nonatomic) UIImageView *iconView; // @synthesize iconView=_iconView;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithStyle:(unsigned long long)arg1;

@end

