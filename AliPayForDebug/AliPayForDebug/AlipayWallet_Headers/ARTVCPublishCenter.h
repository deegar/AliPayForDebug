//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ARTVCMessageRecevieProtocolPublish-Protocol.h"

@class ARTVCFeedCenter, ARTVCNetworkChannel, ARTVCPublishConfig, ARTVCRoomCenter, ARTVCStatisticsData, ARTVCStats, ARTVCTimerCenter, ARTVCWebrtcCenter, NSMutableDictionary, NSString;
@protocol ARTVCPublishCenterDelegate;

@interface ARTVCPublishCenter : NSObject <ARTVCMessageRecevieProtocolPublish>
{
    CriticalSection_e2a1dca8 selflock_;
    CriticalSection_e2a1dca8 fpcLock_;
    CriticalSection_e2a1dca8 feedCallbackLock_;
    _Bool _autoPublish;
    int _videoProfileType;
    id <ARTVCPublishCenterDelegate> _delegate;
    ARTVCPublishConfig *_autoPublishConfig;
    ARTVCPublishConfig *_currentPublishConfig;
    ARTVCNetworkChannel *_networkChannel;
    ARTVCRoomCenter *_roomCenter;
    ARTVCFeedCenter *_feedCenter;
    ARTVCWebrtcCenter *_webrtcCenter;
    ARTVCTimerCenter *_timerCenter;
    NSString *_localStreamId;
    ARTVCStatisticsData *_statsData;
    ARTVCStats *_stats;
    NSMutableDictionary *_feedPubConfigMap;
    NSMutableDictionary *_feedCallbackMap;
}

@property(retain, nonatomic) NSMutableDictionary *feedCallbackMap; // @synthesize feedCallbackMap=_feedCallbackMap;
@property(retain, nonatomic) NSMutableDictionary *feedPubConfigMap; // @synthesize feedPubConfigMap=_feedPubConfigMap;
@property(retain, nonatomic) ARTVCStats *stats; // @synthesize stats=_stats;
@property(retain, nonatomic) ARTVCStatisticsData *statsData; // @synthesize statsData=_statsData;
@property(copy, nonatomic) NSString *localStreamId; // @synthesize localStreamId=_localStreamId;
@property(retain, nonatomic) ARTVCTimerCenter *timerCenter; // @synthesize timerCenter=_timerCenter;
@property(retain, nonatomic) ARTVCWebrtcCenter *webrtcCenter; // @synthesize webrtcCenter=_webrtcCenter;
@property(retain, nonatomic) ARTVCFeedCenter *feedCenter; // @synthesize feedCenter=_feedCenter;
@property(retain, nonatomic) ARTVCRoomCenter *roomCenter; // @synthesize roomCenter=_roomCenter;
@property(retain, nonatomic) ARTVCNetworkChannel *networkChannel; // @synthesize networkChannel=_networkChannel;
@property(nonatomic) int videoProfileType; // @synthesize videoProfileType=_videoProfileType;
@property(copy, nonatomic) ARTVCPublishConfig *currentPublishConfig; // @synthesize currentPublishConfig=_currentPublishConfig;
@property(retain, nonatomic) ARTVCPublishConfig *autoPublishConfig; // @synthesize autoPublishConfig=_autoPublishConfig;
@property(nonatomic, getter=isAutoPublish) _Bool autoPublish; // @synthesize autoPublish=_autoPublish;
@property(nonatomic) __weak id <ARTVCPublishCenterDelegate> delegate; // @synthesize delegate=_delegate;
- (id).cxx_construct;
- (void).cxx_destruct;
- (long long)sdpModeFromPublishConfig:(id)arg1;
- (long long)sdpModeForPublishedFeed:(id)arg1;
- (id)generatePublishProfileWithConfig:(id)arg1;
- (void)updatePublishStatsWithConfig:(id)arg1 ref:(id)arg2;
- (_Bool)hasFeedCallbacked:(id)arg1 withConfig:(id)arg2;
- (id)callbackedLocalFeedWithPublishConfig:(id)arg1;
- (void)removeLocalFeedWithPublishConfig:(id)arg1;
- (void)updateLocalFeed:(id)arg1 withPublishConfig:(id)arg2;
- (void)removePublishConfigForFeed:(id)arg1;
- (id)publishConfigForFeed:(id)arg1;
- (void)updatePublishConfig:(id)arg1 ForFeed:(id)arg2;
- (void)didRecevieUnpublishResponse:(id)arg1;
- (void)didReceviePublishResponse:(id)arg1;
- (void)unpublishWithFeed:(id)arg1;
- (void)unpublishAllPublishedFeeds;
- (void)autoPublishIfNeed;
- (void)unpublish:(id)arg1;
- (void)publish:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

