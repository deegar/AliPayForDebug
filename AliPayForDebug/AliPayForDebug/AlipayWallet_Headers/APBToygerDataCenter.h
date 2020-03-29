//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class APBToygerBehavlogManager, NSData, NSMutableArray, NSString, ToygerServiceInstance;
@protocol APBToygerDataCenterDelegate;

@interface APBToygerDataCenter : NSObject <NSCopying>
{
    _Bool _disableEncrypt;
    ToygerServiceInstance *_togyerInstance;
    NSString *_pubkey;
    id <APBToygerDataCenterDelegate> _delegate;
    NSMutableArray *_monitorImages;
    NSString *_monitorImageStr;
    APBToygerBehavlogManager *_behavlogManager;
    NSString *_bisToken;
    NSData *_panoImage;
    NSData *_cypherKey;
}

@property(copy, nonatomic) NSData *cypherKey; // @synthesize cypherKey=_cypherKey;
@property(copy, nonatomic) NSData *panoImage; // @synthesize panoImage=_panoImage;
@property(nonatomic) _Bool disableEncrypt; // @synthesize disableEncrypt=_disableEncrypt;
@property(copy, nonatomic) NSString *bisToken; // @synthesize bisToken=_bisToken;
@property(retain, nonatomic) APBToygerBehavlogManager *behavlogManager; // @synthesize behavlogManager=_behavlogManager;
@property(copy, nonatomic) NSString *monitorImageStr; // @synthesize monitorImageStr=_monitorImageStr;
@property(retain, nonatomic) NSMutableArray *monitorImages; // @synthesize monitorImages=_monitorImages;
@property(nonatomic) __weak id <APBToygerDataCenterDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSString *pubkey; // @synthesize pubkey=_pubkey;
@property(retain, nonatomic) ToygerServiceInstance *togyerInstance; // @synthesize togyerInstance=_togyerInstance;
- (void).cxx_destruct;
- (id)buildUploadRequestWithContent:(id)arg1 cypherKey:(id)arg2 invokeType:(id)arg3 retryCnt:(long long)arg4;
- (id)buildUploadRequestWithMonitorImage:(_Bool)arg1 behavLog:(_Bool)arg2 panoImage:(_Bool)arg3 invokeType:(id)arg4 retryCnt:(long long)arg5;
- (void)dealloc;
- (void)addBehavTask:(id)arg1;
- (void)clear;
- (void)clearTask;
- (void)clearMonitorImage:(_Bool)arg1 panoImage:(_Bool)arg2;
- (void)addMonitorImage:(id)arg1 replacePanoImage:(id)arg2 andCypherKeyData:(id)arg3;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithConfig:(id)arg1;

@end

