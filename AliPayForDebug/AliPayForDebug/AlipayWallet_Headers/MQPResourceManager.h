//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DTZipArchive, NSDictionary, NSString;
@protocol MQPResourceLoggerProtocol;

@interface MQPResourceManager : NSObject
{
    _Bool _isEnable;
    id <MQPResourceLoggerProtocol> _logDelegate;
    DTZipArchive *_zipArchive;
    NSDictionary *_resConfig;
}

+ (id)resourceFilePath;
+ (id)tmpResourceFilePath;
+ (id)downloadFilePath;
+ (_Bool)preparePath;
+ (id)opQueue;
+ (id)defaultManager;
@property(retain, nonatomic) NSDictionary *resConfig; // @synthesize resConfig=_resConfig;
@property(retain, nonatomic) DTZipArchive *zipArchive; // @synthesize zipArchive=_zipArchive;
@property(nonatomic) _Bool isEnable; // @synthesize isEnable=_isEnable;
@property(nonatomic) __weak id <MQPResourceLoggerProtocol> logDelegate; // @synthesize logDelegate=_logDelegate;
- (void).cxx_destruct;
- (void)clearAllResource;
- (_Bool)isResFileAvailable:(id)arg1;
- (_Bool)unzipResDataToTmpFile:(id)arg1;
- (_Bool)isBroken:(id)arg1 resInfo:(id)arg2;
- (id)decryptData:(id)arg1 withHash:(id)arg2;
- (_Bool)refreshResource;
- (void)requestResourceByResInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) NSString *localResHash;
- (void)initCheck;
- (void)fetchDrmConfig;
- (id)init;

@end

