//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UILabel;
@protocol RecorderLightDarkViewDelegate;

@interface RecorderLightDarkView : UIView
{
    _Bool _shouldShowLowLightReminder;
    id <RecorderLightDarkViewDelegate> _delegate;
    UILabel *_darkRemindLabel;
    UIButton *_flashButton;
}

+ (id)colorWithRGB:(int)arg1 alpha:(double)arg2;
@property(retain, nonatomic) UIButton *flashButton; // @synthesize flashButton=_flashButton;
@property(retain, nonatomic) UILabel *darkRemindLabel; // @synthesize darkRemindLabel=_darkRemindLabel;
@property(nonatomic) _Bool shouldShowLowLightReminder; // @synthesize shouldShowLowLightReminder=_shouldShowLowLightReminder;
@property(nonatomic) __weak id <RecorderLightDarkViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)flashButtonTouched:(id)arg1;
- (void)hideLightDarkReminderButton;
- (void)hideLightDarkReminderLabel;
- (void)showLightDarkReminder;
- (void)layoutItems;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

