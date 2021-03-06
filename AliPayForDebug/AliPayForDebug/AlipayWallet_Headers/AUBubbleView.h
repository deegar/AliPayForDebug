//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AUView.h"

@class UILabel, UIView;

@interface AUBubbleView : AUView
{
    UILabel *_textViewInnerLabel;
    UIView *_textView;
    UIView *_indicatorView;
    UIView *_fromView;
    UIView *_maskView;
    long long _postion;
}

+ (id)showText:(id)arg1 fromView:(id)arg2 position:(long long)arg3;
@property(nonatomic) long long postion; // @synthesize postion=_postion;
@property(nonatomic) __weak UIView *maskView; // @synthesize maskView=_maskView;
@property(retain, nonatomic) UIView *fromView; // @synthesize fromView=_fromView;
@property(retain, nonatomic) UIView *indicatorView; // @synthesize indicatorView=_indicatorView;
@property(retain, nonatomic) UIView *textView; // @synthesize textView=_textView;
@property(retain, nonatomic) UILabel *textViewInnerLabel; // @synthesize textViewInnerLabel=_textViewInnerLabel;
- (void).cxx_destruct;
- (void)dealloc;
- (void)dismiss:(_Bool)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setupIndicatorView;
- (void)showFromView:(id)arg1 position:(long long)arg2;
- (void)setText:(id)arg1;
- (void)drawIndicatorView;
- (void)drawCenterIndicatorView;
- (id)initWithText:(id)arg1;

@end

