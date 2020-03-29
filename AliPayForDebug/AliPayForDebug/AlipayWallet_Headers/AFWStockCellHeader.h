//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

#import "ThemeChangeObserver-Protocol.h"

@class NSString, UIButton, UILabel;

@interface AFWStockCellHeader : UIControl <ThemeChangeObserver>
{
    _Bool _isBkColorSameToContent;
    CDUnknownBlockType _onMore;
    UIButton *_moreBtn;
    long long _sectionIndex;
    NSString *_name;
    UILabel *_bgLine;
    UILabel *_nameLabel;
    UILabel *_subTitleLabel;
}

+ (double)heightOfHeaderView;
@property(retain, nonatomic) UILabel *subTitleLabel; // @synthesize subTitleLabel=_subTitleLabel;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) UILabel *bgLine; // @synthesize bgLine=_bgLine;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) long long sectionIndex; // @synthesize sectionIndex=_sectionIndex;
@property(nonatomic) _Bool isBkColorSameToContent; // @synthesize isBkColorSameToContent=_isBkColorSameToContent;
@property(retain, nonatomic) UIButton *moreBtn; // @synthesize moreBtn=_moreBtn;
@property(copy, nonatomic) CDUnknownBlockType onMore; // @synthesize onMore=_onMore;
- (void).cxx_destruct;
- (void)setThemeColor;
- (void)handleChangeTheme:(id)arg1;
- (void)setConstraints;
- (void)onMoreBtnClicked:(id)arg1;
- (void)setSubTitle:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)initWithName:(id)arg1 sectionIndex:(long long)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

