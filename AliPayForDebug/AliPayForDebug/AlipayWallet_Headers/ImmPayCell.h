//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UIView;

@interface ImmPayCell : UITableViewCell
{
    UIView *_rightView;
    UIView *_reddotView;
}

@property(retain, nonatomic) UIView *reddotView; // @synthesize reddotView=_reddotView;
@property(retain, nonatomic) UIView *rightView; // @synthesize rightView=_rightView;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)scaleBy:(double)arg1;
- (void)setReddotShow:(_Bool)arg1;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

