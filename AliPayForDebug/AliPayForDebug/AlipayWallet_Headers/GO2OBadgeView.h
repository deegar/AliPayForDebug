//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UIColor, UIFont, UIImage, UIImageView, UILabel;

@interface GO2OBadgeView : UIView
{
    NSString *_badgeValue;
    UIImage *_badgeImage;
    UIFont *_font;
    UIColor *_textColor;
    UILabel *_label;
    UIImageView *_imageView;
}

@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(retain, nonatomic) UIFont *font; // @synthesize font=_font;
@property(retain, nonatomic) UIImage *badgeImage; // @synthesize badgeImage=_badgeImage;
@property(retain, nonatomic) NSString *badgeValue; // @synthesize badgeValue=_badgeValue;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;

@end

