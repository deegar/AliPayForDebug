//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMediaCoreBaseProcessor.h"

#import "XMBDamageDetectDelegate-Protocol.h"

@class NSObject, NSString, XMBCarDamageDetector;
@protocol OS_dispatch_queue;

@interface XMBCarDamageProcessor : XMediaCoreBaseProcessor <XMBDamageDetectDelegate>
{
    NSObject<OS_dispatch_queue> *_algorithmQueue;
    XMBCarDamageDetector *_carDmgDetector;
}

+ (_Bool)isSupported;
@property(retain, nonatomic) XMBCarDamageDetector *carDmgDetector; // @synthesize carDmgDetector=_carDmgDetector;
- (void).cxx_destruct;
- (id)roiFromImageToView:(id)arg1;
- (void)asynProcessWithImage:(id)arg1 resultBlock:(CDUnknownBlockType)arg2;
- (void)processWithCameraFrame:(struct __CVBuffer *)arg1 resultBlock:(CDUnknownBlockType)arg2;
- (void)updateStateWithFunctorCreate;
- (id)initWithConfig:(id)arg1 resultBlock:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

