//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSCache;

@interface O2OImageCache : NSObject
{
    NSCache *_memCache;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)cleanAPMultiMediaCache;
- (void)removeAllObjects;
- (void)removeImageForKey:(id)arg1;
- (id)imageForKey:(id)arg1;
- (void)storeImage:(id)arg1 WithKey:(id)arg2;
- (id)init;

@end

