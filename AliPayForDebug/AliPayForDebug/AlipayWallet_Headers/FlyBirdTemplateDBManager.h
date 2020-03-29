//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WKTemplateStorageProtocol-Protocol.h"

@class NSCache, NSString;
@protocol OS_dispatch_queue, PPDynamicDAOProxy;

@interface FlyBirdTemplateDBManager : NSObject <WKTemplateStorageProtocol>
{
    NSObject<OS_dispatch_queue> *_templateSaveQueue;
    id <PPDynamicDAOProxy> _daoProxy;
    NSCache *_cacheTemplate;
}

@property(retain, nonatomic) NSCache *cacheTemplate; // @synthesize cacheTemplate=_cacheTemplate;
@property(retain, nonatomic) id <PPDynamicDAOProxy> daoProxy; // @synthesize daoProxy=_daoProxy;
- (void).cxx_destruct;
- (id)selectLatestTemplatesByTag:(id)arg1;
- (id)getAllTags;
- (id)selectLatestTemplatesByIds:(id)arg1;
- (_Bool)deleteTemplatesByTag:(id)arg1;
- (_Bool)deleteTemplatesByIds:(id)arg1;
- (_Bool)saveTemplates:(id)arg1;
- (_Bool)insertTemplates:(id)arg1;
- (void)closeDB;
- (void)openDB;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

