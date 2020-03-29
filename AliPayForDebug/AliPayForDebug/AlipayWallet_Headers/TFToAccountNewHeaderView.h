//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class TFNewVipLevelIcon, TFTransferToAccount, UIButton, UIImageView, UILabel;
@protocol TFToAccountHeaderViewDelegate;

@interface TFToAccountNewHeaderView : UIView
{
    id <TFToAccountHeaderViewDelegate> _delegate;
    TFTransferToAccount *_reciverAccount;
    UIImageView *_reciverHeadImageView;
    UILabel *_reciverPreAccountNameLabel;
    UILabel *_reciverNickNameLabel;
    UIView *_reciverInfoContainerView;
    UILabel *_reciverAccountLabel;
    UIImageView *_unRealIcon;
    UIButton *_verifyIcon;
    TFNewVipLevelIcon *_vipLevelIcon;
}

+ (id)accountHeaderViewWithRecevierInfo:(id)arg1 delegate:(id)arg2;
@property(retain, nonatomic) TFNewVipLevelIcon *vipLevelIcon; // @synthesize vipLevelIcon=_vipLevelIcon;
@property(retain, nonatomic) UIButton *verifyIcon; // @synthesize verifyIcon=_verifyIcon;
@property(retain, nonatomic) UIImageView *unRealIcon; // @synthesize unRealIcon=_unRealIcon;
@property(retain, nonatomic) UILabel *reciverAccountLabel; // @synthesize reciverAccountLabel=_reciverAccountLabel;
@property(retain, nonatomic) UIView *reciverInfoContainerView; // @synthesize reciverInfoContainerView=_reciverInfoContainerView;
@property(retain, nonatomic) UILabel *reciverNickNameLabel; // @synthesize reciverNickNameLabel=_reciverNickNameLabel;
@property(retain, nonatomic) UILabel *reciverPreAccountNameLabel; // @synthesize reciverPreAccountNameLabel=_reciverPreAccountNameLabel;
@property(retain, nonatomic) UIImageView *reciverHeadImageView; // @synthesize reciverHeadImageView=_reciverHeadImageView;
@property(retain, nonatomic) TFTransferToAccount *reciverAccount; // @synthesize reciverAccount=_reciverAccount;
@property(nonatomic) __weak id <TFToAccountHeaderViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)reciverHeadTap;
- (void)verifyBtnTap;
- (void)updateReciverInfoSection;
- (void)updateHeadSection;
- (void)reloadReciverAccount:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

