//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSMutableArray, UIImageView, UILabel;

@interface APVAToastPlusView : UIView
{
    UILabel *_descLabel;
    UIImageView *_iconView;
    NSMutableArray *_voiceVolumeViews;
    unsigned long long _currentStyle;
    double _volumeTimeInt;
    long long _volumeTimeSpace;
}

@property(nonatomic) long long volumeTimeSpace; // @synthesize volumeTimeSpace=_volumeTimeSpace;
@property(nonatomic) double volumeTimeInt; // @synthesize volumeTimeInt=_volumeTimeInt;
@property(nonatomic) unsigned long long currentStyle; // @synthesize currentStyle=_currentStyle;
@property(retain, nonatomic) NSMutableArray *voiceVolumeViews; // @synthesize voiceVolumeViews=_voiceVolumeViews;
@property(retain, nonatomic) UIImageView *iconView; // @synthesize iconView=_iconView;
@property(retain, nonatomic) UILabel *descLabel; // @synthesize descLabel=_descLabel;
- (void).cxx_destruct;
- (void)setStyleWithText:(id)arg1 textColor:(id)arg2 icon:(id)arg3 textBackGroundColor:(id)arg4;
- (void)showVoiceVolumeView:(long long)arg1;
- (void)customInit;
- (void)setToastStyle:(unsigned long long)arg1;
- (void)dismissToastDelay;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

@end

