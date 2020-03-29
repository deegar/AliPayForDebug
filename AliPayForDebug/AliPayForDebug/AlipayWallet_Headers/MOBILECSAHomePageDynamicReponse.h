//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MOBILECSADynamicDetailReponse.h"

@class MOBILECSACityInfo, MOBILECSAPullRefreshInfo, NSArray, NSDictionary, NSString;

@interface MOBILECSAHomePageDynamicReponse : MOBILECSADynamicDetailReponse
{
    _Bool _cityOpen;
    _Bool _showSwitchButton;
    _Bool _needCard;
    _Bool _supportOrder;
    MOBILECSACityInfo *_cityInfo;
    MOBILECSACityInfo *_gpsCityInfo;
    NSString *_searchHint;
    NSString *_searchWord;
    NSString *_pageVersion;
    NSString *_dynamicPageName;
    NSString *_travelType;
    NSString *_backgroundColor;
    MOBILECSAPullRefreshInfo *_pullRefreshInfo;
    long long _activityStage;
    NSString *_superStatus;
    NSString *_superBackGround;
    NSString *_signInIcon;
    NSDictionary *_tools;
    NSString *_bucketCode;
    NSString *_bucketId;
    NSString *_clientRpcId;
}

+ (Class)toolsElementClass;
+ (Class)personalListElementClass;
@property(retain, nonatomic) NSString *clientRpcId; // @synthesize clientRpcId=_clientRpcId;
@property(retain, nonatomic) NSString *bucketId; // @synthesize bucketId=_bucketId;
@property(retain, nonatomic) NSString *bucketCode; // @synthesize bucketCode=_bucketCode;
@property(nonatomic) _Bool supportOrder; // @synthesize supportOrder=_supportOrder;
@property(retain, nonatomic) NSDictionary *tools; // @synthesize tools=_tools;
@property(retain, nonatomic) NSString *signInIcon; // @synthesize signInIcon=_signInIcon;
@property(retain, nonatomic) NSString *superBackGround; // @synthesize superBackGround=_superBackGround;
@property(retain, nonatomic) NSString *superStatus; // @synthesize superStatus=_superStatus;
@property(nonatomic) long long activityStage; // @synthesize activityStage=_activityStage;
@property(retain, nonatomic) MOBILECSAPullRefreshInfo *pullRefreshInfo; // @synthesize pullRefreshInfo=_pullRefreshInfo;
@property(nonatomic) _Bool needCard; // @synthesize needCard=_needCard;
@property(retain, nonatomic) NSString *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(nonatomic) _Bool showSwitchButton; // @synthesize showSwitchButton=_showSwitchButton;
@property(retain, nonatomic) NSString *travelType; // @synthesize travelType=_travelType;
@property(retain, nonatomic) NSString *dynamicPageName; // @synthesize dynamicPageName=_dynamicPageName;
@property(retain, nonatomic) NSString *pageVersion; // @synthesize pageVersion=_pageVersion;
@property(retain, nonatomic) NSString *searchWord; // @synthesize searchWord=_searchWord;
@property(retain, nonatomic) NSString *searchHint; // @synthesize searchHint=_searchHint;
@property(retain, nonatomic) MOBILECSACityInfo *gpsCityInfo; // @synthesize gpsCityInfo=_gpsCityInfo;
@property(retain, nonatomic) MOBILECSACityInfo *cityInfo; // @synthesize cityInfo=_cityInfo;
@property(nonatomic) _Bool cityOpen; // @synthesize cityOpen=_cityOpen;
- (void).cxx_destruct;

// Remaining properties
@property(retain, nonatomic) NSString *channelIds;
@property(retain, nonatomic) NSArray *personalList;
@property(retain, nonatomic) NSString *topParams;
@property(retain, nonatomic) NSString *venueJumpUrl;

@end

