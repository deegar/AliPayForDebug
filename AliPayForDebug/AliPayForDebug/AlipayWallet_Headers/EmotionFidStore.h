//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface EmotionFidStore : NSObject
{
    NSObject<OS_dispatch_queue> *_persistQueue;
    NSMutableDictionary *_fidCacheMap;
}

+ (id)sharedStore;
@property(retain, nonatomic) NSMutableDictionary *fidCacheMap; // @synthesize fidCacheMap=_fidCacheMap;
- (void).cxx_destruct;
- (void)persistToPreference;
- (void)clearWithPackageId:(id)arg1;
- (void)storeNewFid:(id)arg1 withPackageId:(id)arg2 emotionId:(id)arg3;
- (id)fidForEmotion:(id)arg1;
- (id)init;

@end

