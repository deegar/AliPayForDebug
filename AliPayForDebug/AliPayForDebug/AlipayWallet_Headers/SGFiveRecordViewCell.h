//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UILabel;

@interface SGFiveRecordViewCell : UITableViewCell
{
    _Bool _landscape;
    UILabel *_orderLabel;
    UILabel *_priceLabel;
    UILabel *_turnOverLabel;
}

@property(nonatomic) _Bool landscape; // @synthesize landscape=_landscape;
@property(retain, nonatomic) UILabel *turnOverLabel; // @synthesize turnOverLabel=_turnOverLabel;
@property(retain, nonatomic) UILabel *priceLabel; // @synthesize priceLabel=_priceLabel;
@property(retain, nonatomic) UILabel *orderLabel; // @synthesize orderLabel=_orderLabel;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)dealloc;

@end

