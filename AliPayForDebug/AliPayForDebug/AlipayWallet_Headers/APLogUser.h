//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "APLogMgrDelegate-Protocol.h"
#import "SyncDownCallback-Protocol.h"

@class NSNotification, NSString;

@interface APLogUser : NSObject <APLogMgrDelegate, SyncDownCallback>
{
    NSString *_logURL;
    NSString *_statusURL;
    NSNotification *_currentNotification;
}

+ (id)sharedInstance;
+ (void)load;
- (void).cxx_destruct;
- (void)getConf:(id)arg1;
- (void)positiveLogConf:(id)arg1;
- (void)userChange:(id)arg1;
- (void)handleUploadLogOP:(id)arg1;
- (void)longLinkNotifyWithBizId:(id)arg1;
- (void)logWithoutEncrypt:(id)arg1;
- (void)logExtra:(id)arg1 level:(int)arg2 logString:(id)arg3;
- (_Bool)isCloseLogEncrypt;
- (_Bool)isLogFormatAssertCheck;
- (id)makeZipObj;
- (id)currentUserId;
- (id)uploadStatusUrl;
- (id)uploadLogUrl;
- (void)dealloc;
- (id)init;
- (void)onReceiveMessageNotification:(id)arg1;
- (void)registerTrigger;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
