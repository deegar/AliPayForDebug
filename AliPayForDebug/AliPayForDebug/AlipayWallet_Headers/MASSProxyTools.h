//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface MASSProxyTools : NSObject
{
}

+ (unsigned int)computeCRC32Digest:(id)arg1;
+ (id)getQueryTokenWithFid:(id)arg1 biz:(id)arg2;
+ (id)getBase64UrlSafe:(id)arg1;
+ (id)getDownloadSignV1Fileid:(id)arg1 traceid:(id)arg2 timestamp:(id)arg3 authorID:(id)arg4 salt:(id)arg5;
+ (id)getDeviceID;
+ (id)getDownloadTraceid;
+ (id)getMd5OXCFromString:(id)arg1;
+ (id)getMd5OXC:(id)arg1;
+ (id)getUUID;

@end

