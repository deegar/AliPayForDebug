//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class HiChatItem, SUImageView, UILabel;
@protocol SCTipsCardTitleViewDelegate;

@interface SCTipsCardTitleView : UIView
{
    id <SCTipsCardTitleViewDelegate> _delegate;
    HiChatItem *_hiChatItem;
    UILabel *_titleLabel;
    SUImageView *_icon;
}

@property(retain, nonatomic) SUImageView *icon; // @synthesize icon=_icon;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) HiChatItem *hiChatItem; // @synthesize hiChatItem=_hiChatItem;
@property(nonatomic) __weak id <SCTipsCardTitleViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setIconUrl:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)tapped:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

