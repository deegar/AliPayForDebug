//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableArray, NSString;
@protocol NXRAppInterface, NXRCreditProtocol, NXRDataStorageProtocol, NXRDownloadProtocol, NXRDynamicConfigProtocol, NXRLogProtocol, NXRRequestProtocol, NXRTinyAppConfigProtocol, NXRZipArchiveProtocol;

@interface NXRConfiguration : NSObject
{
    _Bool _cacheReqTime;
    _Bool _userMode;
    _Bool _enableSceneCheck;
    _Bool _enableUseAppxHtml;
    _Bool _enableUseAppxNG;
    NSMutableArray *_commonAppList;
    NSString *_sdkVersion;
    NSString *_systemVersion;
    NSString *_platform;
    double _updateReqRate;
    double _preReqRate;
    double _forcePreReqRate;
    double _limitReqRate;
    double _resMainDocInvalidTime;
    long long _appPoolCapacity;
    unsigned long long _environment;
    unsigned long long _channel;
    double _prepareTimeLimit;
    NSString *_internalConfigPath;
    NSString *_documentDirectoryPath;
    NSString *_dataRootPath;
    NSString *_unzipRootPath;
    NSString *_downloadRootPath;
    NSString *_templateConfigRootPath;
    NSString *_presetApplistPath;
    NSString *_presetAppPackagePath;
    NSString *_clientBundleId;
    NSString *_clientVersion;
    NSString *_serverURLString4UpdateApps;
    NSDictionary *_grayRules;
    NSString *_signPublicKey;
    NSDictionary *_performanceOpt;
    NSString *_currentRegion;
    id <NXRDynamicConfigProtocol> _dynamicConfigManager;
    id <NXRDownloadProtocol> _downloadManager;
    id <NXRZipArchiveProtocol> _zipArchiveManager;
    id <NXRDataStorageProtocol> _dataStorage;
    id <NXRRequestProtocol> _requestManager;
    id <NXRLogProtocol> _logManager;
    id <NXRAppInterface> _appInterface;
    id <NXRCreditProtocol> _creditManager;
    id <NXRTinyAppConfigProtocol> _tinyappConfigManager;
}

+ (id)allocPrivate;
+ (id)defaultConfiguration;
+ (id)defaultConfiguration;
@property(retain, nonatomic) id <NXRTinyAppConfigProtocol> tinyappConfigManager; // @synthesize tinyappConfigManager=_tinyappConfigManager;
@property(retain, nonatomic) id <NXRCreditProtocol> creditManager; // @synthesize creditManager=_creditManager;
@property(retain, nonatomic) id <NXRAppInterface> appInterface; // @synthesize appInterface=_appInterface;
@property(retain, nonatomic) id <NXRLogProtocol> logManager; // @synthesize logManager=_logManager;
@property(retain, nonatomic) id <NXRRequestProtocol> requestManager; // @synthesize requestManager=_requestManager;
@property(retain, nonatomic) id <NXRDataStorageProtocol> dataStorage; // @synthesize dataStorage=_dataStorage;
@property(retain, nonatomic) id <NXRZipArchiveProtocol> zipArchiveManager; // @synthesize zipArchiveManager=_zipArchiveManager;
@property(retain, nonatomic) id <NXRDownloadProtocol> downloadManager; // @synthesize downloadManager=_downloadManager;
@property(retain, nonatomic) id <NXRDynamicConfigProtocol> dynamicConfigManager; // @synthesize dynamicConfigManager=_dynamicConfigManager;
@property(nonatomic) _Bool enableUseAppxNG; // @synthesize enableUseAppxNG=_enableUseAppxNG;
@property(nonatomic) _Bool enableUseAppxHtml; // @synthesize enableUseAppxHtml=_enableUseAppxHtml;
@property(copy, nonatomic) NSString *currentRegion; // @synthesize currentRegion=_currentRegion;
@property(retain, nonatomic) NSDictionary *performanceOpt; // @synthesize performanceOpt=_performanceOpt;
@property(retain, nonatomic) NSString *signPublicKey; // @synthesize signPublicKey=_signPublicKey;
@property(retain, nonatomic) NSDictionary *grayRules; // @synthesize grayRules=_grayRules;
@property(copy, nonatomic) NSString *serverURLString4UpdateApps; // @synthesize serverURLString4UpdateApps=_serverURLString4UpdateApps;
@property(copy, nonatomic) NSString *clientVersion; // @synthesize clientVersion=_clientVersion;
@property(copy, nonatomic) NSString *clientBundleId; // @synthesize clientBundleId=_clientBundleId;
@property(copy, nonatomic) NSString *presetAppPackagePath; // @synthesize presetAppPackagePath=_presetAppPackagePath;
@property(copy, nonatomic) NSString *presetApplistPath; // @synthesize presetApplistPath=_presetApplistPath;
@property(copy, nonatomic) NSString *templateConfigRootPath; // @synthesize templateConfigRootPath=_templateConfigRootPath;
@property(copy, nonatomic) NSString *downloadRootPath; // @synthesize downloadRootPath=_downloadRootPath;
@property(copy, nonatomic) NSString *unzipRootPath; // @synthesize unzipRootPath=_unzipRootPath;
@property(copy, nonatomic) NSString *dataRootPath; // @synthesize dataRootPath=_dataRootPath;
@property(copy, nonatomic) NSString *documentDirectoryPath; // @synthesize documentDirectoryPath=_documentDirectoryPath;
@property(copy, nonatomic) NSString *internalConfigPath; // @synthesize internalConfigPath=_internalConfigPath;
@property(nonatomic) _Bool enableSceneCheck; // @synthesize enableSceneCheck=_enableSceneCheck;
@property(nonatomic) double prepareTimeLimit; // @synthesize prepareTimeLimit=_prepareTimeLimit;
@property(nonatomic) _Bool userMode; // @synthesize userMode=_userMode;
@property(nonatomic) _Bool cacheReqTime; // @synthesize cacheReqTime=_cacheReqTime;
@property(nonatomic) unsigned long long channel; // @synthesize channel=_channel;
@property(nonatomic) unsigned long long environment; // @synthesize environment=_environment;
@property(nonatomic) long long appPoolCapacity; // @synthesize appPoolCapacity=_appPoolCapacity;
@property(readonly, nonatomic) double resMainDocInvalidTime; // @synthesize resMainDocInvalidTime=_resMainDocInvalidTime;
@property(readonly, nonatomic) double limitReqRate; // @synthesize limitReqRate=_limitReqRate;
@property(readonly, nonatomic) double forcePreReqRate; // @synthesize forcePreReqRate=_forcePreReqRate;
@property(readonly, nonatomic) double preReqRate; // @synthesize preReqRate=_preReqRate;
@property(readonly, nonatomic) double updateReqRate; // @synthesize updateReqRate=_updateReqRate;
@property(readonly, copy, nonatomic) NSString *platform; // @synthesize platform=_platform;
@property(readonly, copy, nonatomic) NSString *systemVersion; // @synthesize systemVersion=_systemVersion;
@property(readonly, copy, nonatomic) NSString *sdkVersion; // @synthesize sdkVersion=_sdkVersion;
@property(readonly, nonatomic) NSMutableArray *commonAppList; // @synthesize commonAppList=_commonAppList;
- (void).cxx_destruct;
- (void)addCommonApps:(id)arg1;
- (id)filteredCommonApplist;
- (id)environmentName;
- (id)channelName;
- (id)serverConfigValueForKey:(id)arg1 class:(Class)arg2;
- (void)presetMobileRuntime;
- (id)initInPrivate;
- (id)environmentName;

@end

