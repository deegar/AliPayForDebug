//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSMutableArray, NSOperationQueue, NSString;

@interface APManualUploader : NSObject
{
    NSMutableArray *_uploadFileArry;
    NSOperationQueue *_networkQueue;
    _Bool _isUploading;
    NSDate *_startDate;
    NSDate *_endDate;
    NSString *_account;
    NSString *_userId;
}

- (void).cxx_destruct;
- (void)uploadFile;
- (void)zipFile;
- (void)checkFile;
- (void)doZipAndUploadImpl;
- (void)uploadInThread:(id)arg1 withAccount:(id)arg2 userId:(id)arg3 startDate:(id)arg4 endDate:(id)arg5;
- (void)dealloc;
- (id)init;

@end

