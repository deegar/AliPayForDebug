//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class BLListSectionItem, UIButton, UIImageView, UILabel;
@protocol BLListHeaderDelegate;

@interface BLListHeader : UIView
{
    _Bool _isSelectTag;
    _Bool _isSelectType;
    _Bool _dateSelectEnable;
    id <BLListHeaderDelegate> _delegate;
    unsigned long long _section;
    UIButton *_titleZone;
    UIImageView *_titleArrow;
    UILabel *_titleLabel;
    UILabel *_detailOutLabel;
    UILabel *_detailInLabel;
    UIImageView *_rightArrow;
    UIView *_lineView;
    UIButton *_filterButton;
    BLListSectionItem *_data;
}

@property(nonatomic) _Bool dateSelectEnable; // @synthesize dateSelectEnable=_dateSelectEnable;
@property(nonatomic) _Bool isSelectType; // @synthesize isSelectType=_isSelectType;
@property(retain, nonatomic) BLListSectionItem *data; // @synthesize data=_data;
@property(retain, nonatomic) UIButton *filterButton; // @synthesize filterButton=_filterButton;
@property(retain, nonatomic) UIView *lineView; // @synthesize lineView=_lineView;
@property(retain, nonatomic) UIImageView *rightArrow; // @synthesize rightArrow=_rightArrow;
@property(retain, nonatomic) UILabel *detailInLabel; // @synthesize detailInLabel=_detailInLabel;
@property(retain, nonatomic) UILabel *detailOutLabel; // @synthesize detailOutLabel=_detailOutLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *titleArrow; // @synthesize titleArrow=_titleArrow;
@property(retain, nonatomic) UIButton *titleZone; // @synthesize titleZone=_titleZone;
@property(nonatomic) unsigned long long section; // @synthesize section=_section;
@property(nonatomic) _Bool isSelectTag; // @synthesize isSelectTag=_isSelectTag;
@property(nonatomic) __weak id <BLListHeaderDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)resetComponent:(id)arg1;
- (void)filterButtonAction:(id)arg1;
- (void)clickMonthOverView;
- (void)clickTitleZone;
- (void)loadData:(id)arg1 withInfo:(id)arg2 AndQuery:(id)arg3;
- (void)layoutSubviews;
- (void)initConstraints;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 viewType:(_Bool)arg2 dateSelectEnable:(_Bool)arg3;

@end

