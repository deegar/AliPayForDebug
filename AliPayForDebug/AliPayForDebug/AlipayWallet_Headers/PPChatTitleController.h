//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PPChatBaseController.h"

@class NSArray, NSString, PPChatPublicAccount, PPChatSwitchControl, PPChatThirdPartyAccount, PUBLICCOREDiscountData, PreferentialView, UIButton, UINavigationItem, UIView;

@interface PPChatTitleController : PPChatBaseController
{
    PPChatSwitchControl *_switchControl;
    UIButton *_switchButton;
    PPChatThirdPartyAccount *_thirdPartyAccount;
    PPChatPublicAccount *_publicAccount;
    NSArray *_thirdPartyAccounts;
    NSArray *_thirdPartyAccountNames;
    NSArray *_thirdPartyAccountNamesCache;
    UIView *_secondTitleView;
    PUBLICCOREDiscountData *_spdata;
    PreferentialView *_preferentialView;
    NSString *_titleName;
    NSString *_secondTitle;
    NSString *_secondTitleDisplayName;
    NSString *_initialAccountId;
    UINavigationItem *_naviItem;
    struct CGRect _switchFrame;
    struct CGRect _secondTitleFrame;
}

@property(nonatomic) struct CGRect secondTitleFrame; // @synthesize secondTitleFrame=_secondTitleFrame;
@property(nonatomic) struct CGRect switchFrame; // @synthesize switchFrame=_switchFrame;
@property(nonatomic) __weak UINavigationItem *naviItem; // @synthesize naviItem=_naviItem;
@property(retain, nonatomic) NSString *initialAccountId; // @synthesize initialAccountId=_initialAccountId;
@property(retain, nonatomic) NSString *secondTitleDisplayName; // @synthesize secondTitleDisplayName=_secondTitleDisplayName;
@property(retain, nonatomic) NSString *secondTitle; // @synthesize secondTitle=_secondTitle;
@property(retain, nonatomic) NSString *titleName; // @synthesize titleName=_titleName;
@property(retain, nonatomic) PreferentialView *preferentialView; // @synthesize preferentialView=_preferentialView;
@property(retain, nonatomic) PUBLICCOREDiscountData *spdata; // @synthesize spdata=_spdata;
@property(retain, nonatomic) UIView *secondTitleView; // @synthesize secondTitleView=_secondTitleView;
@property(retain, nonatomic) NSArray *thirdPartyAccountNamesCache; // @synthesize thirdPartyAccountNamesCache=_thirdPartyAccountNamesCache;
@property(retain, nonatomic) NSArray *thirdPartyAccountNames; // @synthesize thirdPartyAccountNames=_thirdPartyAccountNames;
@property(retain, nonatomic) NSArray *thirdPartyAccounts; // @synthesize thirdPartyAccounts=_thirdPartyAccounts;
@property(retain, nonatomic) PPChatPublicAccount *publicAccount; // @synthesize publicAccount=_publicAccount;
@property(retain, nonatomic) PPChatThirdPartyAccount *thirdPartyAccount; // @synthesize thirdPartyAccount=_thirdPartyAccount;
@property(retain, nonatomic) UIButton *switchButton; // @synthesize switchButton=_switchButton;
@property(retain, nonatomic) PPChatSwitchControl *switchControl; // @synthesize switchControl=_switchControl;
- (void).cxx_destruct;
- (void)refreshThirdAccount:(id)arg1 thirdPartyAccounts:(id)arg2;
- (void)loadThirdAccountView:(id)arg1 isThird:(_Bool)arg2;
- (void)switchControlShow;
- (void)switchButtonShow;
- (void)hideKeyBoardAction;
- (void)onThirdPartyAccountChange;
- (_Bool)isSameAccounts;
- (void)jumpToO2O;
- (void)preferentialAnimation:(id)arg1;
- (void)preferentialShow;
- (void)secondTitleShow;
- (void)titleShow;
- (void)updateSwitchControl;
- (void)updateControls;
- (void)toggleAccountSwitchControl;
- (void)selectThirdPartyAccountPrefer:(id)arg1;
- (void)selectThirdPartyAccountWithPrevAccounts:(id)arg1;
- (void)onSwitchButtonClick;
- (void)onClick;
- (id)getHighlightImage:(id)arg1;
- (id)getArrowImage;
- (void)showWithNavigationItem:(id)arg1 defaultAccount:(id)arg2 publicAccount:(id)arg3 thirdPartyAccounts:(id)arg4;
- (void)controlClear;
- (void)action:(int)arg1 withControllerParam:(id)arg2;
- (void)showWithControllerParam:(id)arg1;
- (void)layoutWithFrame:(struct CGRect)arg1;
- (double)heightOfView;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;

@end

