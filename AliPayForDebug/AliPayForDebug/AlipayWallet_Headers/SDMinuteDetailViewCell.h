//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "APTableViewCell.h"

@class UILabel;

@interface SDMinuteDetailViewCell : APTableViewCell
{
    _Bool _isLandScape;
    UILabel *_timeLabel;
    UILabel *_priceLabel;
    UILabel *_turnOverLabel;
}

@property(nonatomic) _Bool isLandScape; // @synthesize isLandScape=_isLandScape;
@property(retain, nonatomic) UILabel *turnOverLabel; // @synthesize turnOverLabel=_turnOverLabel;
@property(retain, nonatomic) UILabel *priceLabel; // @synthesize priceLabel=_priceLabel;
@property(retain, nonatomic) UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

