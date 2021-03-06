//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ANXOrderPrinterService-Protocol.h"

@class ANXOrderPrinterBLEHelper, ANXOrderSyncHelper, NSString;

@interface ANXOrderPrinterServiceImp : NSObject <ANXOrderPrinterService>
{
    ANXOrderPrinterBLEHelper *_bleHelper;
    ANXOrderSyncHelper *_syncHelper;
}

@property(retain, nonatomic) ANXOrderSyncHelper *syncHelper; // @synthesize syncHelper=_syncHelper;
@property(retain, nonatomic) ANXOrderPrinterBLEHelper *bleHelper; // @synthesize bleHelper=_bleHelper;
- (void).cxx_destruct;
- (_Bool)unregisterOrderEvent;
- (_Bool)registerOrderEvent:(id)arg1;
- (_Bool)printDemo;
- (_Bool)printOrderArray:(id)arg1;
- (void)handleSyncNotification:(id)arg1;
- (_Bool)isServiceOpen;
- (id)connectAndQueryBLEConnectedInfo;
- (_Bool)stopBLEConnectionDeep:(_Bool)arg1;
- (_Bool)stopBLEConnection;
- (_Bool)restoreConnection;
- (_Bool)startScanBLE;
- (_Bool)startBLEConnectionWithParams:(id)arg1;
- (void)removeNotification;
- (void)registerNotification;
- (void)dealloc;
- (void)blePowerOff:(id)arg1;
- (void)blePowerOn:(id)arg1;
- (void)start;
- (_Bool)serviceShouldTerminate:(id)arg1;
- (void)willDestroy;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

