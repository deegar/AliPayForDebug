//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class GreenWalletAntTalkViewData, UIImageView, UILabel;

@interface GreenWalletAntTalkView : UIView
{
    GreenWalletAntTalkViewData *_data;
    UIImageView *_imageBack;
    UILabel *_labelTitle;
    struct CGPoint _originPoint;
}

+ (id)showAntTalkAtOrigin:(struct CGPoint)arg1 inView:(id)arg2 withData:(id)arg3;
@property(retain, nonatomic) UILabel *labelTitle; // @synthesize labelTitle=_labelTitle;
@property(retain, nonatomic) UIImageView *imageBack; // @synthesize imageBack=_imageBack;
@property(retain, nonatomic) GreenWalletAntTalkViewData *data; // @synthesize data=_data;
@property(nonatomic) struct CGPoint originPoint; // @synthesize originPoint=_originPoint;
- (void).cxx_destruct;
- (void)dismiss;
- (void)actionTap:(id)arg1;
- (void)createSubviews;
- (id)initWithOrigin:(struct CGPoint)arg1 data:(id)arg2;

@end

