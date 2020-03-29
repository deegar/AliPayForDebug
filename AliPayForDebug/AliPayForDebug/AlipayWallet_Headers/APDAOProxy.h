//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "APDAOProtocol-Protocol.h"

@class APDAOConfig, NSDictionary, NSMutableDictionary, NSRecursiveLock, NSString;
@protocol APDAOProxyDelegate;

@interface APDAOProxy : NSObject <APDAOProtocol>
{
    _Bool _iVarDirectAccess;
    _Bool _checkCreateIndexSQL;
    struct APDataCrypt *_encrypt;
    struct APDataCrypt *_decrypt;
    NSString *_tableName;
    Class _tableProxyClass;
    NSDictionary *_tableProxies;
    NSDictionary *_tableProxiesRetainer;
    NSRecursiveLock *_tableProxiesLock;
    CDUnknownBlockType _proxyEventHandler;
    NSMutableDictionary *_insertionCallbacks;
    _Bool _isVersionManager;
    _Bool _isHistoryManager;
    _Bool _isBackUpWhenError;
    APDAOConfig *_config;
    id <APDAOProxyDelegate> _delegate;
}

+ (id)proxyWithXMLContent:(id)arg1 protocol:(id)arg2;
+ (id)proxyWithConfig:(id)arg1 protocol:(id)arg2;
+ (Class)proxyClassForProtocol:(id)arg1;
+ (void)initialize;
+ (void)enumerateMethodsOfProtocol:(id)arg1 countBlock:(CDUnknownBlockType)arg2 itemBlock:(CDUnknownBlockType)arg3;
@property(nonatomic) _Bool isBackUpWhenError; // @synthesize isBackUpWhenError=_isBackUpWhenError;
@property(nonatomic) _Bool isHistoryManager; // @synthesize isHistoryManager=_isHistoryManager;
@property(nonatomic) _Bool isVersionManager; // @synthesize isVersionManager=_isVersionManager;
@property(nonatomic) __weak id <APDAOProxyDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) APDAOConfig *config; // @synthesize config=_config;
@property(copy) CDUnknownBlockType proxyEventHandler; // @synthesize proxyEventHandler=_proxyEventHandler;
@property _Bool iVarDirectAccess; // @synthesize iVarDirectAccess=_iVarDirectAccess;
- (void).cxx_destruct;
- (_Bool)restoreDataForTable:(id)arg1 columnNames:(id)arg2;
- (void)registerSearchFieldsForInsertMethod:(SEL)arg1 callback:(CDUnknownBlockType)arg2;
- (void)prepareParallelConnection:(double)arg1;
- (id)daoTransaction:(unsigned int)arg1;
- (void)_doSetDefaultDecrypt;
@property struct APDataCrypt *decryptMethod;
- (void)_doSetDefaultEncrypt;
@property struct APDataCrypt *encryptMethod;
- (_Bool)removeDatabaseFile;
- (void)vacuumDatabase;
- (id)deleteTablesWithPredicate:(id)arg1 autovacuum:(_Bool)arg2 progress:(CDUnknownBlockType)arg3 callback:(CDUnknownBlockType)arg4;
- (id)deleteTablesWithRegex:(id)arg1 autovacuum:(_Bool)arg2 progress:(CDUnknownBlockType)arg3 callback:(CDUnknownBlockType)arg4;
- (id)deleteTableWithName:(id)arg1;
- (id)deleteTable;
- (id)getSchemaOfTable:(id)arg1;
- (id)getSchema;
- (_Bool)tableExistsForName:(id)arg1;
- (id)allMethodsList;
- (int)lastChangedRowCount;
- (long long)lastInsertRowId;
- (id)executeQueryWithSQL:(id)arg1 arguments:(id)arg2;
- (id)executeUpdateWithSQL:(id)arg1 arguments:(id)arg2;
@property(readonly) struct sqlite3 *sqliteHandle;
@property(readonly) NSString *databasePath;
- (id)forTable:(id)arg1;
@property(retain) NSString *tableName;
- (id)__apxlite_buildQueryResultWith:(struct FMResultSet *)arg1 method:(id)arg2 status:(long long *)arg3;
- (id)__buildQueryResultWith:(struct FMResultSet *)arg1 method:(id)arg2 status:(long long *)arg3;
- (id)__executeUpdateMethod:(id)arg1 onTable:(id)arg2 withArguments:(id)arg3 andInsertionCallback:(CDUnknownBlockType)arg4 status:(long long *)arg5 profile:(CDStruct_06d3d77b *)arg6 proxy:(id)arg7;
- (id)__formatCreateIndexSQL:(id)arg1 tableName:(id)arg2;
- (id)__executeSelectMethod:(id)arg1 onTable:(id)arg2 withArguments:(id)arg3 status:(long long *)arg4 profile:(CDStruct_06d3d77b *)arg5 proxy:(id)arg6;
- (void)backUpDB:(id)arg1;
- (void)__handleSQLiteError:(id)arg1 sql:(id)arg2 tableName:(id)arg3;
- (_Bool)__initializeTableWithProxy:(id)arg1;
- (void)__freeDecrypt;
- (void)__freeEncrypt;
- (_Bool)__validate;
- (void)currentUserUpdated:(id)arg1;
- (void)dealloc;
- (id)initWithConfig:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

