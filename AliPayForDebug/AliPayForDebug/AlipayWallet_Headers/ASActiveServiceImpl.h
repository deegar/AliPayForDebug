//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "UIGestureRecognizerDelegate-Protocol.h"

@class ASQuestionaireWindow, AUPopBar, NSDictionary, NSMutableDictionary, NSString;

@interface ASActiveServiceImpl : NSObject <UIGestureRecognizerDelegate>
{
    NSMutableDictionary *_jsonDic;
    NSString *_bizScene;
    ASQuestionaireWindow *_webWindow;
    AUPopBar *_popBar;
    NSDictionary *_jsonReport;
}

@property(retain, nonatomic) NSDictionary *jsonReport; // @synthesize jsonReport=_jsonReport;
@property(retain, nonatomic) AUPopBar *popBar; // @synthesize popBar=_popBar;
@property(retain, nonatomic) ASQuestionaireWindow *webWindow; // @synthesize webWindow=_webWindow;
@property(retain, nonatomic) NSString *bizScene; // @synthesize bizScene=_bizScene;
@property(retain, nonatomic) NSMutableDictionary *jsonDic; // @synthesize jsonDic=_jsonDic;
- (void).cxx_destruct;
- (void)monitorH5NotShow:(id)arg1 shouldMonitor:(_Bool)arg2 currentSecen:(id)arg3;
- (_Bool)isTimeOut:(id)arg1;
- (_Bool)shouldShowActiveService;
- (void)applicationBecomeActive;
- (void)closeActiveInviteView;
- (void)monitorCloseWebView;
- (void)openURL:(id)arg1 withTitle:(id)arg2 bizScene:(id)arg3;
- (void)reportAlertSuc;
- (void)showActiveServiceAlert;
- (void)onActiveService:(id)arg1;
- (void)handleRegionChange:(id)arg1;
- (_Bool)serviceShouldTerminate:(id)arg1;
- (void)willDestroy;
- (void)start;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

