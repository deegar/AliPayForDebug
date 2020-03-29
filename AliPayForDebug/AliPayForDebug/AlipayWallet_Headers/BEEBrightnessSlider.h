//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSMutableArray, UIImageView, UILabel;

@interface BEEBrightnessSlider : UIView
{
    UIImageView *_imageView;
    UILabel *_titleLabel;
    UIView *_longView;
    NSMutableArray *_tipArray;
}

@property(retain, nonatomic) NSMutableArray *tipArray; // @synthesize tipArray=_tipArray;
@property(retain, nonatomic) UIView *longView; // @synthesize longView=_longView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
- (void).cxx_destruct;
- (void)updateLongView:(double)arg1;
- (void)addObserver;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)hideView;
- (void)autoFade;
- (void)showView;
- (void)dealloc;
- (void)willMoveToSuperview:(id)arg1;
- (void)layoutSubviews;
- (void)setupSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

