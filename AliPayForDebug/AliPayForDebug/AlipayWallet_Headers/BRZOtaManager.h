//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "BRZCmdHandleProtocol-Protocol.h"

@class NSFileHandle, NSString;
@protocol BRZCenterProtocol, BRZOtaManagerDelegate;

@interface BRZOtaManager : NSObject <BRZCmdHandleProtocol>
{
    unsigned short _lastSendframNum;
    unsigned int _otaFileSize;
    id <BRZOtaManagerDelegate> _delegate;
    id <BRZCenterProtocol> _bleCenter;
    NSString *_otaPackageFile;
    NSFileHandle *_otaFileHandle;
    unsigned long long _otaMsgId;
    unsigned long long _defaultFileSlicesLength;
    long long _currentStatus;
}

@property(nonatomic) long long currentStatus; // @synthesize currentStatus=_currentStatus;
@property(nonatomic) unsigned long long defaultFileSlicesLength; // @synthesize defaultFileSlicesLength=_defaultFileSlicesLength;
@property(nonatomic) unsigned long long otaMsgId; // @synthesize otaMsgId=_otaMsgId;
@property(nonatomic) unsigned short lastSendframNum; // @synthesize lastSendframNum=_lastSendframNum;
@property(nonatomic) unsigned int otaFileSize; // @synthesize otaFileSize=_otaFileSize;
@property(retain, nonatomic) NSFileHandle *otaFileHandle; // @synthesize otaFileHandle=_otaFileHandle;
@property(copy, nonatomic) NSString *otaPackageFile; // @synthesize otaPackageFile=_otaPackageFile;
@property(nonatomic) __weak id <BRZCenterProtocol> bleCenter; // @synthesize bleCenter=_bleCenter;
@property(nonatomic) __weak id <BRZOtaManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)handleCmd:(long long)arg1 data:(id)arg2 msgId:(long long)arg3 error:(id)arg4;
- (_Bool)canHandleCmd:(long long)arg1;
- (void)didPeripheralDisconnected:(id)arg1;
- (void)notifyOtaStatus:(long long)arg1 succeed:(_Bool)arg2;
- (void)verifyPackegeAndUpgrade;
- (long long)calcToSendLength:(long long)arg1;
- (void)process:(unsigned long long)arg1 data:(id)arg2;
- (void)startTransmitPackage:(id)arg1 version:(id)arg2;
- (void)getDeviceSysVersion;
- (long long)getOtaStatus;
- (id)initWithBleCenter:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
