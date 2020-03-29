//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NBOptions.h"

@class NSArray, NSDictionary, NSNumber, NSString;

@interface H5Options : NBOptions
{
    _Bool hasBgColor;
    NSString *originDefaultTitle;
    _Bool originReadTitle;
    _Bool _ssoLoginEnabled;
    _Bool _offlineH5SsoLoginFirst;
    _Bool _closeAfterPayFinish;
    _Bool _proxy;
    _Bool _prefetchLocation;
    _Bool _smartToolBar;
    _Bool _isSsoLoginProMode;
    _Bool _showFavorites;
    _Bool _showReportBtn;
    _Bool _interceptJump;
    _Bool _transAnimate;
    _Bool _networkIndicator;
    _Bool _preSSOLogin;
    _Bool _preSSOLoginBindingPage;
    _Bool _navSearchBar_searchPlaceholder;
    _Bool _transparentTitleTextAuto;
    _Bool _canPullUp;
    _Bool _isAutoSetNavBarStyle;
    _Bool _hideCloseButton;
    _Bool _showThirdDisclaimer;
    _Bool _titlePenetrate;
    _Bool _fromRotationTrans;
    _Bool _hideScrollIndicator;
    int _titleBarColor;
    int _bounceTopColor;
    int _bounceBottomColor;
    int _backBtnTextColor;
    int _titleColor;
    int _segSelectedIndex;
    NSString *_safePayContext;
    NSString *_webAppId;
    NSString *_appId;
    NSString *_publicId;
    double _paddingBottom;
    double _waitRender;
    NSString *_shareChannels;
    NSString *_transparentTitle;
    double _scrollDistance;
    NSString *_preSSOLoginUrl;
    NSString *_navSearchBar_type;
    NSString *_navSearchBar_placeholder;
    NSString *_navSearchBar_value;
    NSNumber *_navSearchBar_maxLength;
    NSString *_backBtnImage;
    NSString *_audioCategory;
    NSDictionary *_shareTokenParams;
    NSString *_reportUrl;
    NSString *_landscapeOrientation;
    NSString *_pullRefreshStyle;
    NSString *_feedBackExtParams;
    double _pullInterceptDistance;
    NSString *_backgroundImageUrl;
    long long _backgroundImageColor;
    NSString *_barButtonTheme;
    NSArray *_segWidths;
    NSArray *_segTitles;
    long long _segColorNormal;
    long long _segColorActive;
    NSString *_hiddenMenuItems;
}

