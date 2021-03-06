//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BLLWTableViewController.h"

#import "BLLWBarDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@class BLLWBar, NSString;

@interface BLLWContactListViewController : BLLWTableViewController <BLLWBarDelegate, UIGestureRecognizerDelegate>
{
    _Bool _showSettingButton;
    _Bool _canShowNavTitle;
    _Bool _shouldRefrush;
    BLLWBar *menuBar;
    NSString *_publicId;
    NSString *_navTitle;
    NSString *_subNavTitle;
    NSString *_loginId;
    NSString *_realName;
}

@property(nonatomic) _Bool shouldRefrush; // @synthesize shouldRefrush=_shouldRefrush;
@property(nonatomic) _Bool canShowNavTitle; // @synthesize canShowNavTitle=_canShowNavTitle;
@property(nonatomic) _Bool showSettingButton; // @synthesize showSettingButton=_showSettingButton;
@property(retain, nonatomic) NSString *realName; // @synthesize realName=_realName;
@property(retain, nonatomic) NSString *loginId; // @synthesize loginId=_loginId;
@property(retain, nonatomic) NSString *subNavTitle; // @synthesize subNavTitle=_subNavTitle;
@property(retain, nonatomic) NSString *navTitle; // @synthesize navTitle=_navTitle;
@property(retain, nonatomic) NSString *publicId; // @synthesize publicId=_publicId;
@property(retain, nonatomic) BLLWBar *menuBar; // @synthesize menuBar;
- (void).cxx_destruct;
- (_Bool)getFollowData:(id)arg1;
- (void)navigationButton:(_Bool)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)gotoPage:(long long)arg1 action:(id)arg2 menuType:(id)arg3 title:(id)arg4;
- (void)setPageTitle:(id)arg1 withSubTitle:(id)arg2;
- (_Bool)isShowMenuBar:(id)arg1;
- (void)updateBaseData:(id)arg1;
- (void)queryContactBaseInfo;
- (void)loadContactBaseInfo;
- (void)doNotifycationShouldRefrushFromH5:(id)arg1;
- (void)doNotifycationShouldRefrush:(id)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (void)initUI;
- (id)initWithParaInfo:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

