//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GSViewController.h"

@class APNumPwdPopupView, UIAlertView;

@interface GSCommonViewController : GSViewController
{
    _Bool _isMobileDomainUser;
    APNumPwdPopupView *_pwdPopup;
    UIAlertView *_alertView;
}

@property(retain, nonatomic) UIAlertView *alertView; // @synthesize alertView=_alertView;
@property(retain, nonatomic) APNumPwdPopupView *pwdPopup; // @synthesize pwdPopup=_pwdPopup;
@property(nonatomic) _Bool isMobileDomainUser; // @synthesize isMobileDomainUser=_isMobileDomainUser;
- (void).cxx_destruct;
- (void)dealloc;
- (void)refreshData;
- (void)pushGestureVerifyViewControllerFrom:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)handleSuccessRpcResultWithIdentifier:(id)arg1;
- (void)showPwdPopViewWithRpcIdentifier:(id)arg1;

@end

