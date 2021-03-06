//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class APMTaskScheduler, NSMutableDictionary, NSOperationQueue, NetworkSetting, VideoCache2;
@protocol OS_dispatch_queue;

@interface APVideoManager : NSObject
{
    NSOperationQueue *_downloadQueue;
    NSOperationQueue *_uploadQueue;
    NSMutableDictionary *_statusDict;
    NSMutableDictionary *_progressDict;
    NSMutableDictionary *_identifierToTaskIdMap;
    NetworkSetting *_networkCloudSetting;
    double _timeout4Upload;
    double _timeout4Download;
    VideoCache2 *_cache;
    NSObject<OS_dispatch_queue> *_taskQueue;
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSOperationQueue *_queryCacheQueue;
    APMTaskScheduler *_cacheTaskScheduler;
    APMTaskScheduler *_uploadTaskScheduler;
    APMTaskScheduler *_downloadTaskScheduler;
    struct _opaque_pthread_mutex_t _lock;
}

+ (void)requestCameraPermission:(CDUnknownBlockType)arg1;
+ (id)shareManager;
@property(retain, nonatomic) APMTaskScheduler *downloadTaskScheduler; // @synthesize downloadTaskScheduler=_downloadTaskScheduler;
@property(retain, nonatomic) APMTaskScheduler *uploadTaskScheduler; // @synthesize uploadTaskScheduler=_uploadTaskScheduler;
@property(retain, nonatomic) APMTaskScheduler *cacheTaskScheduler; // @synthesize cacheTaskScheduler=_cacheTaskScheduler;
@property(retain, nonatomic) NSOperationQueue *queryCacheQueue; // @synthesize queryCacheQueue=_queryCacheQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue; // @synthesize serialQueue=_serialQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *taskQueue; // @synthesize taskQueue=_taskQueue;
@property(retain, nonatomic) VideoCache2 *cache; // @synthesize cache=_cache;
@property(nonatomic) struct _opaque_pthread_mutex_t lock; // @synthesize lock=_lock;
@property(nonatomic) double timeout4Download; // @synthesize timeout4Download=_timeout4Download;
@property(nonatomic) double timeout4Upload; // @synthesize timeout4Upload=_timeout4Upload;
@property(retain, nonatomic) NetworkSetting *networkCloudSetting; // @synthesize networkCloudSetting=_networkCloudSetting;
@property(retain, nonatomic) NSMutableDictionary *identifierToTaskIdMap; // @synthesize identifierToTaskIdMap=_identifierToTaskIdMap;
@property(retain, nonatomic) NSMutableDictionary *progressDict; // @synthesize progressDict=_progressDict;
@property(retain, nonatomic) NSMutableDictionary *statusDict; // @synthesize statusDict=_statusDict;
@property(retain, nonatomic) NSOperationQueue *uploadQueue; // @synthesize uploadQueue=_uploadQueue;
@property(retain, nonatomic) NSOperationQueue *downloadQueue; // @synthesize downloadQueue=_downloadQueue;
- (void).cxx_destruct;
- (float)estimateBitRateWithAVAsset:(id)arg1 compressLevel:(unsigned long long)arg2;
- (int)getSizeOfVideo:(id)arg1;
- (_Bool)isAlbumVideo:(id)arg1;
- (void)storeVideoIntoPhotoAlbumWithIdentifier:(id)arg1 complete:(CDUnknownBlockType)arg2;
- (id)getVideoIdWithIdentifier:(id)arg1;
- (id)getVideoPathWithIdentifier:(id)arg1;
- (_Bool)isIdentifierLocal:(id)arg1;
- (id)getShortVideoList;
- (void)delShortVideoWithLocalId:(id)arg1;
- (void)addShortVideoWithLocalId:(id)arg1;
- (void)removeStatusForTaskId:(id)arg1;
- (void)removeStatusForIdentifier:(id)arg1;
- (void)setProgress:(double)arg1 forIdentifier:(id)arg2;
- (void)setStatus:(unsigned long long)arg1 forIdentifier:(id)arg2 taskId:(id)arg3;
- (void)clearCacheForCloudId:(id)arg1;
- (void)clearCacheForLocalId:(id)arg1;
- (double)calcPercentage:(double)arg1 isThumbnail:(_Bool)arg2;
- (void)doCompleteCallback:(id)arg1 object:(id)arg2 error:(id)arg3 userInfo:(id)arg4 deleteFrom:(id)arg5;
- (void)doProgressWithDic:(id)arg1 progressBlock:(CDUnknownBlockType)arg2;
- (id)createProgressDictionary:(double)arg1 partialBytes:(long long)arg2 totalBytes:(long long)arg3;
- (void)uploadVideoWithFilePath:(id)arg1 request:(id)arg2 taskRecord:(id)arg3 progress:(CDUnknownBlockType)arg4 completion:(CDUnknownBlockType)arg5;
- (void)uploadWithLocalId:(id)arg1 request:(id)arg2 business:(id)arg3 path:(id)arg4 taskRecord:(id)arg5;
- (id)uploadWithLocalIdInternal:(id)arg1 uploadRequest:(id)arg2;
- (void)downloadVideoWithCloudId:(id)arg1 business:(id)arg2 expirationTime:(int)arg3 taskRecord:(id)arg4 useHttps:(_Bool)arg5;
- (void)getVideoFromServerWithCloudId:(id)arg1 business:(id)arg2 expirationTime:(int)arg3 useHttps:(_Bool)arg4 taskRecord:(id)arg5;
- (id)getVideoWithIdentifier:(id)arg1 business:(id)arg2 bizType:(id)arg3 expirationTime:(int)arg4 useHttps:(_Bool)arg5 md5:(id)arg6 priority:(unsigned long long)arg7 progress:(CDUnknownBlockType)arg8 completion:(CDUnknownBlockType)arg9;
- (void)cacheVideoWithURL:(id)arg1 videoKey:(id)arg2 thumbnail:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)cacheVideoWithPath:(id)arg1 thumbnail:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)cacheVideoWithPath:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)cacheThumbnail:(id)arg1 videoKey:(id)arg2 taskRecord:(id)arg3;
- (void)cacheThumbnailFromVideoAsset:(id)arg1 maximumSize:(struct CGSize)arg2 videoKey:(id)arg3 taskRecord:(id)arg4;
- (void)compressVideoWithAVAsset:(id)arg1 videoKey:(id)arg2 taskRecord:(id)arg3 fileSize:(long long)arg4 isShortVideo:(_Bool)arg5 compressRequest:(id)arg6;
- (void)compressVideoWithAVAsset:(id)arg1 videoKey:(id)arg2 fileSize:(long long)arg3 isShortVideo:(_Bool)arg4 compressRequest:(id)arg5;
- (double)getProgressOfIdentifier:(id)arg1;
- (id)videoKeyFromUrl:(id)arg1;
- (unsigned long long)getStatusOfIdentifier:(id)arg1;
- (void)clearCacheForIdentifier:(id)arg1;
- (_Bool)cancelTaskWithTaskId:(id)arg1;
- (_Bool)cancelTaskWithIdentifier:(id)arg1;
- (id)uploadWithLocalId:(id)arg1 request:(id)arg2;
- (id)uploadWithLocalId:(id)arg1 business:(id)arg2 progress:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
- (id)getVideo:(id)arg1 request:(id)arg2;
- (id)getVideoWithCloudId:(id)arg1 business:(id)arg2 bizType:(id)arg3 expirationTime:(int)arg4 useHttps:(_Bool)arg5 md5:(id)arg6 priority:(unsigned long long)arg7 progress:(CDUnknownBlockType)arg8 completion:(CDUnknownBlockType)arg9;
- (id)getVideoWithLocalId:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)getVideoWithIdentifier:(id)arg1 business:(id)arg2 progress:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
- (id)getThumbnailIdFromIdentifier:(id)arg1;
- (id)getThumbnailWithIdentifier:(id)arg1 business:(id)arg2 progress:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
- (id)getVideoThumbnail:(id)arg1 request:(id)arg2;
- (id)getThumbnailWithIdentifierFromCache:(id)arg1;
- (void)compressVideoWithPHAsset:(id)arg1 request:(id)arg2;
- (id)generateVideoCacheKeyWithIdentifier:(id)arg1 duration:(double)arg2 compressRequest:(id)arg3;
- (void)compressVideoWithALAsset:(id)arg1 request:(id)arg2;
- (double)estimatedCompressedDataSizeOfAsset:(id)arg1 compressLevel:(unsigned long long)arg2;
- (void)compressVideoWithAsset:(id)arg1 request:(id)arg2;
- (void)compressVideoWithAsset:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)compressVideoWithPath:(id)arg1 request:(id)arg2;
- (void)compressVideoWithPath:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)init;
- (id)workAroundWhenAvAssetIsEmpty:(id)arg1;
- (void)callbackWithAVAsset:(id)arg1 request:(id)arg2 error:(id)arg3;
- (void)requestAVAssetForVideoWithPHAsset:(id)arg1 request:(id)arg2;
- (void)requestAVAssetForVideoWithALAsset:(id)arg1 request:(id)arg2;
- (void)generateThumbnailFromAVAsset:(id)arg1 atTime:(double)arg2 size:(struct CGSize)arg3 completeHandler:(CDUnknownBlockType)arg4;
- (void)generateThumbnailsFromAVAsset:(id)arg1 startPoint:(double)arg2 endPoint:(double)arg3 count:(unsigned long long)arg4 size:(struct CGSize)arg5 completeHandler:(CDUnknownBlockType)arg6;
- (void)requestAVAssetForVideoWithAsset:(id)arg1 request:(id)arg2;

@end

