//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface XMediaAudioCaptureConfig : NSObject
{
    unsigned long long _sampleRate;
    NSString *_audioSource;
    unsigned long long _frameSize;
}

@property(nonatomic) unsigned long long frameSize; // @synthesize frameSize=_frameSize;
@property(copy, nonatomic) NSString *audioSource; // @synthesize audioSource=_audioSource;
@property(nonatomic) unsigned long long sampleRate; // @synthesize sampleRate=_sampleRate;
- (void).cxx_destruct;
- (id)init;

@end

