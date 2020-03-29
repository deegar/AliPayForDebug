//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, XRTCRtpReceiver, XRTCRtpSender;

@protocol XRTCRtpTransceiver <NSObject>
@property(nonatomic) long long direction;
@property(readonly, nonatomic) _Bool isStopped;
@property(readonly, nonatomic) XRTCRtpReceiver *receiver;
@property(readonly, nonatomic) XRTCRtpSender *sender;
@property(readonly, nonatomic) NSString *mid;
@property(readonly, nonatomic) long long mediaType;
- (void)stop;
- (_Bool)currentDirection:(long long *)arg1;
@end

