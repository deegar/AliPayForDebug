//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, RVKSession;

@protocol RVDDebugProtocol <NSObject>
- (_Bool)enableRemoteDebug;
- (void)exitTinyAppWithSession:(RVKSession *)arg1;
- (NSString *)appxVersion;
- (NSString *)appxAppId;
- (NSString *)currentProductVersion;

@optional
- (NSString *)remoteDebugServerAddress;
- (NSString *)assistantAppId;
@end

