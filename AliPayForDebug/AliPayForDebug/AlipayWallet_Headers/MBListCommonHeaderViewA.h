//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MBListCommonHeaderView.h"

@class UIImageView, UILabel;

@interface MBListCommonHeaderViewA : MBListCommonHeaderView
{
    UIImageView *_iconImageView;
    UILabel *_textLabel;
    UILabel *_textTagLabel;
    UILabel *_rightLabel;
    UIImageView *_arrowIcon;
}

@property(retain, nonatomic) UIImageView *arrowIcon; // @synthesize arrowIcon=_arrowIcon;
@property(retain, nonatomic) UILabel *rightLabel; // @synthesize rightLabel=_rightLabel;
@property(retain, nonatomic) UILabel *textTagLabel; // @synthesize textTagLabel=_textTagLabel;
@property(retain, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
- (void).cxx_destruct;
- (void)updateAutoLayoutNew;
- (void)updateHeaderViewWithModel:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

