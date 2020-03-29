//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "XRTCRtpTransceiver-Protocol.h"

@class NSString, XRTCPeerConnectionFactory, XRTCRtpReceiver, XRTCRtpSender;

@interface XRTCRtpTransceiver : NSObject <XRTCRtpTransceiver>
{
    XRTCPeerConnectionFactory *_factory;
    scoped_refptr_97b7538b _nativeRtpTransceiver;
    XRTCRtpSender *_sender;
    XRTCRtpReceiver *_receiver;
}

+ (long long)rtpTransceiverDirectionFromNativeDirection:(int)arg1;
+ (int)nativeRtpTransceiverDirectionFromDirection:(long long)arg1;
@property(readonly, nonatomic) XRTCRtpReceiver *receiver; // @synthesize receiver=_receiver;
@property(readonly, nonatomic) XRTCRtpSender *sender; // @synthesize sender=_sender;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithFactory:(id)arg1 nativeRtpTransceiver:(scoped_refptr_97b7538b)arg2;
@property(readonly, nonatomic) scoped_refptr_97b7538b nativeRtpTransceiver;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy) NSString *description;
- (void)stop;
- (_Bool)currentDirection:(long long *)arg1;
@property(nonatomic) long long direction;
@property(readonly, nonatomic) _Bool isStopped;
@property(readonly, nonatomic) NSString *mid;
@property(readonly, nonatomic) long long mediaType;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

