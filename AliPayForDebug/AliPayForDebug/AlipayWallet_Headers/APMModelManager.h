//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface APMModelManager : NSObject
{
}

+ (id)sharedManager;
- (_Bool)unZipFileWithPath:(id)arg1 unzipTo:(id)arg2;
- (_Bool)isZipFile:(id)arg1;
- (id)getModelFilesWithDirPath:(id)arg1;
- (id)getModelResultArrayWithDirPath:(id)arg1;
- (id)getFilePathWithId:(id)arg1;
- (_Bool)isFileCacheExist:(id)arg1;
- (void)uploadWithFileData:(id)arg1 business:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)downloadModelFileWithId:(id)arg1 md5:(id)arg2 forceUpdate:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;

@end

