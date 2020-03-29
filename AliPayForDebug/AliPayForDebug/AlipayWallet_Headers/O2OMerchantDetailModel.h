//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "O2OMistModel.h"

@class MOBILECSAMerchantDynamicMainResponse, NSArray, NSDictionary, NSString, O2OMerchantDataArray;

@interface O2OMerchantDetailModel : O2OMistModel
{
    _Bool _collected;
    _Bool _asyncDisplay;
    _Bool _isCacheData;
    _Bool _redirectStat;
    _Bool _isNewRetail;
    NSString *_shopId;
    double _longitude;
    double _latitude;
    NSDictionary *_schemeParameterDic;
    NSDictionary *_monitorDic;
    NSString *_navigationBackText;
    MOBILECSAMerchantDynamicMainResponse *_res;
    O2OMerchantDataArray *_blockData;
    NSArray *_secondRequestBlockList;
    NSArray *_fastBlockIds;
    NSString *_alertH5Url;
    NSString *_toastTitle;
    NSString *_helpLinkUrl;
    NSString *_feedbackLink;
    NSString *_navigationCdpIcon;
    NSString *_navigationCdpUrl;
    long long _systemTime;
    NSString *_j;
    NSString *_tabIndex;
    NSString *_pageName;
    NSDictionary *_extInfo;
}

@property(retain, nonatomic) NSDictionary *extInfo; // @synthesize extInfo=_extInfo;
@property(nonatomic) _Bool isNewRetail; // @synthesize isNewRetail=_isNewRetail;
@property(copy, nonatomic) NSString *pageName; // @synthesize pageName=_pageName;
@property(copy, nonatomic) NSString *tabIndex; // @synthesize tabIndex=_tabIndex;
@property(copy, nonatomic) NSString *j; // @synthesize j=_j;
@property(nonatomic) long long systemTime; // @synthesize systemTime=_systemTime;
@property(retain, nonatomic) NSString *navigationCdpUrl; // @synthesize navigationCdpUrl=_navigationCdpUrl;
@property(retain, nonatomic) NSString *navigationCdpIcon; // @synthesize navigationCdpIcon=_navigationCdpIcon;
@property(nonatomic) _Bool redirectStat; // @synthesize redirectStat=_redirectStat;
@property(retain, nonatomic) NSString *feedbackLink; // @synthesize feedbackLink=_feedbackLink;
@property(retain, nonatomic) NSString *helpLinkUrl; // @synthesize helpLinkUrl=_helpLinkUrl;
@property(retain, nonatomic) NSString *toastTitle; // @synthesize toastTitle=_toastTitle;
@property(retain, nonatomic) NSString *alertH5Url; // @synthesize alertH5Url=_alertH5Url;
@property(retain, nonatomic) NSArray *fastBlockIds; // @synthesize fastBlockIds=_fastBlockIds;
@property(retain, nonatomic) NSArray *secondRequestBlockList; // @synthesize secondRequestBlockList=_secondRequestBlockList;
@property(retain, nonatomic) O2OMerchantDataArray *blockData; // @synthesize blockData=_blockData;
@property(retain, nonatomic) MOBILECSAMerchantDynamicMainResponse *res; // @synthesize res=_res;
@property(nonatomic) _Bool isCacheData; // @synthesize isCacheData=_isCacheData;
@property(retain, nonatomic) NSString *navigationBackText; // @synthesize navigationBackText=_navigationBackText;
@property(retain, nonatomic) NSDictionary *monitorDic; // @synthesize monitorDic=_monitorDic;
@property(retain, nonatomic) NSDictionary *schemeParameterDic; // @synthesize schemeParameterDic=_schemeParameterDic;
@property(nonatomic) _Bool asyncDisplay; // @synthesize asyncDisplay=_asyncDisplay;
@property(nonatomic) _Bool collected; // @synthesize collected=_collected;
@property(nonatomic) double latitude; // @synthesize latitude=_latitude;
@property(nonatomic) double longitude; // @synthesize longitude=_longitude;
@property(retain, nonatomic) NSString *shopId; // @synthesize shopId=_shopId;
- (void).cxx_destruct;
- (id)getCommonDic:(id)arg1;
- (id)operationType;
- (id)getDestinationUrl:(id)arg1;
- (id)getImageUrl:(id)arg1;
- (id)getFeedbackLinkUrl:(id)arg1;
- (id)getHelpLinkUrl:(id)arg1;
- (id)getNavigationBackText:(id)arg1;
- (id)getAlertH5Url:(id)arg1;
- (id)getToast:(id)arg1;
- (void)processSystemProperty:(id)arg1 cache:(_Bool)arg2;
- (id)templatesFromResponse:(id)arg1;
- (id)templateConfig;
- (id)responseObjects:(id)arg1 withTemplates:(id)arg2;
- (_Bool)raise1002Exception;
- (SEL)selectorNameForRPCService;
- (Class)RPCServiceClass;
- (Class)RPCResponseClass;
- (Class)RPCRequestClass;
- (id)cacheKey;
- (struct requestConfig)requestConfig;
- (id)rpcRequest;
- (id)init;

@end

