//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UIButton, UILabel;

@interface PFMenu : UIView
{
    int _showType;
    int _sortType;
    CDUnknownBlockType _stateChangedCallback;
    NSString *_group;
    UILabel *_nameLabel;
    UIButton *_iconButton;
    UIButton *_priceButton;
    UIButton *_changeButton;
    UIView *_line;
}

@property(retain, nonatomic) UIView *line; // @synthesize line=_line;
@property(retain, nonatomic) UIButton *changeButton; // @synthesize changeButton=_changeButton;
@property(retain, nonatomic) UIButton *priceButton; // @synthesize priceButton=_priceButton;
@property(retain, nonatomic) UIButton *iconButton; // @synthesize iconButton=_iconButton;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) NSString *group; // @synthesize group=_group;
@property(readonly, nonatomic) int sortType; // @synthesize sortType=_sortType;
@property(readonly, nonatomic) int showType; // @synthesize showType=_showType;
@property(copy, nonatomic) CDUnknownBlockType stateChangedCallback; // @synthesize stateChangedCallback=_stateChangedCallback;
- (void).cxx_destruct;
- (void)showTagInfoButton:(_Bool)arg1;
- (void)iconButtonAction;
- (void)priceButtonAction;
- (void)changeButtonAction;
- (void)updateUI;
- (void)arrangeImage:(id)arg1;
- (void)updateShowtype:(int)arg1 sortType:(int)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

