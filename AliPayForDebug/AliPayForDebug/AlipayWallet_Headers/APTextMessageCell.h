//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UIImageView, UILabel;

@interface APTextMessageCell : UITableViewCell
{
    UILabel *_leftLabel;
    UILabel *_rightLabel;
    UIImageView *_leftIcon;
    UIImageView *_rightIcon;
    UIImageView *_leftMessageView;
    UIImageView *_rightMessageView;
    struct UIEdgeInsets _iconEdgeInsets;
}

@property(nonatomic) struct UIEdgeInsets iconEdgeInsets; // @synthesize iconEdgeInsets=_iconEdgeInsets;
@property(retain, nonatomic) UIImageView *rightMessageView; // @synthesize rightMessageView=_rightMessageView;
@property(retain, nonatomic) UIImageView *leftMessageView; // @synthesize leftMessageView=_leftMessageView;
@property(retain, nonatomic) UIImageView *rightIcon; // @synthesize rightIcon=_rightIcon;
@property(retain, nonatomic) UIImageView *leftIcon; // @synthesize leftIcon=_leftIcon;
@property(retain, nonatomic) UILabel *rightLabel; // @synthesize rightLabel=_rightLabel;
@property(retain, nonatomic) UILabel *leftLabel; // @synthesize leftLabel=_leftLabel;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)willMoveToSuperview:(id)arg1;
- (void)addView:(id)arg1;
- (void)createRightMessageView;
- (void)createRightIcon;
- (void)createLeftMessageView;
- (void)createLeftIcon;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

