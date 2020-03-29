//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSCache, NSOperationQueue;

@interface BeeLottiePurgeableManager : NSObject
{
    double _lastJobInvokeDateTime;
    NSCache *_lastVisitCache;
    NSOperationQueue *_queue;
}

@property(retain, nonatomic) NSOperationQueue *queue; // @synthesize queue=_queue;
- (void).cxx_destruct;
- (id)listAllPaths;
- (void)removeExpiredItemsIfNeeded;
- (void)didEnterBackground:(id)arg1;
- (id)purgeablePath:(id)arg1;
- (_Bool)readLastModifyDateByIdenfifier:(id)arg1 lastVisitDate:(id *)arg2 updateToDate:(id)arg3 updateModifyDate:(_Bool)arg4;
- (void)dealloc;
- (id)init;

@end

