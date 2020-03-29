//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class NSString, SUImageView, UIImageView, UILabel, UIView;

@interface APFoldLifeAccountCollectionViewCell : UICollectionViewCell
{
    _Bool _isSelected;
    NSString *_icon;
    NSString *_displayName;
    SUImageView *_iconView;
    UILabel *_displayLabel;
    UIView *_bgView;
    UIImageView *_cornerImg;
}

@property(retain, nonatomic) UIImageView *cornerImg; // @synthesize cornerImg=_cornerImg;
@property(retain, nonatomic) UIView *bgView; // @synthesize bgView=_bgView;
@property(retain, nonatomic) UILabel *displayLabel; // @synthesize displayLabel=_displayLabel;
@property(retain, nonatomic) SUImageView *iconView; // @synthesize iconView=_iconView;
@property(nonatomic) _Bool isSelected; // @synthesize isSelected=_isSelected;
@property(retain, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(retain, nonatomic) NSString *icon; // @synthesize icon=_icon;
- (void).cxx_destruct;
- (void)refreshCellSelectMode:(_Bool)arg1;
- (void)setupLifeAccountView;
- (id)initWithFrame:(struct CGRect)arg1;

@end

