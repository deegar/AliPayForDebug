//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HCCardViewBaseCollectionViewCell.h"

#import "HCCardTemplate-Protocol.h"
#import "SmallSickMessageCardCententViewDelegate-Protocol.h"
#import "SmallSickMessageCardServiceViewDelegate-Protocol.h"

@class NSMutableArray, NSString, SUImageView, UIImageView, UILabel, UITapGestureRecognizer, UIView;

@interface HCCardViewSmallSickMessageCardCell : HCCardViewBaseCollectionViewCell <HCCardTemplate, SmallSickMessageCardServiceViewDelegate, SmallSickMessageCardCententViewDelegate>
{
    UIView *_containerView;
    SUImageView *_mainTitleIcon;
    SUImageView *_bgImageView;
    UILabel *_titleLab;
    UILabel *_deadlineTimeLab;
    UIImageView *_arrows;
    UIView *_whiteBg;
    UIView *_line1;
    UIView *_line2;
    UIView *_line3;
    UIView *_titleTapBGView;
    NSMutableArray *_accessibleElements;
    UITapGestureRecognizer *_tabGesture;
    UITapGestureRecognizer *_tabGesture2;
    UITapGestureRecognizer *_tabGesture3;
}

+ (struct CGSize)templateSize:(id)arg1;
+ (id)fetchSickServicesArrayWithCard:(id)arg1;
+ (id)fetchSickContentsArrayWithCard:(id)arg1;
@property(retain, nonatomic) UITapGestureRecognizer *tabGesture3; // @synthesize tabGesture3=_tabGesture3;
@property(retain, nonatomic) UITapGestureRecognizer *tabGesture2; // @synthesize tabGesture2=_tabGesture2;
@property(retain, nonatomic) UITapGestureRecognizer *tabGesture; // @synthesize tabGesture=_tabGesture;
@property(retain, nonatomic) NSMutableArray *accessibleElements; // @synthesize accessibleElements=_accessibleElements;
@property(retain, nonatomic) UIView *titleTapBGView; // @synthesize titleTapBGView=_titleTapBGView;
@property(retain, nonatomic) UIView *line3; // @synthesize line3=_line3;
@property(retain, nonatomic) UIView *line2; // @synthesize line2=_line2;
@property(retain, nonatomic) UIView *line1; // @synthesize line1=_line1;
@property(retain, nonatomic) UIView *whiteBg; // @synthesize whiteBg=_whiteBg;
@property(retain, nonatomic) UIImageView *arrows; // @synthesize arrows=_arrows;
@property(retain, nonatomic) UILabel *deadlineTimeLab; // @synthesize deadlineTimeLab=_deadlineTimeLab;
@property(retain, nonatomic) UILabel *titleLab; // @synthesize titleLab=_titleLab;
@property(retain, nonatomic) SUImageView *bgImageView; // @synthesize bgImageView=_bgImageView;
@property(retain, nonatomic) SUImageView *mainTitleIcon; // @synthesize mainTitleIcon=_mainTitleIcon;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
- (void).cxx_destruct;
- (_Bool)isAccessibilityElement;
- (void)SmallSickMessageCardServiceView:(id)arg1 onClick:(id)arg2;
- (void)SmallSickMessageCardCententItemView:(id)arg1 onClick:(id)arg2;
- (double)rowHeightWithArray:(id)arg1;
- (void)layout;
- (void)reloadCard:(id)arg1;
- (void)tapGestureAction:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

