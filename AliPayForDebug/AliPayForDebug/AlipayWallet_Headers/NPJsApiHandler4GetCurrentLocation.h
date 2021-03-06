//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PSDJsApiHandler.h"

#import "AUDialogDelegate-Protocol.h"

@class AUNoticeDialog, NSString;

@interface NPJsApiHandler4GetCurrentLocation : PSDJsApiHandler <AUDialogDelegate>
{
    AUNoticeDialog *_noticeDialog;
    CDUnknownBlockType _callback;
}

@property(copy, nonatomic) CDUnknownBlockType callback; // @synthesize callback=_callback;
@property(retain, nonatomic) AUNoticeDialog *noticeDialog; // @synthesize noticeDialog=_noticeDialog;
- (void).cxx_destruct;
- (void)dialogView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)getCurrentLocation:(id)arg1 param:(id)arg2 vc:(id)arg3 callback:(CDUnknownBlockType)arg4;
- (void)doHandler:(id)arg1 viewController:(id)arg2 url:(id)arg3 context:(id)arg4 callback:(CDUnknownBlockType)arg5;
- (void)showAlertWithParams:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)handler:(id)arg1 context:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

