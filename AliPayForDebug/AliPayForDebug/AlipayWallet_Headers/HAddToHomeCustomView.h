//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class ACApp, HImageView, UIImageView, UILabel;

@interface HAddToHomeCustomView : UIView
{
    ACApp *_app;
    UILabel *_noticeLabel;
    UIImageView *_backgroundImageView;
    HImageView *_largeIconImageView;
    UILabel *_largeNameLabel;
    HImageView *_smallIconImageView;
    UILabel *_smallNameLabel;
}

@property(retain, nonatomic) UILabel *smallNameLabel; // @synthesize smallNameLabel=_smallNameLabel;
@property(retain, nonatomic) HImageView *smallIconImageView; // @synthesize smallIconImageView=_smallIconImageView;
@property(retain, nonatomic) UILabel *largeNameLabel; // @synthesize largeNameLabel=_largeNameLabel;
@property(retain, nonatomic) HImageView *largeIconImageView; // @synthesize largeIconImageView=_largeIconImageView;
@property(retain, nonatomic) UIImageView *backgroundImageView; // @synthesize backgroundImageView=_backgroundImageView;
@property(retain, nonatomic) UILabel *noticeLabel; // @synthesize noticeLabel=_noticeLabel;
@property(retain, nonatomic) ACApp *app; // @synthesize app=_app;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithApp:(id)arg1;

@end

