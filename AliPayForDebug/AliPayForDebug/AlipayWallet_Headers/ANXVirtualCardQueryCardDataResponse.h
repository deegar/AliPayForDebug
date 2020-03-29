//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ANXBaseRPCResponseInfo, ANXOfflineDataInfo, NSDictionary, NSString;

@interface ANXVirtualCardQueryCardDataResponse : NSObject
{
    _Bool _firstUseTime;
    _Bool _showNewUserGuideDialog;
    _Bool _enableOnsitePay;
    ANXBaseRPCResponseInfo *_baseRPCResponseInfo;
    ANXOfflineDataInfo *_offlineDataInfo;
    NSString *_cardNo;
    NSString *_cardType;
    long long _timestamp;
    NSString *_cardTitle;
    NSDictionary *_styleConfig;
}

+ (Class)styleConfigElementClass;
@property(retain, nonatomic) NSDictionary *styleConfig; // @synthesize styleConfig=_styleConfig;
@property(retain, nonatomic) NSString *cardTitle; // @synthesize cardTitle=_cardTitle;
@property(nonatomic) _Bool enableOnsitePay; // @synthesize enableOnsitePay=_enableOnsitePay;
@property(nonatomic) _Bool showNewUserGuideDialog; // @synthesize showNewUserGuideDialog=_showNewUserGuideDialog;
@property(nonatomic) _Bool firstUseTime; // @synthesize firstUseTime=_firstUseTime;
@property(nonatomic) long long timestamp; // @synthesize timestamp=_timestamp;
@property(retain, nonatomic) NSString *cardType; // @synthesize cardType=_cardType;
@property(retain, nonatomic) NSString *cardNo; // @synthesize cardNo=_cardNo;
@property(retain, nonatomic) ANXOfflineDataInfo *offlineDataInfo; // @synthesize offlineDataInfo=_offlineDataInfo;
@property(retain, nonatomic) ANXBaseRPCResponseInfo *baseRPCResponseInfo; // @synthesize baseRPCResponseInfo=_baseRPCResponseInfo;
- (void).cxx_destruct;

@end

