//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "APConfigObserverProtocol-Protocol.h"

@class NSDictionary, NSString;

@interface UEPConfigService : NSObject <APConfigObserverProtocol>
{
    NSDictionary *_configDict;
}

+ (void)setupUepComputeConfig;
+ (_Bool)uepPageComputeEnable;
+ (_Bool)uepClickComputeEnable;
+ (id)v2ConfigString;
+ (_Bool)queryUEPEnable;
+ (id)queryCollectConfigWithType:(long long)arg1 appId:(id)arg2 version:(id)arg3 pageName:(id)arg4 mouldId:(id)arg5 xPath:(id)arg6;
+ (id)queryCubeConfigWithAppId:(id)arg1 version:(id)arg2 xPath:(id)arg3 mouldId:(id)arg4;
+ (id)queryNativeConfigWithAppId:(id)arg1 pageName:(id)arg2;
+ (id)queryH5ConfigWithAppId:(id)arg1 version:(id)arg2 url:(id)arg3;
+ (id)queryTinyConfigWithAppId:(id)arg1 version:(id)arg2;
+ (void)setup;
+ (id)sharedInstance;
@property(copy, nonatomic) NSDictionary *configDict; // @synthesize configDict=_configDict;
- (void).cxx_destruct;
- (void)configChangedForKey:(id)arg1 value:(id)arg2;
- (void)doFetchConfig;
- (void)fetchConfig;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

