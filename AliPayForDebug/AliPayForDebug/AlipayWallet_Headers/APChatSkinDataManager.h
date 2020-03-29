//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class APBusinessPreferences, APCustomStorage, NSMutableArray, NSMutableDictionary;

@interface APChatSkinDataManager : NSObject
{
    NSMutableArray *_syncKeys;
    NSMutableDictionary *_skinConfigs;
    APCustomStorage *_skinStorage;
    APBusinessPreferences *_skinPreferences;
}

@property(retain, nonatomic) APBusinessPreferences *skinPreferences; // @synthesize skinPreferences=_skinPreferences;
@property(retain, nonatomic) APCustomStorage *skinStorage; // @synthesize skinStorage=_skinStorage;
@property(retain, nonatomic) NSMutableDictionary *skinConfigs; // @synthesize skinConfigs=_skinConfigs;
@property(retain, nonatomic) NSMutableArray *syncKeys; // @synthesize syncKeys=_syncKeys;
- (void).cxx_destruct;
- (void)responseAPShareSkinSyncNotification:(id)arg1 sKey:(id)arg2;
- (void)queryLocalAPShareSkinConfigs:(CDUnknownBlockType)arg1;
- (void)queryAPShareSkinConfigs:(CDUnknownBlockType)arg1;
- (void)queryAPShareSkinConfigFromNet:(CDUnknownBlockType)arg1;
- (void)responseAPShareSyncNotification:(id)arg1;
- (void)dealloc;
- (id)init;

@end

