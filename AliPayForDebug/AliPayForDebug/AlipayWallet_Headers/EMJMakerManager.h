//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class EMJStickerSetMakeJob, EMJStickersEnqueuedInfo, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface EMJMakerManager : NSObject
{
    double _lastFaceCreatedAt;
    NSMutableDictionary *_stickerSetMakeStats;
    EMJStickersEnqueuedInfo *_enqueuedInfo;
    EMJStickerSetMakeJob *_activeJob;
    NSObject<OS_dispatch_queue> *_makingQueue;
    NSString *_faceFolder;
}

+ (id)targetFolderForStickerId:(id)arg1;
+ (id)rootTargetFolder;
+ (void)releaseSharedInstance;
+ (id)sharedInstance;
+ (id)bootstrapSharedInstance;
@property(retain, nonatomic) NSString *faceFolder; // @synthesize faceFolder=_faceFolder;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *makingQueue; // @synthesize makingQueue=_makingQueue;
@property(retain, nonatomic) EMJStickerSetMakeJob *activeJob; // @synthesize activeJob=_activeJob;
@property(retain, nonatomic) EMJStickersEnqueuedInfo *enqueuedInfo; // @synthesize enqueuedInfo=_enqueuedInfo;
@property(retain, nonatomic) NSMutableDictionary *stickerSetMakeStats; // @synthesize stickerSetMakeStats=_stickerSetMakeStats;
@property(readonly, nonatomic) double lastFaceCreatedAt; // @synthesize lastFaceCreatedAt=_lastFaceCreatedAt;
- (void).cxx_destruct;
- (id)createNewFileWithFaceData:(id)arg1;
- (id)nextFacePath;
- (id)mostRecentFacePath;
- (id)fetchAllHistoryFacePathAndPropertiesArray:(_Bool)arg1;
- (void)tickNext;
- (void)enqueueMakeStickerSet:(id)arg1 faceImagePath:(id)arg2;
- (long long)statusForStickerSetItem:(id)arg1;
- (long long)statusForStickerItem:(id)arg1;
- (void)clearPreviousMakeResults;
- (id)init;
- (void)dealloc;

@end

