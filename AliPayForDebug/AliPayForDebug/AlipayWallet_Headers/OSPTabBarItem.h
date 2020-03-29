//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@class AUIconView, MPBadgeView, NSString, UILabel;

@interface OSPTabBarItem : UIButton
{
    UILabel *_titleLabel;
    AUIconView *_imageView;
    AUIconView *_selectImageView;
    NSString *_imageName;
    MPBadgeView *_redDotView;
}

@property(retain, nonatomic) MPBadgeView *redDotView; // @synthesize redDotView=_redDotView;
- (void).cxx_destruct;
- (void)setSelected:(_Bool)arg1 titleColor:(id)arg2;
- (void)setTitle:(id)arg1;
- (void)addRedDot;
- (id)initWithFrame:(struct CGRect)arg1 imageName:(id)arg2;
- (void)dealloc;

@end

