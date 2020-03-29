//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, UIButton, UILabel, UIViewController;

@interface O2OSearchHotwordView : UIView
{
    UIViewController *_vc;
    CDUnknownBlockType _selectAction;
    CDUnknownBlockType _clickChangeAction;
    UILabel *_titleLabel;
    UIButton *_changeBtn;
    UIView *_loadingIcon;
    NSArray *_hotwords;
    NSArray *_hotwordBtns;
}

@property(copy, nonatomic) NSArray *hotwordBtns; // @synthesize hotwordBtns=_hotwordBtns;
@property(copy, nonatomic) NSArray *hotwords; // @synthesize hotwords=_hotwords;
@property(retain, nonatomic) UIView *loadingIcon; // @synthesize loadingIcon=_loadingIcon;
@property(retain, nonatomic) UIButton *changeBtn; // @synthesize changeBtn=_changeBtn;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(copy, nonatomic) CDUnknownBlockType clickChangeAction; // @synthesize clickChangeAction=_clickChangeAction;
@property(copy, nonatomic) CDUnknownBlockType selectAction; // @synthesize selectAction=_selectAction;
@property(nonatomic) __weak UIViewController *vc; // @synthesize vc=_vc;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (double)adjustLayout;
- (void)onWordBtnClicked:(id)arg1;
- (id)createNewHotwordBtn:(id)arg1;
- (void)createBtns;
- (void)updateHotwords:(id)arg1 shouldExposeHotword:(_Bool)arg2;
- (void)doClickChangeBtn:(id)arg1;
- (void)endLoadingAnimation;
- (void)beginLoadingAnimation;
- (void)endLoading;
- (void)beginLoading;
- (void)updateShowChange:(_Bool)arg1;
- (void)updateTitle:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
