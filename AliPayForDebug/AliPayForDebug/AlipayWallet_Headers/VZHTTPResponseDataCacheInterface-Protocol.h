//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;
@protocol VZHTTPRequestInterface;

@protocol VZHTTPResponseDataCacheInterface <NSObject>
- (void)removeCachedResponseForKey:(NSString *)arg1 completion:(void (^)(_Bool))arg2;
- (void)saveResponse:(id)arg1 WithKey:(NSString *)arg2 ExpireTime:(double)arg3;
- (void)cachedResponseForKey:(NSString *)arg1 completion:(void (^)(id))arg2;
- (NSString *)cachedKeyForVZHTTPRequest:(id <VZHTTPRequestInterface>)arg1;
- (_Bool)hasCache:(NSString *)arg1;
@end

