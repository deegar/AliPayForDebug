//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface MTLanguageCache : NSObject
{
}

+ (_Bool)isLanguageCacheInitEnabled;
+ (void)markCacheEndPoint;
+ (void)doHookLanguage;
+ (id)sharedInstance;
- (void)recordLanguageStrKey:(id)arg1 localizedStr:(id)arg2;
- (id)cachedLanguageString:(id)arg1;
- (void)checkIfLastCrash;
- (id)init;

@end

