//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface AUBundleLoader : NSObject
{
    int _lock;
    NSMutableDictionary *_bundleCache;
}

+ (id)sharedLoader;
+ (id)themeBundleForName:(id)arg1;
@property(retain, nonatomic) NSMutableDictionary *bundleCache; // @synthesize bundleCache=_bundleCache;
- (void).cxx_destruct;
- (id)themeBundleForName:(id)arg1;
- (id)init;

@end

