//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "APMAssetExportSessionProtocol-Protocol.h"

@class AVURLAsset, NSError, NSString, NSURL;
@protocol OS_dispatch_queue;

@interface APMURLAssetExportSession : NSObject <APMAssetExportSessionProtocol>
{
    NSError *_error;
    long long _status;
    NSString *_outputFileType;
    AVURLAsset *_asset;
    NSURL *_outputURL;
    NSObject<OS_dispatch_queue> *_inputQueue;
    CDUnknownBlockType _completionHandler;
}

@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *inputQueue; // @synthesize inputQueue=_inputQueue;
@property(copy, nonatomic) NSURL *outputURL; // @synthesize outputURL=_outputURL;
@property(readonly, nonatomic) AVURLAsset *asset; // @synthesize asset=_asset;
@property(copy, nonatomic) NSString *outputFileType; // @synthesize outputFileType=_outputFileType;
@property(nonatomic) long long status; // @synthesize status=_status;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
- (void).cxx_destruct;
- (void)exportAsynchronouslyWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)initWithAsset:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

