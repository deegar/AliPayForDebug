//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSNumber, NSString;

@interface APDynamicDeploymentTaskModel : NSObject <NSCopying>
{
    _Bool _needUnZip;
    int _resType;
    int _downloadType;
    int _netType;
    NSString *_business;
    NSString *_name;
    NSString *_md5;
    NSString *_downloadUrl;
    NSString *_storeType;
    NSString *_extraData;
    NSNumber *_expireTime;
    NSNumber *_updateTime;
}

+ (_Bool)validNetType:(int)arg1;
@property(retain, nonatomic) NSNumber *updateTime; // @synthesize updateTime=_updateTime;
@property(retain, nonatomic) NSNumber *expireTime; // @synthesize expireTime=_expireTime;
@property(nonatomic) _Bool needUnZip; // @synthesize needUnZip=_needUnZip;
@property(retain, nonatomic) NSString *extraData; // @synthesize extraData=_extraData;
@property(retain, nonatomic) NSString *storeType; // @synthesize storeType=_storeType;
@property(nonatomic) int netType; // @synthesize netType=_netType;
@property(retain, nonatomic) NSString *downloadUrl; // @synthesize downloadUrl=_downloadUrl;
@property(nonatomic) int downloadType; // @synthesize downloadType=_downloadType;
@property(retain, nonatomic) NSString *md5; // @synthesize md5=_md5;
@property(nonatomic) int resType; // @synthesize resType=_resType;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSString *business; // @synthesize business=_business;
- (void).cxx_destruct;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isValid;

@end

