//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "DTService-Protocol.h"

@class NSString, PPSyncService;

@interface PublicPlatformBizService : NSObject <DTService>
{
    PPSyncService *_syncService;
}

- (void).cxx_destruct;
- (id)badgeStatusForPublicId:(id)arg1 userId:(id)arg2;
- (id)contertMenuItems:(id)arg1;
- (id)menuControllerForPublicId:(id)arg1 menuItems:(id)arg2 merchantId:(id)arg3 canChat:(_Bool)arg4 menuKey:(id)arg5;
- (_Bool)isFollow:(id)arg1 publicId:(id)arg2;
- (long long)unreadCountForPublicId:(id)arg1 userId:(id)arg2;
- (id)publicInfoByUserId:(id)arg1 publicId:(id)arg2;
- (id)addFollowWithOutError:(id)arg1 andComplete:(CDUnknownBlockType)arg2;
- (id)addFollowWithReqInfo:(id)arg1 andComplete:(CDUnknownBlockType)arg2;
- (id)addFollowWithReqInfo:(id)arg1 errorToastShow:(_Bool)arg2 andComplete:(CDUnknownBlockType)arg3;
- (void)willDestroy;
- (void)start;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

