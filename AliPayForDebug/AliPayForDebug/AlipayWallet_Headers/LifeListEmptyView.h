//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView, UILabel;

@interface LifeListEmptyView : UIView
{
    UILabel *_emptyLabel;
    UIImageView *_emptyIcon;
    UIView *_view;
}

@property(retain, nonatomic) UIView *view; // @synthesize view=_view;
@property(retain, nonatomic) UIImageView *emptyIcon; // @synthesize emptyIcon=_emptyIcon;
@property(retain, nonatomic) UILabel *emptyLabel; // @synthesize emptyLabel=_emptyLabel;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 text:(id)arg2;

@end

