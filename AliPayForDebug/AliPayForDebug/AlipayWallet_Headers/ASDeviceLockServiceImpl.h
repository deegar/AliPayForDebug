//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ASDeviceLockService-Protocol.h"
#import "SyncDownCallback-Protocol.h"

@class AUDialogBaseView, NSMutableArray, NSString;

@interface ASDeviceLockServiceImpl : NSObject <ASDeviceLockService, SyncDownCallback>
{
    _Bool _isBlockAlert;
    NSString *_reportLossUrl;
    NSMutableArray *_arrayDeviceLock;
    AUDialogBaseView *_dialog;
}

+ (id)convertDateFromString:(id)arg1 format:(id)arg2;
@property(retain, nonatomic) AUDialogBaseView *dialog; // @synthesize dialog=_dialog;
@property(retain, nonatomic) NSMutableArray *arrayDeviceLock; // @synthesize arrayDeviceLock=_arrayDeviceLock;
@property _Bool isBlockAlert; // @synthesize isBlockAlert=_isBlockAlert;
@property(copy, nonatomic) NSString *reportLossUrl; // @synthesize reportLossUrl=_reportLossUrl;
- (void).cxx_destruct;
- (void)monitorOneKeyToken:(_Bool)arg1;
- (void)monitorNotification:(id)arg1;
- (void)monitorDevicelockAlertWithUcId:(id)arg1 ExtParams:(id)arg2;
- (void)monitorNotificationSeed:(id)arg1 view:(id)arg2;
- (void)monitorLoginClicked;
- (void)monitorFindPasswordClicked;
- (id)pickFuckDateFromString:(id)arg1:(id)arg2;
- (double)calcNotificationTimeWith:(id)arg1;
- (_Bool)isSyncValid:(id)arg1;
- (_Bool)isSyncTokenValid:(id)arg1;
- (void)startLoginAppWithParams:(id)arg1;
- (void)oneKeyLoginWithParams:(id)arg1;
- (void)findPasswordWithParams:(id)arg1;
- (void)changePhoneWithParams:(id)arg1;
- (void)reportLossWithUrl:(id)arg1;
- (void)showPunishDialog:(id)arg1;
- (void)executePunish:(id)arg1;
- (void)regiesterPunishSync;
- (void)buttonClickWith:(unsigned long long)arg1 loginMethod:(id)arg2 params:(id)arg3;
- (_Bool)canShowReportLoss;
- (unsigned long long)deviceLockTypeWithLoginMethod:(id)arg1;
- (void)showDeviceLockSingleAlert:(id)arg1;
- (void)executeDeviceLockSingle:(id)arg1;
- (void)registDeviceLockSync;
- (void)showDeviceLockAlertView:(id)arg1;
- (void)executeDeviceLockLogic:(id)arg1;
- (void)actionDeviceLockAlertView:(id)arg1;
- (void)cleanDeviceLockAlert;
- (void)releaseDeviceLockAlert;
- (void)holdDeviceLockAlert;
- (void)handleDeviceLock:(id)arg1;
- (void)onDeviceLockSyncJson:(id)arg1 biz:(id)arg2;
- (void)onReceiveMessageNotification:(id)arg1;
- (void)setupDeviceLockPop;
- (void)onLoginNotification:(id)arg1;
- (void)onLogoutNotification:(id)arg1;
- (void)handleRegionChange:(id)arg1;
- (_Bool)serviceShouldTerminate:(id)arg1;
- (void)willDestroy;
- (void)dealloc;
- (void)start;
- (void)handleAccountCloseWithPL:(id)arg1;
- (void)onAccountCloseNotification:(id)arg1;
- (void)registerAccountCloseSync;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

