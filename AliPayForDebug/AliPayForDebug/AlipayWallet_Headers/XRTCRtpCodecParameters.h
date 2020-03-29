//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSNumber, NSString;

@interface XRTCRtpCodecParameters : NSObject
{
    int _payloadType;
    NSString *_name;
    NSString *_kind;
    NSNumber *_clockRate;
    NSNumber *_numChannels;
    NSDictionary *_parameters;
}

@property(readonly, nonatomic) NSDictionary *parameters; // @synthesize parameters=_parameters;
@property(readonly, nonatomic) NSNumber *numChannels; // @synthesize numChannels=_numChannels;
@property(readonly, nonatomic) NSNumber *clockRate; // @synthesize clockRate=_clockRate;
@property(readonly, nonatomic) NSString *kind; // @synthesize kind=_kind;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) int payloadType; // @synthesize payloadType=_payloadType;
- (void).cxx_destruct;
@property(readonly, nonatomic) struct RtpCodecParameters nativeParameters;
- (id)initWithNativeParameters:(const struct RtpCodecParameters *)arg1;
- (id)init;

@end
