//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UIImageView, UILabel;

@interface APContactSelectAllView : UIView
{
    _Bool _selected;
    CDUnknownBlockType _select_block;
    UIImageView *_iconView;
    UILabel *_titleLabel;
    UILabel *_indicatorLabel;
    UIView *_topLine;
    NSString *_selectAllTip;
}

+ (double)viewHeight;
+ (id)selectAllView:(_Bool)arg1 selectBlock:(CDUnknownBlockType)arg2 selectAllTip:(id)arg3;
+ (id)selectAllView:(_Bool)arg1 selectBlock:(CDUnknownBlockType)arg2;
@property(retain, nonatomic) NSString *selectAllTip; // @synthesize selectAllTip=_selectAllTip;
@property(retain, nonatomic) UIView *topLine; // @synthesize topLine=_topLine;
@property(retain, nonatomic) UILabel *indicatorLabel; // @synthesize indicatorLabel=_indicatorLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *iconView; // @synthesize iconView=_iconView;
@property(copy, nonatomic) CDUnknownBlockType select_block; // @synthesize select_block=_select_block;
@property(nonatomic) _Bool selected; // @synthesize selected=_selected;
- (void).cxx_destruct;
- (void)setSelectState:(_Bool)arg1;
- (void)reset;
- (void)tapMe;
- (id)getSpecialStateImage;
- (void)commonInit;
- (id)initWithFrame:(struct CGRect)arg1;

@end

