//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class BeeAudioItemView;
@protocol HCHeadViewDelegate;

@interface HCHeadView : UIView
{
    BeeAudioItemView *_audioView;
    id <HCHeadViewDelegate> _headViewDelegate;
    UIView *_marginTopView;
    UIView *_marginBottomView;
}

@property(retain, nonatomic) UIView *marginBottomView; // @synthesize marginBottomView=_marginBottomView;
@property(retain, nonatomic) UIView *marginTopView; // @synthesize marginTopView=_marginTopView;
@property(nonatomic) __weak id <HCHeadViewDelegate> headViewDelegate; // @synthesize headViewDelegate=_headViewDelegate;
@property(retain, nonatomic) BeeAudioItemView *audioView; // @synthesize audioView=_audioView;
- (void).cxx_destruct;
- (void)dealloc;
- (void)setAudioViewCornerRadius:(double)arg1;
- (void)audioViewChange:(id)arg1;
- (void)updateFrame;
- (double)audioViewHeight;
- (id)initWithFrame:(struct CGRect)arg1;

@end

