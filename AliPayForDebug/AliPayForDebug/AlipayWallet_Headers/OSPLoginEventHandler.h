//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class BEEChannelIconService, OSPConfigService, OSPSyncManager;

@interface OSPLoginEventHandler : NSObject
{
    _Bool _hasShortCutChannel;
    OSPConfigService *_service;
    OSPSyncManager *_syncManager;
    BEEChannelIconService *_channelIconService;
    double _cacheTime;
    double _kOSPEConcurrentCha;
}

+ (id)defaultHandler;
@property(nonatomic) double kOSPEConcurrentCha; // @synthesize kOSPEConcurrentCha=_kOSPEConcurrentCha;
@property(nonatomic) double cacheTime; // @synthesize cacheTime=_cacheTime;
@property(retain, nonatomic) BEEChannelIconService *channelIconService; // @synthesize channelIconService=_channelIconService;
@property(retain, nonatomic) OSPSyncManager *syncManager; // @synthesize syncManager=_syncManager;
@property(retain, nonatomic) OSPConfigService *service; // @synthesize service=_service;
@property(nonatomic) _Bool hasShortCutChannel; // @synthesize hasShortCutChannel=_hasShortCutChannel;
- (void).cxx_destruct;
- (_Bool)isChannelLanuageUnFit;
- (id)getChannelDefaultIcon;
- (id)getChannelIcon:(id)arg1 width:(double)arg2;
- (void)handleBusCodeNotification:(id)arg1;
- (void)handleAddBankCardNotification:(id)arg1;
- (void)handleLogoutNotification:(id)arg1;
- (void)onLangChanged;
- (void)clearConcurrentCache;
- (_Bool)happenConcurrent;
- (_Bool)useCashierPayChannelData;
- (void)handleLoginNotification:(id)arg1;
- (void)unObserveLogoutNotification;
- (void)unObserveLoginNotification;
- (void)observeLogoutNotification;
- (void)unObserveLangChangedNotification;
- (void)observeLangChangedNotification;
- (void)observeLoginNotification;
- (void)unObserveAddBankCardEvent;
- (void)observeAddBankCardEvent;
- (void)unObservePayChannelChangedEvent;
- (void)observePayChannelChangedEvent;
- (id)ospSycnManager;
- (id)configService;
- (void)dealloc;
- (id)init;

@end

