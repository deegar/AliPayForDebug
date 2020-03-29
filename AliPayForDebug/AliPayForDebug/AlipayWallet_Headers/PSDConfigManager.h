//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol RVKExtensionConfigManagerProtocol;

@interface PSDConfigManager : NSObject
{
    CDStruct_9c7706e8 _myFlags;
    id <RVKExtensionConfigManagerProtocol> _configDelegate;
    NSMutableDictionary *_jsApisDict;
    NSMutableDictionary *_pluginsDict;
    NSMutableDictionary *_componentsDict;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSMutableDictionary *componentsDict; // @synthesize componentsDict=_componentsDict;
@property(retain, nonatomic) NSMutableDictionary *pluginsDict; // @synthesize pluginsDict=_pluginsDict;
@property(retain, nonatomic) NSMutableDictionary *jsApisDict; // @synthesize jsApisDict=_jsApisDict;
@property(nonatomic) __weak id <RVKExtensionConfigManagerProtocol> configDelegate; // @synthesize configDelegate=_configDelegate;
- (void).cxx_destruct;
- (void)unRegisterComponentWithName:(id)arg1;
- (id)components;
- (void)registerComponentWithName:(id)arg1 clsName:(id)arg2;
- (void)unRegisterJsApiCfg:(id)arg1;
- (void)registerJsApiCfg:(id)arg1;
- (void)unRegisterPluginCfg:(id)arg1;
- (void)registerPluginCfg:(id)arg1;
- (id)allJsApiCfgs:(id)arg1;
- (id)allPluginCfgs:(id)arg1;
- (void)loadAllConfigs;
- (id)loadConfigWithModName:(id)arg1;
- (void)loadAllConfigMods;
- (_Bool)shouldLoadConfigMod:(id)arg1;
- (void)loadComponents:(id)arg1;
- (void)loadAllComponents;
- (void)loadAllJsApis;
- (void)loadJsApisWithConfig:(id)arg1;
- (void)loadAllPlugins;
- (void)loadPluginsWithConfig:(id)arg1;
- (id)init;

@end

