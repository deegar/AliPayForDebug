//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AUDialogDelegate-Protocol.h"

@class AUInputDialog, AUNoticeDialog, NSString, UIViewController;

@interface H5Alert : NSObject <AUDialogDelegate>
{
    CDUnknownBlockType _alertCallback;
    AUNoticeDialog *_noticeDialog;
    AUInputDialog *_inputDialog;
    UIViewController *_vc;
    CDUnknownBlockType _callback;
    CDUnknownBlockType _confirmCallback;
    CDUnknownBlockType _promptCallBack;
}

@property(copy, nonatomic) CDUnknownBlockType promptCallBack; // @synthesize promptCallBack=_promptCallBack;
@property(copy, nonatomic) CDUnknownBlockType confirmCallback; // @synthesize confirmCallback=_confirmCallback;
@property(copy, nonatomic) CDUnknownBlockType callback; // @synthesize callback=_callback;
@property(nonatomic) __weak UIViewController *vc; // @synthesize vc=_vc;
@property(nonatomic) __weak AUInputDialog *inputDialog; // @synthesize inputDialog=_inputDialog;
@property(retain, nonatomic) AUNoticeDialog *noticeDialog; // @synthesize noticeDialog=_noticeDialog;
@property(copy, nonatomic) CDUnknownBlockType alertCallback; // @synthesize alertCallback=_alertCallback;
- (void).cxx_destruct;
- (void)dealloc;
- (void)clearRunScriptBlock;
- (void)dialogView:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (void)dialogView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (id)promptWithParams:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (id)confirmWithParams:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (id)alertWithParams:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (id)showAlertWithParams:(id)arg1 callback:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

