//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "APMConfigUpdateProtocol-Protocol.h"

@class NSArray, NSDictionary, NSString;

@interface NetworkSetting : NSObject <APMConfigUpdateProtocol>
{
    _Bool _enablePing;
    _Bool _useNSBundle;
    _Bool _useWeakNetworkModel;
    _Bool _onlyUseDAsWeakNetwork;
    _Bool _uploadImageConcurrently;
    _Bool _useHttpsByDefault;
    _Bool _generateAftsFileUrlForAftsResource;
    int _timeout4iCloudSync;
    unsigned long long _timeout4Upload;
    unsigned long long _maxTimeout4Upload;
    unsigned long long _timeout4Download;
    NSString *_pingHost;
    unsigned long long _period4HandleLowBandwidth;
    unsigned long long _countOfPing;
    unsigned long long _maxSendBufferSize;
    unsigned long long _period4BandwidthSample;
    unsigned long long _maxCongestionResumeEventCount;
    NSString *_userAgent;
    NSString *_host4Reachability;
    unsigned long long _maxWidthForiCloudDownloading;
    NSArray *_uploadBusTypeArray;
    NSArray *_downloadBusTypeArray;
    NSArray *_aftsCDNDownloadBizTypeArray;
    unsigned long long _maxDjangoDlConcurrentCount;
    unsigned long long _maxUrlDlConcurrentCount;
    unsigned long long _maxBlackUrlDlConcurrentCount;
    NSArray *_urlDomainWhiteList;
    NSDictionary *_uploadBusTypeProbability;
    NSDictionary *_downloadBusTypeProbability;
    NSDictionary *_aftsCDNDownloadBizTypeProbability;
    NSArray *_mmtcChannelBlackBusPrefixArray;
    NSArray *_bizTypeArrayReturnErrorWhenNetworkUnreachable;
}

+ (id)sharedInstance;
@property(copy, nonatomic) NSArray *bizTypeArrayReturnErrorWhenNetworkUnreachable; // @synthesize bizTypeArrayReturnErrorWhenNetworkUnreachable=_bizTypeArrayReturnErrorWhenNetworkUnreachable;
@property(copy, nonatomic) NSArray *mmtcChannelBlackBusPrefixArray; // @synthesize mmtcChannelBlackBusPrefixArray=_mmtcChannelBlackBusPrefixArray;
@property(copy, nonatomic) NSDictionary *aftsCDNDownloadBizTypeProbability; // @synthesize aftsCDNDownloadBizTypeProbability=_aftsCDNDownloadBizTypeProbability;
@property(retain, nonatomic) NSDictionary *downloadBusTypeProbability; // @synthesize downloadBusTypeProbability=_downloadBusTypeProbability;
@property(retain, nonatomic) NSDictionary *uploadBusTypeProbability; // @synthesize uploadBusTypeProbability=_uploadBusTypeProbability;
@property(nonatomic) _Bool generateAftsFileUrlForAftsResource; // @synthesize generateAftsFileUrlForAftsResource=_generateAftsFileUrlForAftsResource;
@property(retain, nonatomic) NSArray *urlDomainWhiteList; // @synthesize urlDomainWhiteList=_urlDomainWhiteList;
@property(nonatomic) _Bool useHttpsByDefault; // @synthesize useHttpsByDefault=_useHttpsByDefault;
@property(nonatomic) unsigned long long maxBlackUrlDlConcurrentCount; // @synthesize maxBlackUrlDlConcurrentCount=_maxBlackUrlDlConcurrentCount;
@property(nonatomic) unsigned long long maxUrlDlConcurrentCount; // @synthesize maxUrlDlConcurrentCount=_maxUrlDlConcurrentCount;
@property(nonatomic) unsigned long long maxDjangoDlConcurrentCount; // @synthesize maxDjangoDlConcurrentCount=_maxDjangoDlConcurrentCount;
@property(copy, nonatomic) NSArray *aftsCDNDownloadBizTypeArray; // @synthesize aftsCDNDownloadBizTypeArray=_aftsCDNDownloadBizTypeArray;
@property(retain, nonatomic) NSArray *downloadBusTypeArray; // @synthesize downloadBusTypeArray=_downloadBusTypeArray;
@property(retain, nonatomic) NSArray *uploadBusTypeArray; // @synthesize uploadBusTypeArray=_uploadBusTypeArray;
@property(nonatomic) int timeout4iCloudSync; // @synthesize timeout4iCloudSync=_timeout4iCloudSync;
@property(nonatomic) _Bool uploadImageConcurrently; // @synthesize uploadImageConcurrently=_uploadImageConcurrently;
@property(nonatomic) _Bool onlyUseDAsWeakNetwork; // @synthesize onlyUseDAsWeakNetwork=_onlyUseDAsWeakNetwork;
@property(nonatomic) _Bool useWeakNetworkModel; // @synthesize useWeakNetworkModel=_useWeakNetworkModel;
@property(nonatomic) _Bool useNSBundle; // @synthesize useNSBundle=_useNSBundle;
@property(nonatomic) unsigned long long maxWidthForiCloudDownloading; // @synthesize maxWidthForiCloudDownloading=_maxWidthForiCloudDownloading;
@property(copy, nonatomic) NSString *host4Reachability; // @synthesize host4Reachability=_host4Reachability;
@property(copy, nonatomic) NSString *userAgent; // @synthesize userAgent=_userAgent;
@property(nonatomic) unsigned long long maxCongestionResumeEventCount; // @synthesize maxCongestionResumeEventCount=_maxCongestionResumeEventCount;
@property(nonatomic) unsigned long long period4BandwidthSample; // @synthesize period4BandwidthSample=_period4BandwidthSample;
@property(nonatomic) unsigned long long maxSendBufferSize; // @synthesize maxSendBufferSize=_maxSendBufferSize;
@property(nonatomic) unsigned long long countOfPing; // @synthesize countOfPing=_countOfPing;
@property(nonatomic) unsigned long long period4HandleLowBandwidth; // @synthesize period4HandleLowBandwidth=_period4HandleLowBandwidth;
@property(copy, nonatomic) NSString *pingHost; // @synthesize pingHost=_pingHost;
@property(nonatomic) _Bool enablePing; // @synthesize enablePing=_enablePing;
@property(nonatomic) unsigned long long timeout4Download; // @synthesize timeout4Download=_timeout4Download;
@property(nonatomic) unsigned long long maxTimeout4Upload; // @synthesize maxTimeout4Upload=_maxTimeout4Upload;
@property(nonatomic) unsigned long long timeout4Upload; // @synthesize timeout4Upload=_timeout4Upload;
- (void).cxx_destruct;
- (_Bool)isBusType:(id)arg1 inProbability:(id)arg2;
- (id)unreachableNetworkError;
- (_Bool)shouldReturnErrorImmediatelyWhenNetworkUnreachableWithBizType:(id)arg1;
- (_Bool)isAftsCDNChannelOpenWithBizType:(id)arg1;
- (_Bool)isMMTCChannelOpenWithBusiType:(id)arg1 Action:(unsigned long long)arg2;
- (void)pareseBusTypeConfig:(id)arg1 resultTypeInArray:(id)arg2 probabilityInDic:(id)arg3;
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

