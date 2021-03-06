//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface MPDeviceInfo : NSObject
{
    NSString *_udid;
    NSString *_vudid;
    NSString *_apdid;
    NSString *_uac;
    NSString *_newclientkey;
    NSString *_hasalipay;
    NSString *_tid;
    NSString *_clientKey;
    NSString *_imei;
    NSString *_imsi;
    NSString *_vimei;
    NSString *_vimsi;
    NSString *_session;
}

+ (void)fetchWifiNameWithBlock:(CDUnknownBlockType)arg1;
+ (id)getPlatform;
+ (id)utdid;
+ (id)currentDevice;
@property(readonly, copy, nonatomic) NSString *session; // @synthesize session=_session;
@property(readonly, copy, nonatomic) NSString *vimsi; // @synthesize vimsi=_vimsi;
@property(readonly, copy, nonatomic) NSString *vimei; // @synthesize vimei=_vimei;
@property(readonly, copy, nonatomic) NSString *imsi; // @synthesize imsi=_imsi;
@property(readonly, copy, nonatomic) NSString *imei; // @synthesize imei=_imei;
@property(readonly, copy, nonatomic) NSString *clientKey; // @synthesize clientKey=_clientKey;
@property(readonly, copy, nonatomic) NSString *vudid; // @synthesize vudid=_vudid;
@property(readonly, copy, nonatomic) NSString *udid; // @synthesize udid=_udid;
- (void).cxx_destruct;
- (_Bool)spChainStringUpdate:(unsigned int)arg1;
- (void)spChainStringHandle;
- (id)getCarrier;
- (id)getAccessType;
- (id)safeString:(id)arg1;
- (_Bool)isReachableViaWiFi;
- (id)simpleNetType;
- (id)networkType:(id)arg1;
- (id)wifiName;
- (id)deviceName;
- (id)macAddress;
- (id)wifiInterface;
- (id)vkeyidToken;
@property(readonly, copy, nonatomic) NSString *apdid; // @synthesize apdid=_apdid;
@property(readonly, nonatomic) NSString *hascertpay;
@property(readonly, nonatomic) NSString *hasalipay; // @synthesize hasalipay=_hasalipay;
@property(readonly, nonatomic) NSString *mspType;
@property(readonly, copy, nonatomic) NSString *newclientkey; // @synthesize newclientkey=_newclientkey;
- (id)getUAPartC;
- (id)getUAPartAWithNetType:(id)arg1;
@property(readonly, copy, nonatomic) NSString *uac; // @synthesize uac=_uac;
- (id)uaWithNetType:(id)arg1;
@property(readonly, copy, nonatomic) NSString *ua;
- (void)notifyTidChanged;
- (void)cleanTid;
- (void)saveTid:(id)arg1 ClientKey:(id)arg2;
@property(readonly, copy, nonatomic) NSString *tid; // @synthesize tid=_tid;
- (void)prepareTidAndCK;
- (void)prepareVimsiAndVimei;
- (void)prepareImsiAndImei;
- (id)init;

@end

