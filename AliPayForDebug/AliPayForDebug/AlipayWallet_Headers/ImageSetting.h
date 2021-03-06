//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "APMConfigUpdateProtocol-Protocol.h"

@class NSArray, NSDictionary, NSString;

@interface ImageSetting : NSObject <APMConfigUpdateProtocol>
{
    _Bool _enableSuperLongImageCut;
    _Bool _enableFalconCompress;
    _Bool _enableSmartCut;
    _Bool _enableRegionCrop;
    _Bool _enableSaliencyCrop;
    _Bool _enableSecurityTag;
    _Bool _enablePJPEG;
    _Bool _enableHEVCDecoder;
    _Bool _enableAHP3Decoder;
    _Bool _enableWebP;
    _Bool _forceUsingDataInterface;
    _Bool _domainEnable;
    _Bool _urlToDjangoEnable;
    _Bool _aftsUrlToIDEnable;
    _Bool _queryCacheInTaskManager;
    _Bool _useWebpInAllNetwork;
    _Bool _saveMetaWhenStoreImageToPhotoLibrary;
    _Bool _enableGifCompression;
    _Bool _queryAliasCloudIdWhenUpload;
    _Bool _enableOptimizeNetworkTrafficWhenUpload;
    _Bool _enableLocalSmartCut;
    _Bool _supportContainerFilePath;
    _Bool _buildAFTSUrl;
    _Bool _useImageDownloader;
    _Bool _enableTimeoutWhenSynQueryCacheInMainthread;
    _Bool _enableH5Plugin;
    _Bool _enableDecompressImage;
    _Bool _enableHEVCOptimized;
    _Bool _usingHEVCDefaultColorSpace;
    _Bool _enableSandboxCheckWhenUpload;
    _Bool _enableRetryWhenFailed;
    _Bool _enablRetryURLOptimzed;
    _Bool _enableClientCDNAdaptorOptimized;
    _Bool _enableDecodeInfoReport;
    _Bool _needUpdated;
    _Bool _isARM64;
    _Bool _onlyARM64SupportHEVC;
    _Bool _enableHEVC;
    _Bool _enableHEIC;
    _Bool _enableEmptyZoom;
    int _maxDecodeTimes;
    int _targetWidthForiCloud;
    int _targetHeightForiCloud;
    int _maxGifCompressionSize;
    NSString *_deleteQ80GrayKeys;
    double _minPercent;
    double _secPercent;
    double _maxPercent;
    long long _minFileLen;
    long long _maxFileLen;
    NSDictionary *_regularExpDic;
    NSArray *_djiangoDomainArray;
    NSArray *_aftsDomainArray;
    NSString *_ahpVersion;
    NSString *_heicVersion;
    double _clientCDNScaleFactor;
    unsigned long long _decodeInfoReportFactor;
    NSArray *_blackUrlDomainArray;
    NSDictionary *_zoomVersionRegularExp;
    NSArray *_useHttpsDomain;
    NSArray *_retryErrorCodeArray;
    NSArray *_businessBlackListArray;
    NSArray *_enableHEVCBizTypes;
    NSArray *_enableHEVCBlackBizTypes;
    NSArray *_enabelAHP3DiskCacheWithBizTypes;
    NSArray *_enabelAHP3RequestWithBizTypes;
    NSArray *_enableHEICBizTypes;
    NSArray *_enableEmptyZoomDomains;
    NSArray *_enableEmptyZoomBizTypes;
    NSArray *_enableEmptyZoomBlackBizTypes;
    NSArray *_enableEmptyZoomZooms;
}

