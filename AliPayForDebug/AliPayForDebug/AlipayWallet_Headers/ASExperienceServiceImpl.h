//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "APConfigObserverProtocol-Protocol.h"
#import "ASAutoTaskManagerDelegate-Protocol.h"
#import "LogDispatcher-Protocol.h"
#import "SyncDownCallback-Protocol.h"

@class ASAutoTaskManager, NSDictionary, NSMutableArray, NSString, PSDPluginConfig;
@protocol OS_dispatch_queue;

@interface ASExperienceServiceImpl : NSObject <APConfigObserverProtocol, ASAutoTaskManagerDelegate, LogDispatcher, SyncDownCallback>
{
    NSDictionary *_syncColumbus;
    ASAutoTaskManager *_taskManager;
    NSDictionary *_businessDic;
    NSMutableArray *_showedArray;
    PSDPluginConfig *_plugin;
    NSObject<OS_dispatch_queue> *_concurrentQueue;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *concurrentQueue; // @synthesize concurrentQueue=_concurrentQueue;
@property(retain, nonatomic) PSDPluginConfig *plugin; // @synthesize plugin=_plugin;
@property(retain, nonatomic) NSMutableArray *showedArray; // @synthesize showedArray=_showedArray;
@property(retain, nonatomic) NSDictionary *businessDic; // @synthesize businessDic=_businessDic;
@property(retain, nonatomic) ASAutoTaskManager *taskManager; // @synthesize taskManager=_taskManager;
- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *syncColumbus; // @synthesize syncColumbus=_syncColumbus;
- (void)onReceiveMessageNotification:(id)arg1;
- (void)dispatchDelegateTotask:(SEL)arg1 withObject:(id)arg2 andObject2:(id)arg3;
- (void)taskMangerDeletTask;
- (void)configChangedForKey:(id)arg1 value:(id)arg2;
- (void)updateShowedArray:(id)arg1 isDelete:(_Bool)arg2;
- (void)registerInitNotifycation;
- (void)removeInitNotifycation;
- (void)updateBusinessDic;
- (void)initTask:(id)arg1 homePage:(id)arg2 withInfoDic:(id)arg3;
- (void)handleHomePageAppear:(id)arg1 pageObj:(id)arg2;
- (void)handleNativeViewController:(id)arg1;
- (void)activeAccurateOperation:(id)arg1;
- (void)handleH5URLChange:(id)arg1;
- (void)onBlur:(id)arg1;
- (void)focusOnView:(id)arg1;
- (void)clickCatchByHittest:(id)arg1 andVPoint:(struct CGPoint)arg2;
- (void)becomeActive:(id)arg1;
- (void)enterBackground:(id)arg1;
- (void)comeInAlipay:(id)arg1;
- (void)cashierResult:(id)arg1;
- (void)comeOutAlipay:(id)arg1;
- (void)clickOnView:(id)arg1;
- (void)viewDisappear:(id)arg1;
- (void)viewAppear:(id)arg1;
- (id)filteredActionIds;
- (void)onLogAppend:(id)arg1;
- (void)addNotificationObserver;
- (void)removeNotificationObserver;
- (void)dealloc;
- (void)start;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

