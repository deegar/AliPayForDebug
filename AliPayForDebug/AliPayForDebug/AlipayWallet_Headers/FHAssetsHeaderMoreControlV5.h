//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

@class FHAssetsHeaderMoreControlAnimationV5, UIImageView, UILabel;

@interface FHAssetsHeaderMoreControlV5 : UIControl
{
    _Bool _isTransformed;
    _Bool _hasCheckedGuideAnimation;
    _Bool _needStartGuideAnimation;
    _Bool _needStartTipAnimation;
    _Bool _hasStartTipAnimation;
    _Bool _disableAnimation;
    UIImageView *_arrowImageView;
    UILabel *_tipLabel;
    FHAssetsHeaderMoreControlAnimationV5 *_guideAnimation;
    FHAssetsHeaderMoreControlAnimationV5 *_tipAnimation;
}

@property(nonatomic) _Bool disableAnimation; // @synthesize disableAnimation=_disableAnimation;
@property(nonatomic) _Bool hasStartTipAnimation; // @synthesize hasStartTipAnimation=_hasStartTipAnimation;
@property(nonatomic) _Bool needStartTipAnimation; // @synthesize needStartTipAnimation=_needStartTipAnimation;
@property(nonatomic) _Bool needStartGuideAnimation; // @synthesize needStartGuideAnimation=_needStartGuideAnimation;
@property(nonatomic) _Bool hasCheckedGuideAnimation; // @synthesize hasCheckedGuideAnimation=_hasCheckedGuideAnimation;
@property(retain, nonatomic) FHAssetsHeaderMoreControlAnimationV5 *tipAnimation; // @synthesize tipAnimation=_tipAnimation;
@property(retain, nonatomic) FHAssetsHeaderMoreControlAnimationV5 *guideAnimation; // @synthesize guideAnimation=_guideAnimation;
@property(nonatomic) _Bool isTransformed; // @synthesize isTransformed=_isTransformed;
@property(retain, nonatomic) UILabel *tipLabel; // @synthesize tipLabel=_tipLabel;
@property(retain, nonatomic) UIImageView *arrowImageView; // @synthesize arrowImageView=_arrowImageView;
- (void).cxx_destruct;
- (void)setArrowImageViewRotation:(double)arg1;
- (void)changeShowELement;
- (void)setTipText:(id)arg1;
- (void)startTipAnimation;
- (void)startGuideAnimation;
- (void)didMoveToWindow;
- (id)initWithFrame:(struct CGRect)arg1;

@end

