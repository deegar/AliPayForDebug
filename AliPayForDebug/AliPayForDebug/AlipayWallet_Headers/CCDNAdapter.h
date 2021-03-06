//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CCDNCtlService, CCDNTinyAppTrace, NSMutableDictionary, NSOperationQueue;

@interface CCDNAdapter : NSObject
{
    _Bool _needTrace;
    int _ccdnInitResult;
    NSMutableDictionary *_appMap;
    CCDNCtlService *_ctlService;
    NSOperationQueue *_ccdnQueue;
    CCDNTinyAppTrace *_appTrace;
}

+ (id)defaultInstance;
@property(nonatomic) _Bool needTrace; // @synthesize needTrace=_needTrace;
@property(retain, nonatomic) CCDNTinyAppTrace *appTrace; // @synthesize appTrace=_appTrace;
@property(retain, nonatomic) NSOperationQueue *ccdnQueue; // @synthesize ccdnQueue=_ccdnQueue;
@property(retain, nonatomic) CCDNCtlService *ctlService; // @synthesize ctlService=_ctlService;
@property(retain, nonatomic) NSMutableDictionary *appMap; // @synthesize appMap=_appMap;
@property(nonatomic) int ccdnInitResult; // @synthesize ccdnInitResult=_ccdnInitResult;
- (void).cxx_destruct;
- (void)ccdnWriteErrorMdap:(id)arg1;
- (void)preloadDataWithAppInfo:(id)arg1;
- (void)appExitWithAppInfo:(id)arg1;
- (void)addResource2Rec:(id)arg1 recNode:(id)arg2;
- (void)addRec:(id)arg1 dataLen:(int)arg2 error:(id)arg3;
- (_Bool)interceptMethod:(id)arg1 timeoutInterval:(double)arg2 progress:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4 headReceive:(CDUnknownBlockType)arg5;
- (void)addSubResourceTag:(id)arg1 recNode:(id)arg2;
- (_Bool)callbackWithError:(id)arg1 method:(id)arg2 completion:(CDUnknownBlockType)arg3 headReceive:(CDUnknownBlockType)arg4;
- (void)noticeCallBack:(id)arg1 completion:(_Bool)arg2 fallbackAll:(_Bool)arg3 log:(id)arg4;
- (void)necessaryResource:(id)arg1 method:(id)arg2;
- (void)noticeCallBackAfterDownLoadPartFile:(id)arg1 completion:(_Bool)arg2 fallbackAll:(_Bool)arg3 log:(id)arg4 method:(id)arg5;
- (void)logDownloadPreload:(id)arg1 error:(id)arg2 dlTime:(double)arg3;
- (id)innerDownloadUrl:(id)arg1 timeoutInterval:(double)arg2;
- (long long)loadDataWithAppInfo:(id)arg1 completion:(CDUnknownBlockType)arg2 isPreload:(_Bool)arg3;
- (id)parserWithCCDNUrl:(id)arg1;
- (long long)packageStatus:(id)arg1;
- (long long)loadDataWithAppInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)recNodeForAppId:(id)arg1 version:(id)arg2 pkgurl:(id)arg3 resultCode:(int *)arg4;
- (void)startService;
- (id)init;

@end

