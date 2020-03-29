//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PSDJsApiHandler.h"

#import "SWBLEClientDelegate-Protocol.h"

@class NSString, SWBLEClient, SWBLERequest, UIImageView;

@interface SmartWearH5Plugin : PSDJsApiHandler <SWBLEClientDelegate>
{
    _Bool _autoMtu;
    int _bleResponsed;
    SWBLEClient *_watchBLEClient;
    SWBLERequest *_currentRequest;
    CDUnknownBlockType _callback;
    UIImageView *_barCodeImage;
}

+ (id)createNonInterpolatedUIImageFormCIImage:(id)arg1 withSize:(double)arg2;
+ (id)SG_generateWithDefaultQRCodeData:(id)arg1 imageViewWidth:(double)arg2;
@property(nonatomic) _Bool autoMtu; // @synthesize autoMtu=_autoMtu;
@property(retain, nonatomic) UIImageView *barCodeImage; // @synthesize barCodeImage=_barCodeImage;
@property(copy, nonatomic) CDUnknownBlockType callback; // @synthesize callback=_callback;
@property(retain, nonatomic) SWBLERequest *currentRequest; // @synthesize currentRequest=_currentRequest;
@property(retain, nonatomic) SWBLEClient *watchBLEClient; // @synthesize watchBLEClient=_watchBLEClient;
@property int bleResponsed; // @synthesize bleResponsed=_bleResponsed;
- (void).cxx_destruct;
- (void)sendMessageToWatch:(id)arg1 cmd:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (void)setBindingTimeout:(int)arg1 callback:(CDUnknownBlockType)arg2;
- (void)didConnnectedToPeripheralFailureOfClient:(id)arg1;
- (void)didConnnectedToPeripheralOfClient:(id)arg1;
- (void)startBLEConnect:(int)arg1 address:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (void)handler:(id)arg1 context:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (void)getWifiList:(id)arg1 context:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (void)getWifiListNew:(id)arg1 context:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (void)getQRCode:(id)arg1 context:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (void)isBleEnabled:(id)arg1 context:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (void)queryOldBracelet:(id)arg1 context:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (void)bleDisconnect:(id)arg1 context:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (void)isPairedAppleWatch:(id)arg1 context:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (void)sendMessageToAppleWatch:(id)arg1 context:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (void)sendBleMsg:(id)arg1 context:(id)arg2 callback:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

