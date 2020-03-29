//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UIImageView, UILabel, UIWindow;

@interface ZDocAlertController : UIView
{
    UILabel *_titleLabel;
    UILabel *_contentLabel;
    UIImageView *_imageView;
    UIButton *_leftButton;
    UIButton *_rightButton;
    unsigned long long _viewtype;
    CDUnknownBlockType _leftButtonAction;
    CDUnknownBlockType _rightButtonAction;
    UIView *_backgroundView;
    UIView *_contentView;
    UIWindow *_backGroundWindow;
}

@property(retain, nonatomic) UIWindow *backGroundWindow; // @synthesize backGroundWindow=_backGroundWindow;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(copy, nonatomic) CDUnknownBlockType rightButtonAction; // @synthesize rightButtonAction=_rightButtonAction;
@property(copy, nonatomic) CDUnknownBlockType leftButtonAction; // @synthesize leftButtonAction=_leftButtonAction;
@property(nonatomic) unsigned long long viewtype; // @synthesize viewtype=_viewtype;
@property(retain, nonatomic) UIButton *rightButton; // @synthesize rightButton=_rightButton;
@property(retain, nonatomic) UIButton *leftButton; // @synthesize leftButton=_leftButton;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UILabel *contentLabel; // @synthesize contentLabel=_contentLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)setLabelText:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 type:(unsigned long long)arg2 landScape:(_Bool)arg3;
- (void)setHidden:(_Bool)arg1;
- (id)imageWithColor:(id)arg1 size:(struct CGSize)arg2;
- (void)clickRightButton:(id)arg1;
- (void)clickLeftButton:(id)arg1;

@end
