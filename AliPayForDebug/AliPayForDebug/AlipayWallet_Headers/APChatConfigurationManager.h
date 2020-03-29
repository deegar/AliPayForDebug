//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class APCustomStorage, NSDictionary, NSMutableArray, NSMutableDictionary;
@protocol APChatSceneBasicInfoProxy;

@interface APChatConfigurationManager : NSObject
{
    id <APChatSceneBasicInfoProxy> __relationProxy;
    APCustomStorage *_storage;
    NSMutableDictionary *_tableNameCache;
    NSDictionary *_currentBasicInfo;
    NSMutableDictionary *_progressStatusDict;
    NSObject *_imageProgressLock;
    NSMutableDictionary *_iCloudStateInfos;
    NSMutableArray *_retrySmallVideoInfos;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSMutableArray *retrySmallVideoInfos; // @synthesize retrySmallVideoInfos=_retrySmallVideoInfos;
@property(retain, nonatomic) NSMutableDictionary *iCloudStateInfos; // @synthesize iCloudStateInfos=_iCloudStateInfos;
@property(retain, nonatomic) NSObject *imageProgressLock; // @synthesize imageProgressLock=_imageProgressLock;
@property(retain, nonatomic) NSMutableDictionary *progressStatusDict; // @synthesize progressStatusDict=_progressStatusDict;
@property(retain, nonatomic) NSDictionary *currentBasicInfo; // @synthesize currentBasicInfo=_currentBasicInfo;
@property(retain, nonatomic) NSMutableDictionary *tableNameCache; // @synthesize tableNameCache=_tableNameCache;
@property(retain, nonatomic) APCustomStorage *storage; // @synthesize storage=_storage;
@property(retain, nonatomic) id <APChatSceneBasicInfoProxy> _relationProxy; // @synthesize _relationProxy=__relationProxy;
- (void).cxx_destruct;
- (_Bool)isCacheRetrySmallVideoUrl:(id)arg1;
- (void)removeRetrySmallVideoUrl:(id)arg1;
- (void)cacheRetrySmallVideoUrl:(id)arg1;
- (long long)getiCloudStateForUrl:(id)arg1;
- (void)removeiCloudStateForUrl:(id)arg1;
- (void)storeiCloudSyncState:(long long)arg1 url:(id)arg2;
- (void)storeImage:(id)arg1 forKey:(id)arg2;
- (id)imageFromDiskForKey:(id)arg1;
- (_Bool)imageExistOnDiskForKey:(id)arg1;
- (id)cachedNameForKey:(id)arg1;
- (id)syncThumbnailWithImageUrl:(id)arg1;
- (_Bool)saveSyncThumbnailImage:(id)arg1 withData:(id)arg2;
- (id)imageFromWebImageCache:(id)arg1;
- (_Bool)saveImageToWebImageCache:(id)arg1 imageUrl:(id)arg2;
- (_Bool)saveSyncThumbnailImage:(id)arg1 withImage:(id)arg2;
- (long long)queryProgressStatus:(id)arg1;
- (void)insertProgressStatus:(id)arg1 withProgress:(long long)arg2;
- (void)removeProgressStatus:(id)arg1;
- (id)chatPicturesWithUID:(id)arg1 type:(id)arg2 snapChatMsg:(_Bool)arg3 clientMsgID:(id)arg4;
- (id)stringWithTagSource:(id)arg1 userType:(id)arg2 groupId:(id)arg3;
- (id)arrayWithBusTagText:(id)arg1;
- (void)foreachNode:(id)arg1 results:(id)arg2;
- (id)dictWithHTMLNode:(id)arg1;
- (_Bool)supportNodeType:(int)arg1;
- (id)insertChatSceneBasicInfo:(id)arg1;
- (void)deleteAllSpecificSceneBasicInfo:(id)arg1;
- (id)queryChatSceneBasicInfoWithSceneID:(id)arg1;
- (id)chatSceneTextcolor;
- (id)chatSceneBackgroundImage;
- (id)chatSceneBackgroundImageURL;
- (id)globalChatSceneBackgroundImage;
- (_Bool)saveChatSceneBasicInfo:(id)arg1;
- (_Bool)loadChatSceneBasicInfoWithSessionID:(id)arg1;
- (void)queryAllChatBG:(id)arg1 compelet:(CDUnknownBlockType)arg2;
- (id)init;
- (void)dealloc;

@end

