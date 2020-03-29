//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ImmPayEventPlugin.h"

#import "MQPAlertViewDelegate-Protocol.h"

@class MQPAlertView, NSMutableDictionary, NSString;

@interface ImmPayPluginMeta : ImmPayEventPlugin <MQPAlertViewDelegate>
{
    MQPAlertView *_av;
    CDUnknownBlockType _avCallback;
    NSMutableDictionary *_noteObservers;
}

@property(retain, nonatomic) NSMutableDictionary *noteObservers; // @synthesize noteObservers=_noteObservers;
@property(copy, nonatomic) CDUnknownBlockType avCallback; // @synthesize avCallback=_avCallback;
@property(retain, nonatomic) MQPAlertView *av; // @synthesize av=_av;
- (void).cxx_destruct;
- (void)mqpAlertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (_Bool)alertWithParam:(id)arg1 doc:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (_Bool)offNotificationWithParam:(id)arg1 doc:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (_Bool)onNotificationWithParam:(id)arg1 doc:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (_Bool)sendNotificationWithParam:(id)arg1 doc:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (_Bool)onOutJumpResumeWithParam:(id)arg1 doc:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (_Bool)hideKeyboardWithParam:(id)arg1 doc:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (_Bool)setSessionDataWithParam:(id)arg1 doc:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (_Bool)getSessionDataWithParam:(id)arg1 doc:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (_Bool)getBizDataWithParam:(id)arg1 doc:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (_Bool)mspLogEventWithParam:(id)arg1 doc:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (_Bool)mspLogCountWithParam:(id)arg1 doc:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (_Bool)mspLogPerfWithParam:(id)arg1 doc:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (_Bool)mspLogErrorWithParam:(id)arg1 doc:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (_Bool)spmExposureWithParam:(id)arg1 doc:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (_Bool)spmClickedWithParam:(id)arg1 doc:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (_Bool)spmPageDestroyWithParam:(id)arg1 doc:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (_Bool)spmPageCreateWithParam:(id)arg1 doc:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (_Bool)exitWithParam:(id)arg1 doc:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (_Bool)getDRMConfigWithParam:(id)arg1 doc:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (_Bool)resumeAllViewWithParam:(id)arg1 doc:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (_Bool)hideAllViewWithParam:(id)arg1 doc:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (_Bool)openURLWithParam:(id)arg1 doc:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (_Bool)vibrateWithParam:(id)arg1 doc:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (_Bool)selectContactWithParam:(id)arg1 doc:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (_Bool)onEvent:(id)arg1 param:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

