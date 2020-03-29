//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableDictionary;

@interface NXRTinyAppConfig : NSObject
{
    NSMutableDictionary *_appDirectConfig;
    NSMutableDictionary *_appConfig;
    NSDictionary *_globalConfig;
}

+ (id)configs;
@property(retain, nonatomic) NSDictionary *globalConfig; // @synthesize globalConfig=_globalConfig;
@property(retain, nonatomic) NSMutableDictionary *appConfig; // @synthesize appConfig=_appConfig;
@property(retain, nonatomic) NSMutableDictionary *appDirectConfig; // @synthesize appDirectConfig=_appDirectConfig;
- (void).cxx_destruct;
- (void)saveGlobalCDNInfoToStorage:(id)arg1;
- (id)globalCDNInfoFromStorage;
- (void)saveCDNInfoToStorage:(id)arg1 appId:(id)arg2;
- (id)cdnInfoFromStorage:(id)arg1;
- (void)saveGlobalConfigToStorage:(id)arg1;
- (id)globalConfigFromStorage;
- (void)saveConfigToStorage:(id)arg1 appId:(id)arg2;
- (id)configFromStorage:(id)arg1;
- (void)removeConfig:(id)arg1 key:(id)arg2;
- (void)updateConfigs:(id)arg1 appId:(id)arg2 fromSync:(_Bool)arg3;
- (void)updateConfigs:(id)arg1 appId:(id)arg2;
- (void)setGlobalConfigs:(id)arg1;
- (void)setAppConfigs:(id)arg1 appId:(id)arg2 fromSource:(unsigned long long)arg3;
- (void)setAppConfigs:(id)arg1 appId:(id)arg2;
- (id)getConfig:(id)arg1 key:(id)arg2 scopeType:(unsigned long long)arg3;
- (id)getConfig:(id)arg1 key:(id)arg2;
- (id)init;

@end
