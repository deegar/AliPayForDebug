//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MQPDocumentProxyProtocol-Protocol.h"
#import "MQPSPMTrackPageProtocol-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@class ImmPayEventHandler, ImmPayViewHandler, MQPBaseService, MQPPaySession, MQPTrackModel, NSDictionary, NSString, UIColor, UITapGestureRecognizer, UIViewController;
@protocol MQPDocumentProtocol;

@interface MQPDocumnetProxy : NSObject <MQPSPMTrackPageProtocol, MQPDocumentProxyProtocol, UIGestureRecognizerDelegate>
{
    _Bool isBnframe;
    _Bool _wasSetGesture;
    NSString *spmId;
    NSString *abtestId;
    MQPBaseService *service;
    NSString *tplId;
    NSString *tplVersion;
    NSString *time;
    NSString *lastErrDesc;
    NSString *bizCode;
    CDUnknownBlockType pageDestroyBlock;
    NSDictionary *param4dict;
    NSDictionary *docConfig;
    NSDictionary *extInfo;
    NSString *_statusBarStyle;
    UIColor *_navBarColor;
    UIViewController<MQPDocumentProtocol> *_doc;
    long long _gestureBackMode;
    UITapGestureRecognizer *_checkVCTap;
    long long _invalidTapCount;
}

@property(nonatomic) long long invalidTapCount; // @synthesize invalidTapCount=_invalidTapCount;
@property(retain, nonatomic) UITapGestureRecognizer *checkVCTap; // @synthesize checkVCTap=_checkVCTap;
@property(nonatomic) _Bool wasSetGesture; // @synthesize wasSetGesture=_wasSetGesture;
@property(nonatomic) long long gestureBackMode; // @synthesize gestureBackMode=_gestureBackMode;
@property(nonatomic) __weak UIViewController<MQPDocumentProtocol> *doc; // @synthesize doc=_doc;
@property(retain, nonatomic) UIColor *navBarColor; // @synthesize navBarColor=_navBarColor;
@property(copy, nonatomic) NSString *statusBarStyle; // @synthesize statusBarStyle=_statusBarStyle;
@property(retain, nonatomic) NSDictionary *extInfo; // @synthesize extInfo;
@property(nonatomic) _Bool isBnframe; // @synthesize isBnframe;
@property(retain, nonatomic) NSDictionary *docConfig; // @synthesize docConfig;
@property(retain, nonatomic) NSDictionary *param4dict; // @synthesize param4dict;
@property(copy, nonatomic) CDUnknownBlockType pageDestroyBlock; // @synthesize pageDestroyBlock;
@property(copy, nonatomic) NSString *bizCode; // @synthesize bizCode;
@property(copy, nonatomic) NSString *lastErrDesc; // @synthesize lastErrDesc;
@property(copy, nonatomic) NSString *time; // @synthesize time;
@property(copy, nonatomic) NSString *tplVersion; // @synthesize tplVersion;
@property(copy, nonatomic) NSString *tplId; // @synthesize tplId;
@property(nonatomic) __weak MQPBaseService *service; // @synthesize service;
@property(copy, nonatomic) NSString *abtestId; // @synthesize abtestId;
@property(copy, nonatomic) NSString *spmId; // @synthesize spmId;
- (void).cxx_destruct;
@property(readonly) MQPPaySession *session; // @dynamic session;
@property(readonly) ImmPayViewHandler *viewHandler; // @dynamic viewHandler;
@property(readonly) ImmPayEventHandler *eh; // @dynamic eh;
@property(readonly) MQPTrackModel *log; // @dynamic log;
- (void)sendEventWithName:(id)arg1 params:(id)arg2;
- (void)checkVCAvailable;
- (void)addCheckVCGesture;
- (void)onGestureBack;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)onPanGesture:(id)arg1;
- (void)setGestureForPanback;
- (void)setupGestureForPanback;
- (void)fetchGestureForPanbackMode:(id)arg1;
- (void)resetBar;
- (void)setupCustomNavBar:(id)arg1;
- (void)applyDocConfig;
- (void)fetchDocConfig;
- (void)doSPMDestroy:(id)arg1;
- (void)dealloc;
- (void)onEnterForeground:(id)arg1;
- (void)onEnterBackground:(id)arg1;
- (long long)preferredStatusBarStyle;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (id)initWithDoc:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

