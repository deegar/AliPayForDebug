//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "APConfigObserverProtocol-Protocol.h"

@class NSDictionary, NSString;

@interface RMBundleSizeResourceManager : NSObject <APConfigObserverProtocol>
{
    NSString *_storePath;
    NSDictionary *_infoDictionary;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSDictionary *infoDictionary; // @synthesize infoDictionary=_infoDictionary;
@property(retain, nonatomic) NSString *storePath; // @synthesize storePath=_storePath;
- (void).cxx_destruct;
- (void)updateInfoByConfig:(id)arg1;
- (void)configChangedForKey:(id)arg1 value:(id)arg2;
- (void)checkInfoFromConfig;
- (void)startToCheckAndDownload;
- (void)findNeedDownloadFileFromArray:(id)arg1;
- (void)findAndDeleteNotUseFileFromArray:(id)arg1;
- (int)typeForResource:(id)arg1;
- (void)preDownloadFileResources:(id)arg1;
- (void)initPath;
- (void)setImage:(id)arg1 toImageView:(id)arg2;
- (void)getFileResource:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)pathForResource:(id)arg1;
- (id)md5ForResource:(id)arg1;
- (id)cloudIdForResource:(id)arg1;
- (id)pathToSaveResource;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

