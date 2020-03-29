//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "AUListItemLeftAccessorViewProtocol-Protocol.h"

@class AUNListItemSepratorLine, NSString;

@interface AUNListItemContainerView : UIView <AUListItemLeftAccessorViewProtocol>
{
    UIView *_contentView;
    long long _leftAccessorType;
    UIView *_leftAccessorView;
    long long _rightAccessorType;
    UIView *_rightAccessorView;
    UIView *_badgeView;
    double _badgeMargin;
    NSString *_badgeNumber;
    long long _badgeAreaType;
    NSString *_badgeValue;
    CDUnknownBlockType _LayoutBlock;
    AUNListItemSepratorLine *_sepretorLine;
}

@property(retain, nonatomic) AUNListItemSepratorLine *sepretorLine; // @synthesize sepretorLine=_sepretorLine;
@property(copy, nonatomic) CDUnknownBlockType LayoutBlock; // @synthesize LayoutBlock=_LayoutBlock;
@property(retain, nonatomic) NSString *badgeValue; // @synthesize badgeValue=_badgeValue;
@property(nonatomic) long long badgeAreaType; // @synthesize badgeAreaType=_badgeAreaType;
@property(retain, nonatomic) NSString *badgeNumber; // @synthesize badgeNumber=_badgeNumber;
@property(nonatomic) double badgeMargin; // @synthesize badgeMargin=_badgeMargin;
@property(retain, nonatomic) UIView *badgeView; // @synthesize badgeView=_badgeView;
@property(retain, nonatomic) UIView *rightAccessorView; // @synthesize rightAccessorView=_rightAccessorView;
@property(nonatomic) long long rightAccessorType; // @synthesize rightAccessorType=_rightAccessorType;
@property(retain, nonatomic) UIView *leftAccessorView; // @synthesize leftAccessorView=_leftAccessorView;
@property(nonatomic) long long leftAccessorType; // @synthesize leftAccessorType=_leftAccessorType;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
- (void).cxx_destruct;
- (void)dealloc;
- (void)prepareForReuse;
- (void)updateBadgeWidgetId:(id)arg1 badgeNumber:(id)arg2 force:(_Bool)arg3;
- (void)updateBadgeWidgetId:(id)arg1 badgeNumber:(id)arg2;
- (void)layoutSubviews;
- (double)setupLeftAccessorViewFrame;
- (double)rightAccessorViewWidth;
- (void)rightAccessorView_setSize:(struct CGSize)arg1;
- (void)rightAccessorView_setMargin:(struct UIEdgeInsets)arg1;
- (void)leftAccessorView_setSize:(struct CGSize)arg1;
- (void)leftAccessorView_setMargin:(struct UIEdgeInsets)arg1;
- (id)leftAccessorView_iconView;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

