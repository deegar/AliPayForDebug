//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface SQueueManager : NSObject
{
    NSDictionary *_queueStore;
}

+ (id)shareQueueManager;
@property(retain) NSDictionary *queueStore; // @synthesize queueStore=_queueStore;
- (void).cxx_destruct;
- (id)clearBiz:(id)arg1;
- (id)cancelAllOperations:(id)arg1;
- (void)addBlock:(CDUnknownBlockType)arg1 biz:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (id)queueForBiz:(id)arg1;

@end