+ (id)sharedInstance;
@property(copy, nonatomic) NSArray *enableEmptyZoomZooms; // @synthesize enableEmptyZoomZooms=_enableEmptyZoomZooms;
@property(copy, nonatomic) NSArray *enableEmptyZoomBlackBizTypes; // @synthesize enableEmptyZoomBlackBizTypes=_enableEmptyZoomBlackBizTypes;
@property(copy, nonatomic) NSArray *enableEmptyZoomBizTypes; // @synthesize enableEmptyZoomBizTypes=_enableEmptyZoomBizTypes;
@property(copy, nonatomic) NSArray *enableEmptyZoomDomains; // @synthesize enableEmptyZoomDomains=_enableEmptyZoomDomains;
@property(nonatomic) _Bool enableEmptyZoom; // @synthesize enableEmptyZoom=_enableEmptyZoom;
@property(copy, nonatomic) NSArray *enableHEICBizTypes; // @synthesize enableHEICBizTypes=_enableHEICBizTypes;
@property(nonatomic) _Bool enableHEIC; // @synthesize enableHEIC=_enableHEIC;
@property(nonatomic) _Bool enableHEVC; // @synthesize enableHEVC=_enableHEVC;
@property(copy, nonatomic) NSArray *enabelAHP3RequestWithBizTypes; // @synthesize enabelAHP3RequestWithBizTypes=_enabelAHP3RequestWithBizTypes;
@property(copy, nonatomic) NSArray *enabelAHP3DiskCacheWithBizTypes; // @synthesize enabelAHP3DiskCacheWithBizTypes=_enabelAHP3DiskCacheWithBizTypes;
@property(copy, nonatomic) NSArray *enableHEVCBlackBizTypes; // @synthesize enableHEVCBlackBizTypes=_enableHEVCBlackBizTypes;
@property(copy, nonatomic) NSArray *enableHEVCBizTypes; // @synthesize enableHEVCBizTypes=_enableHEVCBizTypes;
@property(retain, nonatomic) NSArray *businessBlackListArray; // @synthesize businessBlackListArray=_businessBlackListArray;
@property(copy, nonatomic) NSArray *retryErrorCodeArray; // @synthesize retryErrorCodeArray=_retryErrorCodeArray;
@property(copy, nonatomic) NSArray *useHttpsDomain; // @synthesize useHttpsDomain=_useHttpsDomain;
@property(nonatomic) _Bool onlyARM64SupportHEVC; // @synthesize onlyARM64SupportHEVC=_onlyARM64SupportHEVC;
@property(nonatomic) _Bool isARM64; // @synthesize isARM64=_isARM64;
@property(copy, nonatomic) NSDictionary *zoomVersionRegularExp; // @synthesize zoomVersionRegularExp=_zoomVersionRegularExp;
@property(retain, nonatomic) NSArray *blackUrlDomainArray; // @synthesize blackUrlDomainArray=_blackUrlDomainArray;
@property _Bool needUpdated; // @synthesize needUpdated=_needUpdated;
@property(nonatomic) unsigned long long decodeInfoReportFactor; // @synthesize decodeInfoReportFactor=_decodeInfoReportFactor;
@property(nonatomic) _Bool enableDecodeInfoReport; // @synthesize enableDecodeInfoReport=_enableDecodeInfoReport;
@property(nonatomic) double clientCDNScaleFactor; // @synthesize clientCDNScaleFactor=_clientCDNScaleFactor;
@property(nonatomic) _Bool enableClientCDNAdaptorOptimized; // @synthesize enableClientCDNAdaptorOptimized=_enableClientCDNAdaptorOptimized;
@property(nonatomic) _Bool enablRetryURLOptimzed; // @synthesize enablRetryURLOptimzed=_enablRetryURLOptimzed;
@property(nonatomic) _Bool enableRetryWhenFailed; // @synthesize enableRetryWhenFailed=_enableRetryWhenFailed;
@property(nonatomic) _Bool enableSandboxCheckWhenUpload; // @synthesize enableSandboxCheckWhenUpload=_enableSandboxCheckWhenUpload;
@property(nonatomic) _Bool usingHEVCDefaultColorSpace; // @synthesize usingHEVCDefaultColorSpace=_usingHEVCDefaultColorSpace;
@property(nonatomic) _Bool enableHEVCOptimized; // @synthesize enableHEVCOptimized=_enableHEVCOptimized;
@property(nonatomic) _Bool enableDecompressImage; // @synthesize enableDecompressImage=_enableDecompressImage;
@property(nonatomic) _Bool enableH5Plugin; // @synthesize enableH5Plugin=_enableH5Plugin;
@property(copy, nonatomic) NSString *heicVersion; // @synthesize heicVersion=_heicVersion;
@property(copy, nonatomic) NSString *ahpVersion; // @synthesize ahpVersion=_ahpVersion;
@property(nonatomic) _Bool enableTimeoutWhenSynQueryCacheInMainthread; // @synthesize enableTimeoutWhenSynQueryCacheInMainthread=_enableTimeoutWhenSynQueryCacheInMainthread;
@property(nonatomic) _Bool useImageDownloader; // @synthesize useImageDownloader=_useImageDownloader;
@property(nonatomic) _Bool buildAFTSUrl; // @synthesize buildAFTSUrl=_buildAFTSUrl;
@property(nonatomic) _Bool supportContainerFilePath; // @synthesize supportContainerFilePath=_supportContainerFilePath;
@property(nonatomic) _Bool enableLocalSmartCut; // @synthesize enableLocalSmartCut=_enableLocalSmartCut;
@property(nonatomic) _Bool enableOptimizeNetworkTrafficWhenUpload; // @synthesize enableOptimizeNetworkTrafficWhenUpload=_enableOptimizeNetworkTrafficWhenUpload;
@property(nonatomic) _Bool queryAliasCloudIdWhenUpload; // @synthesize queryAliasCloudIdWhenUpload=_queryAliasCloudIdWhenUpload;
@property(nonatomic) int maxGifCompressionSize; // @synthesize maxGifCompressionSize=_maxGifCompressionSize;
@property(nonatomic) _Bool enableGifCompression; // @synthesize enableGifCompression=_enableGifCompression;
@property(nonatomic) _Bool saveMetaWhenStoreImageToPhotoLibrary; // @synthesize saveMetaWhenStoreImageToPhotoLibrary=_saveMetaWhenStoreImageToPhotoLibrary;
@property(nonatomic) _Bool useWebpInAllNetwork; // @synthesize useWebpInAllNetwork=_useWebpInAllNetwork;
@property(nonatomic) _Bool queryCacheInTaskManager; // @synthesize queryCacheInTaskManager=_queryCacheInTaskManager;
@property(retain, nonatomic) NSArray *aftsDomainArray; // @synthesize aftsDomainArray=_aftsDomainArray;
@property(nonatomic) _Bool aftsUrlToIDEnable; // @synthesize aftsUrlToIDEnable=_aftsUrlToIDEnable;
@property(retain, nonatomic) NSArray *djiangoDomainArray; // @synthesize djiangoDomainArray=_djiangoDomainArray;
@property(nonatomic) _Bool urlToDjangoEnable; // @synthesize urlToDjangoEnable=_urlToDjangoEnable;
@property(retain, nonatomic) NSDictionary *regularExpDic; // @synthesize regularExpDic=_regularExpDic;
@property(nonatomic) _Bool domainEnable; // @synthesize domainEnable=_domainEnable;
@property(nonatomic) int targetHeightForiCloud; // @synthesize targetHeightForiCloud=_targetHeightForiCloud;
@property(nonatomic) int targetWidthForiCloud; // @synthesize targetWidthForiCloud=_targetWidthForiCloud;
@property(nonatomic) _Bool forceUsingDataInterface; // @synthesize forceUsingDataInterface=_forceUsingDataInterface;
@property(nonatomic) long long maxFileLen; // @synthesize maxFileLen=_maxFileLen;
@property(nonatomic) long long minFileLen; // @synthesize minFileLen=_minFileLen;
@property(nonatomic) double maxPercent; // @synthesize maxPercent=_maxPercent;
@property(nonatomic) double secPercent; // @synthesize secPercent=_secPercent;
@property(nonatomic) double minPercent; // @synthesize minPercent=_minPercent;
@property(nonatomic) int maxDecodeTimes; // @synthesize maxDecodeTimes=_maxDecodeTimes;
@property(nonatomic) _Bool enableWebP; // @synthesize enableWebP=_enableWebP;
@property(nonatomic) _Bool enableAHP3Decoder; // @synthesize enableAHP3Decoder=_enableAHP3Decoder;
@property(nonatomic) _Bool enableHEVCDecoder; // @synthesize enableHEVCDecoder=_enableHEVCDecoder;
@property(nonatomic) _Bool enablePJPEG; // @synthesize enablePJPEG=_enablePJPEG;
@property(nonatomic) _Bool enableSecurityTag; // @synthesize enableSecurityTag=_enableSecurityTag;
@property(nonatomic) _Bool enableSaliencyCrop; // @synthesize enableSaliencyCrop=_enableSaliencyCrop;
@property(nonatomic) _Bool enableRegionCrop; // @synthesize enableRegionCrop=_enableRegionCrop;
@property(nonatomic) _Bool enableSmartCut; // @synthesize enableSmartCut=_enableSmartCut;
@property(nonatomic) _Bool enableFalconCompress; // @synthesize enableFalconCompress=_enableFalconCompress;
@property(retain, nonatomic) NSString *deleteQ80GrayKeys; // @synthesize deleteQ80GrayKeys=_deleteQ80GrayKeys;
@property(nonatomic) _Bool enableSuperLongImageCut; // @synthesize enableSuperLongImageCut=_enableSuperLongImageCut;
- (void).cxx_destruct;
- (_Bool)item:(id)arg1 inList:(id)arg2 allFlg:(id)arg3;
- (_Bool)enableEmptyZoomWithUrl:(id)arg1 bizType:(id)arg2 zoom:(id)arg3;
- (_Bool)businessBlackList:(id)arg1;
- (_Bool)enabelAHP3RequestWithBizType:(id)arg1;
- (_Bool)enabelAHP3DiskCacheWithBizType:(id)arg1;
- (_Bool)canSupportHEIC;
- (_Bool)enabelHEICWithBizType:(id)arg1;
- (_Bool)enabelHEVCWithBizType:(id)arg1;
- (_Bool)shouldRetryWithError:(id)arg1 bizType:(id)arg2;
- (_Bool)isARM64Device;
- (id)replacedZoomWithRegularExp:(id)arg1;
- (_Bool)shouldUseHttpsWithUrl:(id)arg1;
- (_Bool)isBlackDomainUrl:(id)arg1;
- (void)parseConfig:(id)arg1;
- (void)configDidUpdate:(id)arg1 key:(id)arg2;
- (void)dealloc;
- (id)initPrivate;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

