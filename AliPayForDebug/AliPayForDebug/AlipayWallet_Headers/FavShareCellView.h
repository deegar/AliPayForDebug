//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FavBaseCellView.h"

@class FavCloudIdImageView, UILabel;

@interface FavShareCellView : FavBaseCellView
{
    FavCloudIdImageView *_imagePreView;
    UILabel *_titleLabel;
    UILabel *_subTitleLabel;
}

@property(retain, nonatomic) UILabel *subTitleLabel; // @synthesize subTitleLabel=_subTitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) FavCloudIdImageView *imagePreView; // @synthesize imagePreView=_imagePreView;
- (void).cxx_destruct;
- (id)customContentAccessibilityLabel;
- (void)buildCell:(id)arg1;
- (void)buildSubView;

@end

