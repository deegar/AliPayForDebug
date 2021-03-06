//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DTRpcAsyncCaller, NSArray, NSMutableString, NSString;
@protocol CTTopBannerDataManagerDelegate;

@interface CTTopBannerDataManager : NSObject
{
    _Bool _isGroupMaster;
    id <CTTopBannerDataManagerDelegate> _sessionDelegate;
    NSArray *_dataList;
    NSMutableString *_exposureStr;
    NSString *_sessionId;
    NSString *_sessionType;
    NSString *_bizType;
    NSString *_configKey;
    DTRpcAsyncCaller *_topBannerMemuRpc;
}

@property(nonatomic) _Bool isGroupMaster; // @synthesize isGroupMaster=_isGroupMaster;
@property(retain, nonatomic) DTRpcAsyncCaller *topBannerMemuRpc; // @synthesize topBannerMemuRpc=_topBannerMemuRpc;
@property(retain, nonatomic) NSString *configKey; // @synthesize configKey=_configKey;
@property(retain, nonatomic) NSString *bizType; // @synthesize bizType=_bizType;
@property(retain, nonatomic) NSString *sessionType; // @synthesize sessionType=_sessionType;
@property(retain, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
@property(retain, nonatomic) NSMutableString *exposureStr; // @synthesize exposureStr=_exposureStr;
@property(retain, nonatomic) NSArray *dataList; // @synthesize dataList=_dataList;
@property(nonatomic) __weak id <CTTopBannerDataManagerDelegate> sessionDelegate; // @synthesize sessionDelegate=_sessionDelegate;
- (void).cxx_destruct;
- (_Bool)isConfigTopBanner;
- (id)formatCardListWithResponse:(id)arg1;
- (id)requestBCChatTopBannerSuccess:(CDUnknownBlockType)arg1 failure:(CDUnknownBlockType)arg2;
- (id)quickMenuTitleWithCloseState:(_Bool)arg1;
- (void)requestTopBannerData;
- (void)analysisParamsWithDict:(id)arg1;
- (id)initWithParams:(id)arg1;

@end

