//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UIColor, UIImage, UIImageView, UILabel;

@interface APPassListItemView : UIView
{
    UIImage *_logoImagePlaceHolder;
    UIImage *_statusImage;
    UILabel *_logoTextLabel;
    UILabel *_secondLogoTextLabel;
    NSString *_logoUrlStr;
    NSString *_logoTextLabelText;
    NSString *_secondLogoTextLabelText;
    NSString *_bottomLabelText;
    UIColor *_logoTextColor;
    UIColor *_backViewColor;
    UIImageView *_logoImageView;
    UILabel *_bottomLabel;
    UIImageView *_passStatusImgView;
    UIView *_backView;
    UIView *_shadowView;
}

@property(retain, nonatomic) UIView *shadowView; // @synthesize shadowView=_shadowView;
@property(retain, nonatomic) UIView *backView; // @synthesize backView=_backView;
@property(retain, nonatomic) UIImageView *passStatusImgView; // @synthesize passStatusImgView=_passStatusImgView;
@property(retain, nonatomic) UILabel *bottomLabel; // @synthesize bottomLabel=_bottomLabel;
@property(retain, nonatomic) UIImageView *logoImageView; // @synthesize logoImageView=_logoImageView;
@property(retain, nonatomic) UIColor *backViewColor; // @synthesize backViewColor=_backViewColor;
@property(retain, nonatomic) UIColor *logoTextColor; // @synthesize logoTextColor=_logoTextColor;
@property(copy, nonatomic) NSString *bottomLabelText; // @synthesize bottomLabelText=_bottomLabelText;
@property(copy, nonatomic) NSString *secondLogoTextLabelText; // @synthesize secondLogoTextLabelText=_secondLogoTextLabelText;
@property(copy, nonatomic) NSString *logoTextLabelText; // @synthesize logoTextLabelText=_logoTextLabelText;
@property(copy, nonatomic) NSString *logoUrlStr; // @synthesize logoUrlStr=_logoUrlStr;
@property(retain, nonatomic) UILabel *secondLogoTextLabel; // @synthesize secondLogoTextLabel=_secondLogoTextLabel;
@property(retain, nonatomic) UILabel *logoTextLabel; // @synthesize logoTextLabel=_logoTextLabel;
@property(retain, nonatomic) UIImage *statusImage; // @synthesize statusImage=_statusImage;
@property(retain, nonatomic) UIImage *logoImagePlaceHolder; // @synthesize logoImagePlaceHolder=_logoImagePlaceHolder;
- (void).cxx_destruct;
- (void)createBottomText;
- (void)createOverlay;
- (void)createSecondLogoTextLabel;
- (void)createLogoTextLabel;
- (void)creastStatusImageView;
- (void)createLogoImageView;
- (void)createBackgroundWithRoundCorner;
- (void)checkLogoTextPostion;
- (id)initWithFrame:(struct CGRect)arg1;

@end

