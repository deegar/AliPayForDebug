//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "O2OCommentLevelViewDelegate-Protocol.h"
#import "O2OCommentScoreViewDelegate-Protocol.h"

@class NSString, O2OCommentLevelView, O2OCommentScoreView, UIFont;
@protocol O2OEmoticonRateViewDelegate;

@interface O2OEmoticonRateView : UIView <O2OCommentLevelViewDelegate, O2OCommentScoreViewDelegate>
{
    _Bool _needAnimation;
    _Bool _isFivePointSystem;
    id <O2OEmoticonRateViewDelegate> _delegate;
    O2OCommentLevelView *_levelView;
    O2OCommentScoreView *_scoreView;
    double _emoticonWidth;
    double _emoticonMargin;
    UIFont *_titleFont;
}

+ (struct CGSize)fitSize:(struct CGSize)arg1 config:(id)arg2;
@property(retain, nonatomic) UIFont *titleFont; // @synthesize titleFont=_titleFont;
@property(nonatomic) double emoticonMargin; // @synthesize emoticonMargin=_emoticonMargin;
@property(nonatomic) double emoticonWidth; // @synthesize emoticonWidth=_emoticonWidth;
@property(nonatomic) _Bool isFivePointSystem; // @synthesize isFivePointSystem=_isFivePointSystem;
@property(retain, nonatomic) O2OCommentScoreView *scoreView; // @synthesize scoreView=_scoreView;
@property(retain, nonatomic) O2OCommentLevelView *levelView; // @synthesize levelView=_levelView;
@property(nonatomic) _Bool needAnimation; // @synthesize needAnimation=_needAnimation;
@property(nonatomic) __weak id <O2OEmoticonRateViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)commentScoreView:(id)arg1 scoreDidChanged:(unsigned long long)arg2 type:(unsigned long long)arg3;
- (void)commentLevelView:(id)arg1 levelDidChange:(long long)arg2;
- (void)relayout;
- (void)requestCurrentStyle;
- (void)setupUI;
@property(readonly, nonatomic) unsigned long long rateLevel;
- (id)initWithOrigin:(struct CGPoint)arg1 emoticonWidth:(double)arg2 emoticonMargin:(double)arg3 titleFont:(id)arg4;
- (id)initWithOrigin:(struct CGPoint)arg1 emoticonWidth:(double)arg2 emoticonMargin:(double)arg3;
- (id)initWithOrigin:(struct CGPoint)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

