//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NXRTaskDataSource-Protocol.h"

@class NSString;

@interface NXIRTask : NSObject <NXRTaskDataSource>
{
}

+ (void)checkConfig:(id *)arg1 andUnzip:(id *)arg2 andUnzipT:(id *)arg3 ignoreCheckT:(_Bool)arg4;
+ (void)uploadWebstatZhuangji;
+ (void)clearStorage:(_Bool)arg1;
+ (id)shared;
- (id)relatedVersionForAppList:(id)arg1;
- (id)initInPrivate;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
