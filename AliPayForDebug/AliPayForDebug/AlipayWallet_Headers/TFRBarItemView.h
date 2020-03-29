//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "TFRPopMenuDelegate-Protocol.h"

@class NSArray, NSString, TFRBaseCell, TFRPopMenu, TFRTabItem, UIButton, UIColor, UIFont, UIImageView, UILabel;

@interface TFRBarItemView : UIView <TFRPopMenuDelegate>
{
    _Bool _isSelected;
    unsigned long long _style;
    TFRBaseCell *_containerCell;
    UILabel *_titleLabel;
    UIFont *_titleFont;
    UIFont *_selectedTitleFont;
    UIColor *_titleColor;
    UIColor *_selectedTitleColor;
    long long _index;
    CDUnknownBlockType _onSelected;
    CDUnknownBlockType _onGroupSelected;
    UIView *_contentView;
    UIButton *_selectionButton;
    UIView *_redPoint;
    TFRPopMenu *_menu;
    NSArray *_menuItems;
    TFRTabItem *_item;
    long long _childIndex;
    UIImageView *_triangleView;
    UIColor *_menuBackgroundColor;
    UIColor *_menuTitleColor;
    UIColor *_menuSeparatorColor;
    NSString *_menuArrowImageName;
}

@property(retain, nonatomic) NSString *menuArrowImageName; // @synthesize menuArrowImageName=_menuArrowImageName;
@property(retain, nonatomic) UIColor *menuSeparatorColor; // @synthesize menuSeparatorColor=_menuSeparatorColor;
@property(retain, nonatomic) UIColor *menuTitleColor; // @synthesize menuTitleColor=_menuTitleColor;
@property(retain, nonatomic) UIColor *menuBackgroundColor; // @synthesize menuBackgroundColor=_menuBackgroundColor;
@property(retain, nonatomic) UIImageView *triangleView; // @synthesize triangleView=_triangleView;
@property(nonatomic) long long childIndex; // @synthesize childIndex=_childIndex;
@property(retain, nonatomic) TFRTabItem *item; // @synthesize item=_item;
@property(retain, nonatomic) NSArray *menuItems; // @synthesize menuItems=_menuItems;
@property(retain, nonatomic) TFRPopMenu *menu; // @synthesize menu=_menu;
@property(retain, nonatomic) UIView *redPoint; // @synthesize redPoint=_redPoint;
@property(retain, nonatomic) UIButton *selectionButton; // @synthesize selectionButton=_selectionButton;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(copy, nonatomic) CDUnknownBlockType onGroupSelected; // @synthesize onGroupSelected=_onGroupSelected;
@property(copy, nonatomic) CDUnknownBlockType onSelected; // @synthesize onSelected=_onSelected;
@property(nonatomic) long long index; // @synthesize index=_index;
@property(retain, nonatomic) UIColor *selectedTitleColor; // @synthesize selectedTitleColor=_selectedTitleColor;
@property(retain, nonatomic) UIColor *titleColor; // @synthesize titleColor=_titleColor;
@property(retain, nonatomic) UIFont *selectedTitleFont; // @synthesize selectedTitleFont=_selectedTitleFont;
@property(retain, nonatomic) UIFont *titleFont; // @synthesize titleFont=_titleFont;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak TFRBaseCell *containerCell; // @synthesize containerCell=_containerCell;
@property(readonly, nonatomic) unsigned long long style; // @synthesize style=_style;
@property(readonly, nonatomic) _Bool isSelected; // @synthesize isSelected=_isSelected;
- (void).cxx_destruct;
- (void)DidClickPopItemViewAtIndex:(long long)arg1 itemModel:(id)arg2;
- (void)setMenuListWithData:(id)arg1;
- (void)checkViewStyleWithData:(id)arg1;
- (void)updateTitleStyle;
- (void)updateMenuBackgroundColor:(id)arg1 titleColor:(id)arg2 separatorColor:(id)arg3 arrowImageName:(id)arg4;
- (void)onSelectBtnClicked;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)removeRedPoint;
- (void)showRedPointWithLocation:(struct CGPoint)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 item:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

