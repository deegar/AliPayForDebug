//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TEXSource.h"

#import "APMAudioSessionManagerDelegate-Protocol.h"

@class NSObject;
@protocol OS_dispatch_queue, TEXMicSourceDelegate;

@interface TEXMicSource : TEXSource <APMAudioSessionManagerDelegate>
{
    struct OpaqueAudioComponentInstance *audioUnit;
    struct AudioStreamBasicDescription audioFormat;
    struct AudioBuffer buffer;
    struct AudioBufferList bufferList;
    struct opaqueCMFormatDescription *format;
    int currentNumberFrames;
    NSObject<OS_dispatch_queue> *queue;
    _Bool _alreadySetup;
    _Bool _shouldResumeAudioSession;
    id <TEXMicSourceDelegate> _delegate;
}

@property(nonatomic) __weak id <TEXMicSourceDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)audioSessionManagerReceiveResumeCommand:(id)arg1;
- (void)audioSessionManagerReceivePauseCommand:(id)arg1;
- (void)restoreAudioSession;
- (void)configAudioSession;
- (void)postNotificationWithSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (void)handleAudioSamples:(struct AudioBufferList *)arg1 numSamples:(unsigned int)arg2 hostTime:(unsigned long long)arg3 inTimeStamp:(const struct AudioTimeStamp *)arg4;
- (void)destroyBufferList;
- (void)createBufferListWithFrames:(unsigned int)arg1;
- (_Bool)finish;
- (void)stop;
- (void)start;
- (_Bool)setupWithSampleRate:(int)arg1;
- (void)dealloc;
- (id)init;

@end
