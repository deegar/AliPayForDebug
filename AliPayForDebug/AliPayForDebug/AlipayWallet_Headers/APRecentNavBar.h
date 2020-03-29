//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, SCOPPlaygroundTitleView, UILabel;

@interface APRecentNavBar : UIView
{
    UILabel *_titleLabel;
    SCOPPlaygroundTitleView *_detailTitleBar;
    long long _type;
    NSString *_opId;
}

@property(retain, nonatomic) NSString *opId; // @synthesize opId=_opId;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(retain, nonatomic) SCOPPlaygroundTitleView *detailTitleBar; // @synthesize detailTitleBar=_detailTitleBar;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (long long)currentNavBarType;
- (void)changeViewType:(long long)arg1;
- (void)doSpring;
- (id)getOpId;
- (void)layoutSubviews;
- (void)updateDetailTitleFont:(id)arg1;
- (void)updateTitleFont:(id)arg1;
- (void)updateDetailTitle:(id)arg1;
- (void)updateTitle:(id)arg1;
- (void)displaySubviews;
- (id)initWithTitle:(id)arg1 detailTitle:(id)arg2;
- (id)initWithTitle:(id)arg1;

@end

