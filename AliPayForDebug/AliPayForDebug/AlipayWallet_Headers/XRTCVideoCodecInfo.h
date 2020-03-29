//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSDictionary, NSString;

@interface XRTCVideoCodecInfo : NSObject <NSCoding>
{
    NSString *_name;
    NSDictionary *_parameters;
}

@property(readonly, nonatomic) NSDictionary *parameters; // @synthesize parameters=_parameters;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEqualToCodecInfo:(id)arg1;
- (id)initWithName:(id)arg1 parameters:(id)arg2;
- (id)initWithName:(id)arg1;
- (struct SdpVideoFormat)nativeSdpVideoFormat;
- (id)initWithNativeSdpVideoFormat:(struct SdpVideoFormat)arg1;

@end

