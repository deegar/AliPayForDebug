//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSLock, NSMutableArray, NSOperationQueue, NSString;

@interface AFWStockLogUploader : NSObject
{
    NSOperationQueue *_networkQueue;
    NSString *_serverURL;
    NSMutableArray *_blocksAfterUpload;
    NSLock *_blockArrayLock;
    _Bool _isUploading;
}

@property(nonatomic) _Bool isUploading; // @synthesize isUploading=_isUploading;
- (void).cxx_destruct;
- (void)upLoadLogToServerLog:(id)arg1 fileName:(id)arg2;
- (void)upLoadLogToServerFile:(id)arg1;
- (id)init;

@end

