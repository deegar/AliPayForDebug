//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface APDispatchService : NSObject
{
    NSMutableArray *_msgKeyList;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSMutableArray *msgKeyList; // @synthesize msgKeyList=_msgKeyList;
- (void).cxx_destruct;
- (_Bool)notNullString:(id)arg1;
- (long long)dispatchSyncUNPush:(id)arg1;
- (long long)dispatchSyncAdaptorPush:(id)arg1;
- (long long)dispatchSyncPush:(id)arg1;
- (_Bool)isExistFromArrayWithMsgKey:(id)arg1;
- (void)reveicePushMsgKey:(id)arg1;
- (void)remoteNotifiactionURLHandleCommandFormUserInfo:(id)arg1;
- (void)dealloc;
- (id)init;

@end

