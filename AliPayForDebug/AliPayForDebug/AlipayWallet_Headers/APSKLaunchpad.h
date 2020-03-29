//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UIGestureRecognizerDelegate-Protocol.h"

@class APSKPreInfoView, APSKShareOption, NSArray, NSDictionary, NSString, UIButton;
@protocol APSKLaunchpadDataSource, APSKLaunchpadDelegate;

@interface APSKLaunchpad : UIView <UIGestureRecognizerDelegate>
{
    UIView *_parentView;
    UIButton *_checkBtn;
    UIView *_backgroundView;
    APSKShareOption *_shareOption;
    APSKPreInfoView *_preInfoBigView;
    UIView *_boardView;
    UIView *_loadingView;
    UIView *_resultView;
    UIView *_shadowView;
    UIView *_lastSuperView;
    double _orginalWindowLevel;
    CDUnknownBlockType _gotoCallBack;
    _Bool _landscape;
    _Bool _dealQuickContact;
    NSArray *_recentUsers;
    APSKPreInfoView *_preInfoView;
    NSArray *_channels;
    long long _padType;
    NSDictionary *_logExtInfos;
    NSString *_bizType;
    id <APSKLaunchpadDelegate> _delegate;
    id <APSKLaunchpadDataSource> _dataSource;
    NSString *_title;
}

+ (struct CGSize)sizeWithLabel:(id)arg1;
+ (void)registerEnabledChannels:(id)arg1 extraInfo:(id)arg2;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) __weak id <APSKLaunchpadDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) __weak id <APSKLaunchpadDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSString *bizType; // @synthesize bizType=_bizType;
@property(retain, nonatomic) NSDictionary *logExtInfos; // @synthesize logExtInfos=_logExtInfos;
@property(nonatomic) long long padType; // @synthesize padType=_padType;
@property(retain, nonatomic) NSArray *channels; // @synthesize channels=_channels;
@property(retain, nonatomic) APSKPreInfoView *preInfoView; // @synthesize preInfoView=_preInfoView;
- (void).cxx_destruct;
- (void)setupRecentData;
- (id)navigationControllerForView:(id)arg1;
- (id)createCheckArea:(double)arg1;
- (id)createCloseView;
- (id)createCancelButton;
- (id)createBackgroundView;
- (void)willMoveToSuperview:(id)arg1;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)onRecentItemClicked:(id)arg1;
- (void)onActivityClicked:(id)arg1;
- (void)onCancelClick:(id)arg1;
- (void)saveCheckStatus:(id)arg1;
- (void)gotoAction;
- (unsigned long long)selectedShareTokenOption;
- (id)getSnapshotImage;
- (_Bool)hasPreView;
- (void)notifyDidmiss;
- (void)dismissAnimated:(_Bool)arg1;
- (void)showForView:(id)arg1 animated:(_Bool)arg2;
- (double)heightForLoadingView;
- (void)setProcessText:(id)arg1 status:(unsigned long long)arg2 gotoText:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)getInfoView:(_Bool)arg1;
- (void)initPreInfoView;
- (void)setupSubviews;
- (void)dealloc;
- (id)initWithOption:(id)arg1 dataSource:(id)arg2;
- (id)initWithChannels:(id)arg1 title:(id)arg2 dataSource:(id)arg3;
- (id)initWithTitle:(id)arg1 padType:(long long)arg2 bizType:(id)arg3 dataSource:(id)arg4;
- (id)initWithChannels:(id)arg1 dataSource:(id)arg2;
- (id)initWithChannels:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

