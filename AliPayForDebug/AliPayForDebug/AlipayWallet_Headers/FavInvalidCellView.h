//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FavBaseCellView.h"

@class UIImageView, UILabel;

@interface FavInvalidCellView : FavBaseCellView
{
    UIImageView *_alertImageView;
    UILabel *_titleLabel;
}

+ (double)cellHeight:(id)arg1;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *alertImageView; // @synthesize alertImageView=_alertImageView;
- (void).cxx_destruct;
- (id)customContentAccessibilityLabel;
- (void)buildSubView;

@end

