//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UILabel;

@interface HMyAppsSeparatorView : UIView
{
    _Bool _editing;
    long long _homePageAppsCount;
    UILabel *_separatorLabel;
    UIView *_separatorLabelBackgroundView;
    UIView *_separator;
}

@property(retain, nonatomic) UIView *separator; // @synthesize separator=_separator;
@property(retain, nonatomic) UIView *separatorLabelBackgroundView; // @synthesize separatorLabelBackgroundView=_separatorLabelBackgroundView;
@property(retain, nonatomic) UILabel *separatorLabel; // @synthesize separatorLabel=_separatorLabel;
@property(nonatomic, getter=isEditing) _Bool editing; // @synthesize editing=_editing;
@property(nonatomic) long long homePageAppsCount; // @synthesize homePageAppsCount=_homePageAppsCount;
- (void).cxx_destruct;
- (void)reloadWithIsEditing:(_Bool)arg1;
- (void)layoutSubviews;

@end

