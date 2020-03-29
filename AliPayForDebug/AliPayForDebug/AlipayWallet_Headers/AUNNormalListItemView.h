//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class AUNCssItemView, UIImageView, UILabel;

@interface AUNNormalListItemView : UIView
{
    long long _displayStyle;
    AUNCssItemView *_cssView;
}

+ (double)heightForDisplayStyle:(long long)arg1;
+ (id)cssForViewStyle:(long long)arg1;
@property(retain, nonatomic) AUNCssItemView *cssView; // @synthesize cssView=_cssView;
@property(nonatomic) long long displayStyle; // @synthesize displayStyle=_displayStyle;
- (void).cxx_destruct;
- (void)setAU_cssItem:(id)arg1 value:(id)arg2;
@property(readonly, nonatomic) UIImageView *iconView;
@property(readonly, nonatomic) UILabel *descLabel;
@property(readonly, nonatomic) UILabel *titleLabel;
- (id)initWithWidth:(double)arg1 displayStyle:(long long)arg2;

@end

