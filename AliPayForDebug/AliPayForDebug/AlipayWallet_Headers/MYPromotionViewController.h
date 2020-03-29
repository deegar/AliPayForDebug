//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class MYPromotionConfigModel, MYPromotionView, NSDate, NSMutableDictionary, UIImageView, UIView;
@protocol MYPromotionDisplayControllerProtocol, MYPromotionViewControllerDelegate;

@interface MYPromotionViewController : UIViewController
{
    _Bool _isTracking;
    _Bool _applicationIsActive;
    UIViewController *_attachedController;
    id <MYPromotionDisplayControllerProtocol> _controllerEventDelegate;
    MYPromotionConfigModel *_config;
    long long _promotionState;
    unsigned long long _viewAppearState;
    double _startTime;
    double _h5CreateTime;
    double _displayTime;
    double _displayedTime;
    double _backgroundTime;
    UIView *_hostView;
    NSMutableDictionary *_logs;
    id <MYPromotionViewControllerDelegate> _delegate;
    MYPromotionView *_contentContainer;
    NSDate *_loadBeginTime;
    UIImageView *_closeView;
}

@property(retain, nonatomic) UIImageView *closeView; // @synthesize closeView=_closeView;
@property(retain, nonatomic) NSDate *loadBeginTime; // @synthesize loadBeginTime=_loadBeginTime;
@property(retain, nonatomic) MYPromotionView *contentContainer; // @synthesize contentContainer=_contentContainer;
@property(nonatomic) __weak id <MYPromotionViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSMutableDictionary *logs; // @synthesize logs=_logs;
@property(nonatomic) __weak UIView *hostView; // @synthesize hostView=_hostView;
@property(nonatomic) double backgroundTime; // @synthesize backgroundTime=_backgroundTime;
@property(nonatomic) double displayedTime; // @synthesize displayedTime=_displayedTime;
@property(nonatomic) double displayTime; // @synthesize displayTime=_displayTime;
@property(nonatomic) double h5CreateTime; // @synthesize h5CreateTime=_h5CreateTime;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(readonly, nonatomic) unsigned long long viewAppearState; // @synthesize viewAppearState=_viewAppearState;
@property(nonatomic) _Bool applicationIsActive; // @synthesize applicationIsActive=_applicationIsActive;
@property(nonatomic) long long promotionState; // @synthesize promotionState=_promotionState;
@property(nonatomic) _Bool isTracking; // @synthesize isTracking=_isTracking;
@property(readonly, nonatomic) MYPromotionConfigModel *config; // @synthesize config=_config;
@property(nonatomic) __weak id <MYPromotionDisplayControllerProtocol> controllerEventDelegate; // @synthesize controllerEventDelegate=_controllerEventDelegate;
@property(nonatomic) __weak UIViewController *attachedController; // @synthesize attachedController=_attachedController;
- (void).cxx_destruct;
- (id)objectIdForPromotion;
- (void)reportLog;
- (void)tapCloseButton;
- (void)updateCloseViewWithConfigData:(id)arg1;
- (_Bool)mayaTrackView:(id)arg1;
- (_Bool)mayaUntrack;
- (_Bool)backgroundTimeOut;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)onViewWillDisappear;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)onViewDidAppear;
- (void)viewDidAppear:(_Bool)arg1;
- (void)onAttachedVCViewWillDisappear:(id)arg1;
- (void)onAttachedVCViewDidAppear:(id)arg1;
- (void)stateDidChangeFrom:(long long)arg1 to:(long long)arg2;
- (void)sendSelfToTop:(id)arg1;
- (void)close;
- (void)show;
- (void)hidePromotion;
- (void)promotionDidEnterBackground;
- (void)promotionDidBecomeActive;
- (void)promotionDidHide;
- (void)promotionWillHide;
- (_Bool)display;
- (void)showPromotion;
- (void)promotionDidShow;
- (void)promotionWillShow;
- (id)contentView;
- (void)checkViewHierachy;
- (void)viewDidLoad;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithConfig:(id)arg1;
- (void)dealloc;

@end