@property(nonatomic) _Bool hideScrollIndicator; // @synthesize hideScrollIndicator=_hideScrollIndicator;
@property(nonatomic) _Bool fromRotationTrans; // @synthesize fromRotationTrans=_fromRotationTrans;
@property(copy, nonatomic) NSString *hiddenMenuItems; // @synthesize hiddenMenuItems=_hiddenMenuItems;
@property(nonatomic) long long segColorActive; // @synthesize segColorActive=_segColorActive;
@property(nonatomic) long long segColorNormal; // @synthesize segColorNormal=_segColorNormal;
@property(nonatomic) int segSelectedIndex; // @synthesize segSelectedIndex=_segSelectedIndex;
@property(retain, nonatomic) NSArray *segTitles; // @synthesize segTitles=_segTitles;
@property(retain, nonatomic) NSArray *segWidths; // @synthesize segWidths=_segWidths;
@property(copy, nonatomic) NSString *barButtonTheme; // @synthesize barButtonTheme=_barButtonTheme;
@property(nonatomic) _Bool titlePenetrate; // @synthesize titlePenetrate=_titlePenetrate;
@property(nonatomic) long long backgroundImageColor; // @synthesize backgroundImageColor=_backgroundImageColor;
@property(copy, nonatomic) NSString *backgroundImageUrl; // @synthesize backgroundImageUrl=_backgroundImageUrl;
@property(nonatomic) double pullInterceptDistance; // @synthesize pullInterceptDistance=_pullInterceptDistance;
@property(copy, nonatomic) NSString *feedBackExtParams; // @synthesize feedBackExtParams=_feedBackExtParams;
@property(nonatomic) _Bool showThirdDisclaimer; // @synthesize showThirdDisclaimer=_showThirdDisclaimer;
@property(copy, nonatomic) NSString *pullRefreshStyle; // @synthesize pullRefreshStyle=_pullRefreshStyle;
@property(copy, nonatomic) NSString *landscapeOrientation; // @synthesize landscapeOrientation=_landscapeOrientation;
@property(copy, nonatomic) NSString *reportUrl; // @synthesize reportUrl=_reportUrl;
@property(retain, nonatomic) NSDictionary *shareTokenParams; // @synthesize shareTokenParams=_shareTokenParams;
@property(nonatomic) _Bool hideCloseButton; // @synthesize hideCloseButton=_hideCloseButton;
@property(copy, nonatomic) NSString *audioCategory; // @synthesize audioCategory=_audioCategory;
@property(nonatomic) _Bool isAutoSetNavBarStyle; // @synthesize isAutoSetNavBarStyle=_isAutoSetNavBarStyle;
@property(nonatomic) _Bool canPullUp; // @synthesize canPullUp=_canPullUp;
@property(nonatomic) _Bool transparentTitleTextAuto; // @synthesize transparentTitleTextAuto=_transparentTitleTextAuto;
@property(nonatomic) int titleColor; // @synthesize titleColor=_titleColor;
@property(nonatomic) int backBtnTextColor; // @synthesize backBtnTextColor=_backBtnTextColor;
@property(copy, nonatomic) NSString *backBtnImage; // @synthesize backBtnImage=_backBtnImage;
@property(nonatomic) _Bool navSearchBar_searchPlaceholder; // @synthesize navSearchBar_searchPlaceholder=_navSearchBar_searchPlaceholder;
@property(retain, nonatomic) NSNumber *navSearchBar_maxLength; // @synthesize navSearchBar_maxLength=_navSearchBar_maxLength;
@property(retain, nonatomic) NSString *navSearchBar_value; // @synthesize navSearchBar_value=_navSearchBar_value;
@property(retain, nonatomic) NSString *navSearchBar_placeholder; // @synthesize navSearchBar_placeholder=_navSearchBar_placeholder;
@property(retain, nonatomic) NSString *navSearchBar_type; // @synthesize navSearchBar_type=_navSearchBar_type;
@property(copy, nonatomic) NSString *preSSOLoginUrl; // @synthesize preSSOLoginUrl=_preSSOLoginUrl;
@property(nonatomic) _Bool preSSOLoginBindingPage; // @synthesize preSSOLoginBindingPage=_preSSOLoginBindingPage;
@property(nonatomic) _Bool preSSOLogin; // @synthesize preSSOLogin=_preSSOLogin;
@property(nonatomic) int bounceBottomColor; // @synthesize bounceBottomColor=_bounceBottomColor;
@property(nonatomic) int bounceTopColor; // @synthesize bounceTopColor=_bounceTopColor;
@property(nonatomic) double scrollDistance; // @synthesize scrollDistance=_scrollDistance;
@property(nonatomic) int titleBarColor; // @synthesize titleBarColor=_titleBarColor;
@property(copy, nonatomic) NSString *transparentTitle; // @synthesize transparentTitle=_transparentTitle;
@property(nonatomic) _Bool networkIndicator; // @synthesize networkIndicator=_networkIndicator;
@property(nonatomic) _Bool transAnimate; // @synthesize transAnimate=_transAnimate;
@property(nonatomic) _Bool interceptJump; // @synthesize interceptJump=_interceptJump;
@property(nonatomic) _Bool showReportBtn; // @synthesize showReportBtn=_showReportBtn;
@property(nonatomic) _Bool showFavorites; // @synthesize showFavorites=_showFavorites;
@property(nonatomic) _Bool isSsoLoginProMode; // @synthesize isSsoLoginProMode=_isSsoLoginProMode;
@property(copy, nonatomic) NSString *shareChannels; // @synthesize shareChannels=_shareChannels;
@property(nonatomic) double waitRender; // @synthesize waitRender=_waitRender;
@property(nonatomic) double paddingBottom; // @synthesize paddingBottom=_paddingBottom;
@property(nonatomic) _Bool smartToolBar; // @synthesize smartToolBar=_smartToolBar;
@property(nonatomic) _Bool prefetchLocation; // @synthesize prefetchLocation=_prefetchLocation;
@property(nonatomic) _Bool proxy; // @synthesize proxy=_proxy;
@property(copy, nonatomic) NSString *publicId; // @synthesize publicId=_publicId;
@property(copy, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(nonatomic) _Bool closeAfterPayFinish; // @synthesize closeAfterPayFinish=_closeAfterPayFinish;
@property(copy, nonatomic) NSString *webAppId; // @synthesize webAppId=_webAppId;
@property(copy, nonatomic) NSString *safePayContext; // @synthesize safePayContext=_safePayContext;
@property(nonatomic) _Bool offlineH5SsoLoginFirst; // @synthesize offlineH5SsoLoginFirst=_offlineH5SsoLoginFirst;
@property(nonatomic) _Bool ssoLoginEnabled; // @synthesize ssoLoginEnabled=_ssoLoginEnabled;
- (void).cxx_destruct;
- (id)diffWithOptions:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (void)setNilValueForKey:(id)arg1;
- (void)assignConfigItem:(id)arg1 dataSource:(id)arg2 defaultValue:(id)arg3;
- (void)assignConfigItem:(id)arg1 dataSource:(id)arg2;
- (id)normalize:(id)arg1;
- (void)changeTitleImage:(id)arg1 override:(_Bool)arg2;
- (void)resetPartialProperties4Transparent;
- (void)shareTokenParamsWithDic:(id)arg1 defaultParams:(id)arg2;
- (void)setShowThirdDisclaimerWithDic:(id)arg1 defaultVal:(_Bool)arg2;
- (void)dynamicMergeWithDictionary:(id)arg1;
- (_Bool)isTinyAppWithStartParams:(id)arg1;
- (void)mergeWithDictionary:(id)arg1;
- (id)initWithOptions:(id)arg1 overrides:(id)arg2;
- (id)initWithDictionary:(id)arg1;

// Remaining properties
@property(nonatomic) _Bool transparent;

@end

