//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTViewController.h"

#import "APGroupOnsiteNumberViewDelegate-Protocol.h"
#import "AUDialogDelegate-Protocol.h"

@class APGroupOnsiteCreateView, AUNoticeDialog, AUNumKeyboards, CLLocation, DTRpcAsyncCaller, NSString, UIActivityIndicatorView, UILabel;

@interface APGroupOnsiteCreateViewController : DTViewController <APGroupOnsiteNumberViewDelegate, AUDialogDelegate>
{
    _Bool _queryRpcCalling;
    CDUnknownBlockType _callback;
    APGroupOnsiteCreateView *_onsiteCreateView;
    UIActivityIndicatorView *_indicatorView;
    UILabel *_warningView;
    AUNumKeyboards *_keyboard;
    CLLocation *_currentLocation;
    DTRpcAsyncCaller *_queryCaller;
    AUNoticeDialog *_currentAlert;
}

@property(nonatomic) __weak AUNoticeDialog *currentAlert; // @synthesize currentAlert=_currentAlert;
@property(nonatomic) _Bool queryRpcCalling; // @synthesize queryRpcCalling=_queryRpcCalling;
@property(retain, nonatomic) DTRpcAsyncCaller *queryCaller; // @synthesize queryCaller=_queryCaller;
@property(retain, nonatomic) CLLocation *currentLocation; // @synthesize currentLocation=_currentLocation;
@property(retain, nonatomic) AUNumKeyboards *keyboard; // @synthesize keyboard=_keyboard;
@property(retain, nonatomic) UILabel *warningView; // @synthesize warningView=_warningView;
@property(retain, nonatomic) UIActivityIndicatorView *indicatorView; // @synthesize indicatorView=_indicatorView;
@property(retain, nonatomic) APGroupOnsiteCreateView *onsiteCreateView; // @synthesize onsiteCreateView=_onsiteCreateView;
@property(copy, nonatomic) CDUnknownBlockType callback; // @synthesize callback=_callback;
- (void).cxx_destruct;
- (void)checkNeedAuthGuide;
- (void)deleteBackward;
- (void)insertText:(id)arg1;
- (void)hideKeyboard:(_Bool)arg1;
- (void)showKeyboard:(_Bool)arg1;
- (_Bool)isOnsiteNumberReady;
- (void)requestEnterMembers;
- (void)stopMembersQuery;
- (void)startMembersQuery;
- (void)autoStartMembersQuery;
- (void)enterGroupAction:(id)arg1;
- (void)groupOnsiteNumberViewDidFinishInput:(id)arg1;
- (void)viewDidLoad;
- (long long)customStatusBarStytle;
- (void)startUpdatingLocation;
- (void)stopUpdatingLocation;
- (_Bool)autohideNavigationBar;
- (void)viewDidAppear:(_Bool)arg1;
- (void)dealloc;
- (id)initWithCallback:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

