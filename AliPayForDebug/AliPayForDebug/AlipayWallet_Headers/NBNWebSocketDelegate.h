//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "RVPWebSocketLogDelegate-Protocol.h"
#import "RVPWebSocketStorageDelegate-Protocol.h"

@class NSString;

@interface NBNWebSocketDelegate : NSObject <RVPWebSocketLogDelegate, RVPWebSocketStorageDelegate>
{
}

+ (id)sharedInstance;
- (void)removeObjectForKey:(id)arg1;
- (id)objectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)writeLocalLogInfo:(id)arg1 params:(id)arg2;
- (void)logwithSubType:(id)arg1 content:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

