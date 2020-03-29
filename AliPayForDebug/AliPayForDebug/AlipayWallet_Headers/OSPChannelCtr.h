//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

@class AUButton, NSString, OSPMulSectionLabel, OSPPayChannelModel, OSPShortcutModel, UIImageView, UILabel, UIView;

@interface OSPChannelCtr : UIControl
{
    UIImageView *_iconView;
    OSPShortcutModel *_shortcutModel;
    OSPPayChannelModel *_payChannelModel;
    UILabel *_titleLabel;
    OSPMulSectionLabel *_sectionLabel;
    UILabel *_payDescLabel;
    UIImageView *_arrowView;
    AUButton *_extLabel;
    UIView *_leftLine;
    UIView *_rightLine;
    NSString *_extText;
    UIImageView *_topImageView;
}

@property(retain, nonatomic) UIImageView *topImageView; // @synthesize topImageView=_topImageView;
@property(copy, nonatomic) NSString *extText; // @synthesize extText=_extText;
@property(retain, nonatomic) UIView *rightLine; // @synthesize rightLine=_rightLine;
@property(retain, nonatomic) UIView *leftLine; // @synthesize leftLine=_leftLine;
@property(retain, nonatomic) AUButton *extLabel; // @synthesize extLabel=_extLabel;
@property(retain, nonatomic) UIImageView *arrowView; // @synthesize arrowView=_arrowView;
@property(retain, nonatomic) UILabel *payDescLabel; // @synthesize payDescLabel=_payDescLabel;
@property(retain, nonatomic) OSPMulSectionLabel *sectionLabel; // @synthesize sectionLabel=_sectionLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) OSPPayChannelModel *payChannelModel; // @synthesize payChannelModel=_payChannelModel;
@property(retain, nonatomic) OSPShortcutModel *shortcutModel; // @synthesize shortcutModel=_shortcutModel;
@property(retain, nonatomic) UIImageView *iconView; // @synthesize iconView=_iconView;
- (void).cxx_destruct;
- (void)setChannelModel:(id)arg1;
- (void)setChannelModelV2:(id)arg1;
- (void)setIcon:(id)arg1;
- (id)getTextFontNeedAdapt:(_Bool)arg1;
- (void)layoutShortcut;
- (void)createSubViews;
- (id)adExtText;
- (id)getChannelModel;
- (id)getModel;
- (id)initWithFrame:(struct CGRect)arg1 model:(id)arg2 extText:(id)arg3;

@end

