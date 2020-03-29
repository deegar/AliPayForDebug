//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface APMAudioEncoder : NSObject
{
    struct APMOpusEncoder *_opusEncoder;
    int _sampleRate;
    long long _encodeType;
}

+ (id)stringWithEncodeType:(long long)arg1;
@property(nonatomic) int sampleRate; // @synthesize sampleRate=_sampleRate;
@property(nonatomic) long long encodeType; // @synthesize encodeType=_encodeType;
- (int)encode:(const short *)arg1 size:(unsigned long long)arg2 out:(char **)arg3;
- (void)dealloc;
- (id)initWithType:(long long)arg1;

@end

