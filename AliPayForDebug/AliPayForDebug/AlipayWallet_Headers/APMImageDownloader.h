//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface APMImageDownloader : NSObject
{
}

+ (id)getGifDataFromAPH3Data:(id)arg1;
+ (id)getImageDataFromNetworkData:(id)arg1 bizType:(id)arg2;
+ (id)shareInstance;
- (id)imageWithData:(id)arg1 md5:(id)arg2 error:(id *)arg3;
- (id)downloadImageWithId:(id)arg1 request:(id)arg2 zoom:(id)arg3 isRetry:(_Bool)arg4 progress:(CDUnknownBlockType)arg5 completion:(CDUnknownBlockType)arg6;
- (id)downloadOriginalImageWithId:(id)arg1 request:(id)arg2 isRetry:(_Bool)arg3 progress:(CDUnknownBlockType)arg4 completion:(CDUnknownBlockType)arg5;
- (id)downloadImageWithUrl:(id)arg1 request:(id)arg2 progress:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
- (id)init;

@end
