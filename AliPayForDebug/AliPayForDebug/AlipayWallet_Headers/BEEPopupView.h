//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "BEEAlertManagedWindowDelegate-Protocol.h"

@class BEEAlertManagedWindow, NSDictionary, NSString;
@protocol BEEPopupViewDelegate;

@interface BEEPopupView : UIView <BEEAlertManagedWindowDelegate>
{
    _Bool _dimmingBackgroundAnimating;
    _Bool _keepOnDisappear;
    _Bool _isManagedShow;
    UIView *_mainView;
    UIView *_containerView;
    UIView *_buttonView;
    UIView *_dimmingBackground;
    double _animationDuration;
    CDUnknownBlockType _showAnimation;
    CDUnknownBlockType _hideAnimation;
    UIView *_attachedView;
    double _dimmingBackgroundAlpha;
    NSString *_bizId;
    long long _priority;
    unsigned long long _popupType;
    id <BEEPopupViewDelegate> _delegate;
    NSDictionary *_logParams;
    UIView *_currentFirstResponder;
    BEEAlertManagedWindow *_managedWindow;
}

@property(retain, nonatomic) BEEAlertManagedWindow *managedWindow; // @synthesize managedWindow=_managedWindow;
@property(nonatomic) __weak UIView *currentFirstResponder; // @synthesize currentFirstResponder=_currentFirstResponder;
@property(nonatomic) _Bool isManagedShow; // @synthesize isManagedShow=_isManagedShow;
@property(retain, nonatomic) NSDictionary *logParams; // @synthesize logParams=_logParams;
@property(nonatomic) __weak id <BEEPopupViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool keepOnDisappear; // @synthesize keepOnDisappear=_keepOnDisappear;
@property(nonatomic) unsigned long long popupType; // @synthesize popupType=_popupType;
@property(nonatomic) long long priority; // @synthesize priority=_priority;
@property(retain, nonatomic) NSString *bizId; // @synthesize bizId=_bizId;
@property(nonatomic) double dimmingBackgroundAlpha; // @synthesize dimmingBackgroundAlpha=_dimmingBackgroundAlpha;
@property(nonatomic) _Bool dimmingBackgroundAnimating; // @synthesize dimmingBackgroundAnimating=_dimmingBackgroundAnimating;
@property(retain, nonatomic) UIView *attachedView; // @synthesize attachedView=_attachedView;
@property(copy, nonatomic) CDUnknownBlockType hideAnimation; // @synthesize hideAnimation=_hideAnimation;
@property(copy, nonatomic) CDUnknownBlockType showAnimation; // @synthesize showAnimation=_showAnimation;
@property(nonatomic) double animationDuration; // @synthesize animationDuration=_animationDuration;
@property(retain, nonatomic) UIView *dimmingBackground; // @synthesize dimmingBackground=_dimmingBackground;
@property(retain, nonatomic) UIView *buttonView; // @synthesize buttonView=_buttonView;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) UIView *mainView; // @synthesize mainView=_mainView;
- (void).cxx_destruct;
- (void)willDissmissManagedWindow:(id)arg1 options:(id)arg2;
- (void)didPresentManagedWindow:(id)arg1 options:(id)arg2;
- (void)willPresentManagedWindow:(id)arg1 options:(id)arg2;
- (void)managedHide;
- (void)managedShow;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)notifyAccountDidExit:(id)arg1;
- (CDUnknownBlockType)alertHideAnimation;
- (CDUnknownBlockType)alertShowAnimation;
- (void)hideBackground;
- (void)showBackground;
- (void)dimmingBackgroundTapped:(id)arg1;
- (void)hideWithBlock:(CDUnknownBlockType)arg1;
- (void)hide;
- (void)showWithBlock:(CDUnknownBlockType)arg1;
- (_Bool)show;
- (void)dealloc;
- (void)buildConstrains;
- (void)setupViews;
- (void)establishNotificationHandlers;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

