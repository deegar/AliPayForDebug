//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "TFHomeATActionViewDelegate-Protocol.h"
#import "TFHomeAssistantTemplateProtocol-Protocol.h"

@class CCard, MFAttributeLabel, NSString, TFHomeATActionView, TFHomeATAnimationView, UIButton, UIImageView;

@interface TFHomeAssistantTemplateOne : UIView <TFHomeATActionViewDelegate, TFHomeAssistantTemplateProtocol>
{
    UIButton *_btnBg;
    UIImageView *_imgViewBg;
    UIImageView *_imgViewDesc;
    MFAttributeLabel *_lblDesc;
    MFAttributeLabel *_lblTitle;
    MFAttributeLabel *_lblSubtitle;
    UIImageView *_imgViewArrow;
    TFHomeATActionView *_actionView;
    TFHomeATAnimationView *_animationView;
    CCard *_card;
}

@property(retain, nonatomic) CCard *card; // @synthesize card=_card;
@property(retain, nonatomic) TFHomeATAnimationView *animationView; // @synthesize animationView=_animationView;
@property(retain, nonatomic) TFHomeATActionView *actionView; // @synthesize actionView=_actionView;
@property(retain, nonatomic) UIImageView *imgViewArrow; // @synthesize imgViewArrow=_imgViewArrow;
@property(retain, nonatomic) MFAttributeLabel *lblSubtitle; // @synthesize lblSubtitle=_lblSubtitle;
@property(retain, nonatomic) MFAttributeLabel *lblTitle; // @synthesize lblTitle=_lblTitle;
@property(retain, nonatomic) MFAttributeLabel *lblDesc; // @synthesize lblDesc=_lblDesc;
@property(retain, nonatomic) UIImageView *imgViewDesc; // @synthesize imgViewDesc=_imgViewDesc;
@property(retain, nonatomic) UIImageView *imgViewBg; // @synthesize imgViewBg=_imgViewBg;
@property(retain, nonatomic) UIButton *btnBg; // @synthesize btnBg=_btnBg;
- (void).cxx_destruct;
- (void)homeATHandleAnimtion:(id)arg1;
- (void)homeATActionViewClicked:(id)arg1;
- (void)btnBgTouchHandler;
- (void)updateFrame;
- (void)setupSubviews;
- (void)templateClicked:(id)arg1;
- (void)configData:(id)arg1;
- (_Bool)isAccessibilityElement;
- (id)accessibilityLabel;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

