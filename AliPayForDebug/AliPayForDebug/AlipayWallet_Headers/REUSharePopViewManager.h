//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "REShare3in1ManagerDelegate-Protocol.h"

@class NSDictionary, NSString, REShare3In1Manager, REUSharePopView;

@interface REUSharePopViewManager : NSObject <REShare3in1ManagerDelegate>
{
    _Bool _fromSendPage;
    _Bool _haveGoneToTimeline;
    REUSharePopView *_sharePopView;
    NSDictionary *_data;
    REShare3In1Manager *_shareManager;
    NSString *_zhiTokenUrl;
    NSString *_dingdingUrl;
}

+ (id)shareInstance;
@property(retain, nonatomic) NSString *dingdingUrl; // @synthesize dingdingUrl=_dingdingUrl;
@property(retain, nonatomic) NSString *zhiTokenUrl; // @synthesize zhiTokenUrl=_zhiTokenUrl;
@property(retain, nonatomic) REShare3In1Manager *shareManager; // @synthesize shareManager=_shareManager;
@property(nonatomic) _Bool haveGoneToTimeline; // @synthesize haveGoneToTimeline=_haveGoneToTimeline;
@property(nonatomic) _Bool fromSendPage; // @synthesize fromSendPage=_fromSendPage;
@property(retain, nonatomic) NSDictionary *data; // @synthesize data=_data;
@property(retain, nonatomic) REUSharePopView *sharePopView; // @synthesize sharePopView=_sharePopView;
- (void).cxx_destruct;
- (void)gotoSentDetail;
- (void)closeAndGotoDetailIfNeed;
- (void)shareManagerDidBack:(id)arg1 contactVC:(id)arg2;
- (void)shareManagerDidCompletion:(id)arg1 contactVC:(id)arg2 sharedContact:(id)arg3 completionType:(unsigned long long)arg4;
- (void)shareToDingDing;
- (void)gotoSelectContactPage;
- (void)startAppNotification:(id)arg1;
- (void)resignNotifications;
- (void)registerNotifications;
- (void)dismissPopView;
- (void)showZhiToken;
- (void)displayPopViewWithData:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

