//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "TNPageProtocol-Protocol.h"

@class NSString, RCTRootView, TCPageModel, TNApp, TNEventEmitter, TNViewLogModel;

@interface TNWidgetPageView : UIView <TNPageProtocol>
{
    _Bool _hasRecord;
    TCPageModel *_pageConfig;
    NSString *_pagePath;
    NSString *_queryParams;
    TNApp *_tinyApp;
    TNViewLogModel *_logModel;
    RCTRootView *_rootView;
    long long _widgetId;
}

@property(nonatomic) long long widgetId; // @synthesize widgetId=_widgetId;
@property(nonatomic) _Bool hasRecord; // @synthesize hasRecord=_hasRecord;
@property(retain, nonatomic) RCTRootView *rootView; // @synthesize rootView=_rootView;
@property(retain, nonatomic) TNViewLogModel *logModel; // @synthesize logModel=_logModel;
@property(nonatomic) __weak TNApp *tinyApp; // @synthesize tinyApp=_tinyApp;
@property(copy, nonatomic) NSString *queryParams; // @synthesize queryParams=_queryParams;
@property(copy, nonatomic) NSString *pagePath; // @synthesize pagePath=_pagePath;
@property(retain, nonatomic) TCPageModel *pageConfig; // @synthesize pageConfig=_pageConfig;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (id)getWidgetUrl;
- (void)contentDidAppear:(id)arg1;
- (void)handleRnError:(id)arg1;
- (void)tinyBridgeReady:(id)arg1;
- (void)updateRootView;
- (void)setupEventListeners;
- (void)setupNotifications;
- (id)initWithPageConfig:(id)arg1 queryParams:(id)arg2 frame:(struct CGRect)arg3 tinyApp:(id)arg4;
- (void)dealloc;
- (void)monitorSetEventListeners;
@property(readonly, nonatomic) NSString *tn_monitorTinyToken;
@property(readonly, nonatomic, getter=eventEmitter) TNEventEmitter *eventEmitter;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

