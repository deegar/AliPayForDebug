//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class APBGarfieldTextLayer, UIButton;
@protocol ZolozNaviBarDelegate;

@interface ZolozNaviBarView : UIView
{
    UIButton *_rightButton;
    UIButton *_leftButton;
    APBGarfieldTextLayer *_rightButtonTextLayer;
    UIView *_backgroudView;
    id <ZolozNaviBarDelegate> _delegate;
}

@property(nonatomic) __weak id <ZolozNaviBarDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIView *backgroudView; // @synthesize backgroudView=_backgroudView;
@property(retain, nonatomic) APBGarfieldTextLayer *rightButtonTextLayer; // @synthesize rightButtonTextLayer=_rightButtonTextLayer;
@property(retain, nonatomic) UIButton *leftButton; // @synthesize leftButton=_leftButton;
@property(retain, nonatomic) UIButton *rightButton; // @synthesize rightButton=_rightButton;
- (void).cxx_destruct;
- (void)setRightButtonText:(id)arg1;
- (void)onRightButtonTouched;
- (void)onLeftButtonTouched;
- (void)layoutSubviews;
- (void)setGradientLayer:(id)arg1 endColor:(id)arg2;
- (void)_updateView;
- (void)_buildShowView;
- (id)initWithFrame:(struct CGRect)arg1;

@end

