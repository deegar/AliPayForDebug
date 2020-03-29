//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class APCustomStorage;
@protocol PPMessagePlugin_MessageDAOProxy;

@interface PPMessagePlugin_MessageDAO : NSObject
{
    APCustomStorage *_storage;
    id <PPMessagePlugin_MessageDAOProxy> _daoProxy;
}

@property(retain, nonatomic) id <PPMessagePlugin_MessageDAOProxy> daoProxy; // @synthesize daoProxy=_daoProxy;
@property(retain, nonatomic) APCustomStorage *storage; // @synthesize storage=_storage;
- (void).cxx_destruct;
- (void)showErrorLog:(id)arg1;
- (void)vacuumDatabase;
- (_Bool)deleteWithPluginType:(id)arg1 pluginId:(id)arg2;
- (id)queryWithMsgIds:(id)arg1;
- (_Bool)saveOrUpdate:(id)arg1;
- (void)initDataBase;
- (id)init;

@end

