//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSDictionary, NSString, SUImageView, UIButton, UILabel;
@protocol SCTipsCardBannerViewDelegate;

@interface SCTipsCardBannerView : UIView
{
    id <SCTipsCardBannerViewDelegate> _delegate;
    NSString *_templateCode;
    NSDictionary *_bannerData;
    SUImageView *_backImageView;
    UILabel *_bannerTitleLabel;
    UIButton *_bannerButton;
}

+ (struct CGSize)sizeOfBannerData:(id)arg1 viewWidth:(double)arg2;
@property(retain, nonatomic) UIButton *bannerButton; // @synthesize bannerButton=_bannerButton;
@property(retain, nonatomic) UILabel *bannerTitleLabel; // @synthesize bannerTitleLabel=_bannerTitleLabel;
@property(retain, nonatomic) SUImageView *backImageView; // @synthesize backImageView=_backImageView;
@property(retain, nonatomic) NSDictionary *bannerData; // @synthesize bannerData=_bannerData;
@property(retain, nonatomic) NSString *templateCode; // @synthesize templateCode=_templateCode;
@property(nonatomic) __weak id <SCTipsCardBannerViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)logClickWithChatItem:(id)arg1 bizType:(id)arg2;
- (void)layoutSubviews;
- (void)bindData:(id)arg1;
- (void)buttonTapped;
- (id)initWithFrame:(struct CGRect)arg1;

@end
