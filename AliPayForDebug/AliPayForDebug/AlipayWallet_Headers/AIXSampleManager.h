//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class APCustomStorage;
@protocol AIXSampleDAOProxy, OS_dispatch_queue;

@interface AIXSampleManager : NSObject
{
    NSObject<OS_dispatch_queue> *_queueForSample;
    id <AIXSampleDAOProxy> _dbProxy;
    APCustomStorage *_storage;
}

@property(retain, nonatomic) APCustomStorage *storage; // @synthesize storage=_storage;
@property(retain, nonatomic) id <AIXSampleDAOProxy> dbProxy; // @synthesize dbProxy=_dbProxy;
- (void).cxx_destruct;
- (_Bool)clearExpiredData;
- (id)queryLabeledSampleByTime:(float)arg1 maxCount:(long long)arg2;
- (void)saveSample:(id)arg1;
- (_Bool)labelPageSwitch:(id)arg1;
- (_Bool)label:(id)arg1 sampleId:(id)arg2 label:(id)arg3;
- (id)init;

@end
