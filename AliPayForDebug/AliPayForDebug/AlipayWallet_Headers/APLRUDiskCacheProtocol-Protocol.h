//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "APDAOProtocol-Protocol.h"

@class APDAOResult, NSData, NSDictionary, NSNumber, NSSet, NSString;

@protocol APLRUDiskCacheProtocol <APDAOProtocol>
- (APDAOResult *)removeObjectsWithKeys:(NSSet *)arg1;
- (APDAOResult *)removeAllObjects;
- (APDAOResult *)removeObjectsLike:(NSString *)arg1;
- (APDAOResult *)removeObject:(NSString *)arg1;
- (APDAOResult *)removeLastObjects:(NSNumber *)arg1;
- (APDAOResult *)touchObject:(NSString *)arg1;
- (APDAOResult *)setObject:(NSData *)arg1 name:(NSString *)arg2 expire:(NSNumber *)arg3;
- (NSDictionary *)getObject:(NSString *)arg1;
- (NSNumber *)getObjectCount;
@end
