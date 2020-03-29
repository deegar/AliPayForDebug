//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class APMCommonCrypt, APMTaskScheduler, FileCache2, NSOperationQueue;
@protocol OS_dispatch_queue;

@interface APFileManager : NSObject
{
    FileCache2 *_fileCache;
    NSOperationQueue *_downloadQueue;
    NSOperationQueue *_uploadQueue;
    NSObject<OS_dispatch_queue> *_taskQueue;
    APMTaskScheduler *_uploadTaskScheduler;
    APMTaskScheduler *_downloadTaskScheduler;
    APMCommonCrypt *_commonCrypt;
}

+ (id)manager;
@property(retain, nonatomic) APMCommonCrypt *commonCrypt; // @synthesize commonCrypt=_commonCrypt;
@property(retain, nonatomic) APMTaskScheduler *downloadTaskScheduler; // @synthesize downloadTaskScheduler=_downloadTaskScheduler;
@property(retain, nonatomic) APMTaskScheduler *uploadTaskScheduler; // @synthesize uploadTaskScheduler=_uploadTaskScheduler;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *taskQueue; // @synthesize taskQueue=_taskQueue;
@property(retain, nonatomic) NSOperationQueue *uploadQueue; // @synthesize uploadQueue=_uploadQueue;
@property(retain, nonatomic) NSOperationQueue *downloadQueue; // @synthesize downloadQueue=_downloadQueue;
- (void).cxx_destruct;
- (id)saveCacheFromPartialCacheWithCloudId:(id)arg1 request:(id)arg2;
- (id)savePartialCacheWithCloudId:(id)arg1 request:(id)arg2;
- (void)createDirectoryAtPath:(id)arg1;
- (id)decryptZipTmpPathWithCloudId:(id)arg1;
- (void)encryptPathFileInput:(id)arg1 output:(id)arg2 request:(id)arg3 complete:(CDUnknownBlockType)arg4;
- (id)encryptData:(id)arg1 request:(id)arg2;
- (void)decryptDataInputFile:(id)arg1 outputFile:(id)arg2 clouldId:(id)arg3 isZip:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;
- (id)decryptData:(id)arg1;
- (id)taskIDsFromIdentidier:(id)arg1;
- (id)taskIdWithIdentfier:(id)arg1 request:(id)arg2;
- (id)partialCacheKeyWithCloudId:(id)arg1;
- (CDUnknownBlockType)downloadRequestCompleteFromFilePathComplete:(CDUnknownBlockType)arg1 cloudId:(id)arg2;
- (CDUnknownBlockType)downloadRequestCompleteFromFileComplete:(CDUnknownBlockType)arg1 cloudId:(id)arg2;
- (_Bool)cancelTaskWithLocalId:(id)arg1;
- (_Bool)unZipFileWithPath:(id)arg1 unzipTo:(id)arg2;
- (id)buildFileDownloadUrlWithCloudId:(id)arg1;
- (id)cachePathWithIdentifier:(id)arg1;
- (id)destinationPathWithCloudId:(id)arg1 storePathRequest:(id)arg2;
- (id)downloadFileTmpPathWithCloudId:(id)arg1 downloadRequest:(id)arg2;
- (id)filePathWithIdentifier:(id)arg1 storePath:(id)arg2 request:(id)arg3;
- (id)downloadFileWithCloudId:(id)arg1 downloadRequest:(id)arg2;
- (_Bool)isFileCacheExistFor:(id)arg1 request:(id)arg2;
- (id)downLoadFileToPathWithCloudId:(id)arg1 storePath:(id)arg2 isZip:(_Bool)arg3 md5:(id)arg4 progress:(CDUnknownBlockType)arg5 completion:(CDUnknownBlockType)arg6;
- (id)downLoadFileToPathWithCloudId:(id)arg1 storePath:(id)arg2 isZip:(_Bool)arg3 progress:(CDUnknownBlockType)arg4 completion:(CDUnknownBlockType)arg5;
- (id)masDownMethodFromCloudId:(id)arg1 downloadRequest:(id)arg2;
- (void)downloadFileByMassProxy:(id)arg1 downloadRequest:(id)arg2 taskRecord:(id)arg3;
- (void)handleError:(id)arg1 WithTaskRecord:(id)arg2;
- (_Bool)handTaskRecordFromCache:(id)arg1 cloudId:(id)arg2 downloadRequest:(id)arg3;
- (id)downLoadFileWithCloudId:(id)arg1 business:(id)arg2 progress:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
- (void)uploadOfflineWithUrlUsingMassInternal:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)uploadOfflineWithUrlUsingMass:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)doCompleteCallback:(id)arg1 object:(id)arg2 error:(id)arg3 userInfo:(id)arg4 deleteFrom:(id)arg5;
- (id)createProgressDictionary:(double)arg1 partialBytes:(long long)arg2 totalBytes:(long long)arg3;
- (void)uploadOfflineWithUrl:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)uploadWithFileData:(id)arg1 request:(id)arg2;
- (id)uploadWithFileData:(id)arg1 business:(id)arg2 progress:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
- (id)uploadWithFilePath:(id)arg1 request:(id)arg2;
- (id)uploadWithFilePath:(id)arg1 business:(id)arg2 progress:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
- (id)init;
- (unsigned long long)getCacheStatusOfFile:(id)arg1;
- (unsigned long long)getDownloadStatusOfFile:(id)arg1 request:(id)arg2;
- (id)resumeBreakpointDownloadFile:(id)arg1 url:(id)arg2 bizType:(id)arg3 progress:(CDUnknownBlockType)arg4 completion:(CDUnknownBlockType)arg5;
- (id)brokenPointContinuinglyTransferringDownloadRequestWithCloudId:(id)arg1;

@end

