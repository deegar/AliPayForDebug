//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, Protocol;

@interface SocialDBConfigItem : NSObject
{
    _Bool _needQueue;
    _Bool _userDependent;
    _Bool _needMemoryCache;
    _Bool _isBackUpWhenError;
    NSString *_storageName;
    NSString *_proxyName;
    NSString *_proxyPath;
    Protocol *_protocol;
    NSString *_tableName;
}

@property(nonatomic) _Bool isBackUpWhenError; // @synthesize isBackUpWhenError=_isBackUpWhenError;
@property(retain, nonatomic) NSString *tableName; // @synthesize tableName=_tableName;
@property(nonatomic) _Bool needMemoryCache; // @synthesize needMemoryCache=_needMemoryCache;
@property(nonatomic) _Bool userDependent; // @synthesize userDependent=_userDependent;
@property(nonatomic) _Bool needQueue; // @synthesize needQueue=_needQueue;
@property(retain, nonatomic) Protocol *protocol; // @synthesize protocol=_protocol;
@property(retain, nonatomic) NSString *proxyPath; // @synthesize proxyPath=_proxyPath;
@property(retain, nonatomic) NSString *proxyName; // @synthesize proxyName=_proxyName;
@property(retain, nonatomic) NSString *storageName; // @synthesize storageName=_storageName;
- (void).cxx_destruct;
- (id)description;

@end

