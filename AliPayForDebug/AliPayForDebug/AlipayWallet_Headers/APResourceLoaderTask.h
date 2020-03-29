//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "APMTask.h"

@class APFileHandle, NSDate, NSError, NSObject, NSString, NSTimer;
@protocol APResourceLoaderTaskDelegate, OS_dispatch_queue;

@interface APResourceLoaderTask : APMTask
{
    _Bool _needCache;
    _Bool _isCloudId;
    _Bool _supportRangeAcess;
    _Bool _shouldUseHttps;
    _Bool _encrypted;
    _Bool _success;
    _Bool _audio;
    _Bool _cacheFinished;
    _Bool _triggerWithTimer;
    _Bool _retryAfterCancel;
    _Bool _inRetry;
    int _failedTime;
    long long _requestOffset;
    long long _fileLength;
    long long _cacheLength;
    NSString *_contentType;
    NSString *_originalUrlString;
    APFileHandle *_fileHandler;
    NSString *_cloudID;
    id <APResourceLoaderTaskDelegate> _resourceLoaderTaskDelegate;
    NSDate *_startTime;
    NSDate *_startNetworkTime;
    NSDate *_receiveDataTime;
    NSDate *_endNetworkTime;
    NSDate *_endTime;
    NSError *_error;
    NSString *_business;
    NSString *_extension;
    long long _startOffset;
    NSString *_massRequestId;
    NSObject<OS_dispatch_queue> *_workingQueue;
    NSTimer *_timer;
    long long _lastReadBytes;
}

+ (id)generateTaskIdWithIdentifier:(id)arg1 offset:(long long)arg2;
@property(nonatomic) _Bool inRetry; // @synthesize inRetry=_inRetry;
@property(nonatomic) _Bool retryAfterCancel; // @synthesize retryAfterCancel=_retryAfterCancel;
@property(nonatomic) int failedTime; // @synthesize failedTime=_failedTime;
@property(nonatomic) _Bool triggerWithTimer; // @synthesize triggerWithTimer=_triggerWithTimer;
@property(nonatomic) long long lastReadBytes; // @synthesize lastReadBytes=_lastReadBytes;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(nonatomic) _Bool cacheFinished; // @synthesize cacheFinished=_cacheFinished;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workingQueue; // @synthesize workingQueue=_workingQueue;
@property(retain, nonatomic) NSString *massRequestId; // @synthesize massRequestId=_massRequestId;
@property(nonatomic, getter=isAudio) _Bool audio; // @synthesize audio=_audio;
@property(readonly, nonatomic) long long startOffset; // @synthesize startOffset=_startOffset;
@property(nonatomic) _Bool success; // @synthesize success=_success;
@property(retain, nonatomic) NSString *extension; // @synthesize extension=_extension;
@property(copy, nonatomic) NSString *business; // @synthesize business=_business;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) NSDate *endTime; // @synthesize endTime=_endTime;
@property(retain, nonatomic) NSDate *endNetworkTime; // @synthesize endNetworkTime=_endNetworkTime;
@property(retain, nonatomic) NSDate *receiveDataTime; // @synthesize receiveDataTime=_receiveDataTime;
@property(retain, nonatomic) NSDate *startNetworkTime; // @synthesize startNetworkTime=_startNetworkTime;
@property(retain, nonatomic) NSDate *startTime; // @synthesize startTime=_startTime;
@property(nonatomic) __weak id <APResourceLoaderTaskDelegate> resourceLoaderTaskDelegate; // @synthesize resourceLoaderTaskDelegate=_resourceLoaderTaskDelegate;
@property(nonatomic) _Bool encrypted; // @synthesize encrypted=_encrypted;
@property(nonatomic) _Bool shouldUseHttps; // @synthesize shouldUseHttps=_shouldUseHttps;
@property(nonatomic) _Bool supportRangeAcess; // @synthesize supportRangeAcess=_supportRangeAcess;
@property(retain, nonatomic) NSString *cloudID; // @synthesize cloudID=_cloudID;
@property(nonatomic) _Bool isCloudId; // @synthesize isCloudId=_isCloudId;
@property(retain, nonatomic) APFileHandle *fileHandler; // @synthesize fileHandler=_fileHandler;
@property(readonly, nonatomic) NSString *originalUrlString; // @synthesize originalUrlString=_originalUrlString;
@property(nonatomic) _Bool needCache; // @synthesize needCache=_needCache;
@property(retain, nonatomic) NSString *contentType; // @synthesize contentType=_contentType;
@property(nonatomic) long long cacheLength; // @synthesize cacheLength=_cacheLength;
@property(nonatomic) long long fileLength; // @synthesize fileLength=_fileLength;
@property(nonatomic) long long requestOffset; // @synthesize requestOffset=_requestOffset;
- (void).cxx_destruct;
- (id)getSSAuthService;
- (void)tryRefreshToken;
- (id)httpStatusLineWithHeadData:(id)arg1;
- (void)invalidateTimer;
- (void)activeProgressTimer;
- (_Bool)checkTaskStatus;
- (void)cancleCurrentRequest;
- (void)readCachedMediaData:(_Bool)arg1;
- (void)readAllCachedData;
- (void)readTempCachedMediaData;
- (id)identifier;
- (void)setContentTypeByContent:(id)arg1;
- (void)didCompleteWithError:(id)arg1;
- (void)didReceiveData:(id)arg1 withLength:(long long)arg2;
- (void)setMimeType:(id)arg1;
- (void)notSupportByResourceLoader;
- (void)didReceiveResponse:(id)arg1;
- (void)cancel;
- (void)start;
- (void)sendConentRequest;
- (void)createPartialCacheIfRequestFromOffsetZero;
- (void)validateRangeSupport;
- (void)prepareTask;
- (void)dealloc;
@property(readonly, nonatomic, getter=isSeek) _Bool seek;
- (id)initWithTaskID:(id)arg1 priority:(unsigned long long)arg2 callbackQueue:(id)arg3 requestUrl:(id)arg4;

@end

