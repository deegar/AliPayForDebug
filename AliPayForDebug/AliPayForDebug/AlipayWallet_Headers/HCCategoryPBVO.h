//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface HCCategoryPBVO : NSObject
{
    NSString *_feedId;
    NSString *_clientId;
    long long _createTime;
    NSString *_sceneCode;
    NSString *_bizType;
    NSString *_bizNo;
    NSString *_categoryCode;
    NSString *_templatedId;
    NSString *_templateData;
    NSString *_ext;
    long long _expireTime;
    NSString *_backupData;
    NSString *_traceId;
    NSString *_version;
    NSString *_fileId;
}

@property(copy, nonatomic) NSString *fileId; // @synthesize fileId=_fileId;
@property(copy, nonatomic) NSString *version; // @synthesize version=_version;
@property(copy, nonatomic) NSString *traceId; // @synthesize traceId=_traceId;
@property(copy, nonatomic) NSString *backupData; // @synthesize backupData=_backupData;
@property(nonatomic) long long expireTime; // @synthesize expireTime=_expireTime;
@property(copy, nonatomic) NSString *ext; // @synthesize ext=_ext;
@property(copy, nonatomic) NSString *templateData; // @synthesize templateData=_templateData;
@property(copy, nonatomic) NSString *templatedId; // @synthesize templatedId=_templatedId;
@property(copy, nonatomic) NSString *categoryCode; // @synthesize categoryCode=_categoryCode;
@property(copy, nonatomic) NSString *bizNo; // @synthesize bizNo=_bizNo;
@property(copy, nonatomic) NSString *bizType; // @synthesize bizType=_bizType;
@property(copy, nonatomic) NSString *sceneCode; // @synthesize sceneCode=_sceneCode;
@property(nonatomic) long long createTime; // @synthesize createTime=_createTime;
@property(copy, nonatomic) NSString *clientId; // @synthesize clientId=_clientId;
@property(copy, nonatomic) NSString *feedId; // @synthesize feedId=_feedId;
- (void).cxx_destruct;
- (id)convertToCCard;

@end

