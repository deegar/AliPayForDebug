//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString, XRTCRtcpParameters;

@interface XRTCRtpParameters : NSObject
{
    NSString *_transactionId;
    XRTCRtcpParameters *_rtcp;
    NSArray *_headerExtensions;
    NSArray *_encodings;
    NSArray *_codecs;
}

@property(copy, nonatomic) NSArray *codecs; // @synthesize codecs=_codecs;
@property(copy, nonatomic) NSArray *encodings; // @synthesize encodings=_encodings;
@property(readonly, copy, nonatomic) NSArray *headerExtensions; // @synthesize headerExtensions=_headerExtensions;
@property(readonly, copy, nonatomic) XRTCRtcpParameters *rtcp; // @synthesize rtcp=_rtcp;
@property(copy, nonatomic) NSString *transactionId; // @synthesize transactionId=_transactionId;
- (void).cxx_destruct;
@property(readonly, nonatomic) struct RtpParameters nativeParameters;
- (id)initWithNativeParameters:(const struct RtpParameters *)arg1;
- (id)init;

@end

