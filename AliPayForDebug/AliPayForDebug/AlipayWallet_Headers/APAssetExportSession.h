//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "APMAssetExportSessionProtocol-Protocol.h"

@class APVideoExportSetting, AVAsset, AVAssetReader, AVAssetReaderAudioMixOutput, AVAssetReaderVideoCompositionOutput, AVAssetWriter, AVAssetWriterInput, AVAudioMix, AVVideoComposition, NSArray, NSDictionary, NSError, NSString, NSTimer, NSURL;
@protocol OS_dispatch_queue;

@interface APAssetExportSession : NSObject <APMAssetExportSessionProtocol>
{
    NSError *_error;
    double duration;
    CDStruct_1b6d18a9 lastSamplePresentationTime;
    _Bool _shouldOptimizeForNetworkUse;
    float _progress;
    AVAsset *_asset;
    AVVideoComposition *_videoComposition;
    AVAudioMix *_audioMix;
    NSString *_outputFileType;
    NSURL *_outputURL;
    APVideoExportSetting *_exportSetting;
    NSArray *_metadata;
    CDUnknownBlockType _progressHandler;
    AVAssetReader *_reader;
    AVAssetReaderVideoCompositionOutput *_videoOutput;
    AVAssetReaderAudioMixOutput *_audioOutput;
    AVAssetWriter *_writer;
    AVAssetWriterInput *_videoInput;
    AVAssetWriterInput *_audioInput;
    NSObject<OS_dispatch_queue> *_inputQueue;
    CDUnknownBlockType _completionHandler;
    NSTimer *_progressTimer;
    NSDictionary *_audioSettings;
    NSDictionary *_videoSettings;
    NSDictionary *_videoInputSettings;
    CDStruct_e83c9415 _timeRange;
}

@property(copy, nonatomic) NSDictionary *videoInputSettings; // @synthesize videoInputSettings=_videoInputSettings;
@property(copy, nonatomic) NSDictionary *videoSettings; // @synthesize videoSettings=_videoSettings;
@property(copy, nonatomic) NSDictionary *audioSettings; // @synthesize audioSettings=_audioSettings;
@property(retain, nonatomic) NSTimer *progressTimer; // @synthesize progressTimer=_progressTimer;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *inputQueue; // @synthesize inputQueue=_inputQueue;
@property(retain, nonatomic) AVAssetWriterInput *audioInput; // @synthesize audioInput=_audioInput;
@property(retain, nonatomic) AVAssetWriterInput *videoInput; // @synthesize videoInput=_videoInput;
@property(retain, nonatomic) AVAssetWriter *writer; // @synthesize writer=_writer;
@property(retain, nonatomic) AVAssetReaderAudioMixOutput *audioOutput; // @synthesize audioOutput=_audioOutput;
@property(retain, nonatomic) AVAssetReaderVideoCompositionOutput *videoOutput; // @synthesize videoOutput=_videoOutput;
@property(retain, nonatomic) AVAssetReader *reader; // @synthesize reader=_reader;
@property(copy, nonatomic) CDUnknownBlockType progressHandler; // @synthesize progressHandler=_progressHandler;
@property(nonatomic) float progress; // @synthesize progress=_progress;
@property(copy, nonatomic) NSArray *metadata; // @synthesize metadata=_metadata;
@property(nonatomic) _Bool shouldOptimizeForNetworkUse; // @synthesize shouldOptimizeForNetworkUse=_shouldOptimizeForNetworkUse;
@property(nonatomic) CDStruct_e83c9415 timeRange; // @synthesize timeRange=_timeRange;
@property(retain, nonatomic) APVideoExportSetting *exportSetting; // @synthesize exportSetting=_exportSetting;
@property(copy, nonatomic) NSURL *outputURL; // @synthesize outputURL=_outputURL;
@property(copy, nonatomic) NSString *outputFileType; // @synthesize outputFileType=_outputFileType;
@property(copy, nonatomic) AVAudioMix *audioMix; // @synthesize audioMix=_audioMix;
@property(copy, nonatomic) AVVideoComposition *videoComposition; // @synthesize videoComposition=_videoComposition;
@property(readonly, nonatomic) AVAsset *asset; // @synthesize asset=_asset;
- (void).cxx_destruct;
- (void)dealloc;
- (void)updateProgress;
- (void)stopProgressTimer;
- (void)startProgressTimer;
- (void)reset;
- (void)cancelExport;
@property(readonly, nonatomic) long long status;
@property(readonly, nonatomic) NSError *error;
- (void)complete;
- (void)finish;
- (_Bool)encodeReadySamplesFromOutput:(id)arg1 toInput:(id)arg2;
- (void)exportAsynchronouslyWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)initWithAsset:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

