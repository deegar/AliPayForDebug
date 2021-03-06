//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTViewController.h"

#import "AFWFinancePotCacheProtocol-Protocol.h"
#import "AFWFinancePotWebCoreDelegate-Protocol.h"
#import "DTCustomNavigationBarProtocol-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"

@class AFWFinancePotNaviTitleView, AFWFinancePotOptions, AFWFinancePotWebCore, AFWFinancePotWebNavigationItem, AFWFinancePotWebProgressView, NSDictionary, NSMutableDictionary, NSString;

@interface AFWFinancePotWebViewController : DTViewController <UIScrollViewDelegate, DTCustomNavigationBarProtocol, AFWFinancePotWebCoreDelegate, AFWFinancePotCacheProtocol>
{
    _Bool _isViewAppeared;
    _Bool _isViewAppearAgain;
    _Bool _isViewWillDisAppear;
    _Bool _isViewDidDisAppear;
    _Bool _isAphaOverLimit;
    _Bool _isFromStatusBarHidden;
    float _transparentTitleDis;
    int _uniqueId;
    AFWFinancePotOptions *_options;
    NSDictionary *_reportDataSpmDict;
    NSString *_url;
    AFWFinancePotNaviTitleView *_titleView;
    AFWFinancePotWebProgressView *_progressView;
    AFWFinancePotWebNavigationItem *_jsapiNavItem;
    AFWFinancePotWebCore *_webCore;
    NSMutableDictionary *_cacheDict;
    double _paddingBottom;
    double _webviewOriginY;
}

@property(nonatomic) _Bool isFromStatusBarHidden; // @synthesize isFromStatusBarHidden=_isFromStatusBarHidden;
@property(nonatomic) double webviewOriginY; // @synthesize webviewOriginY=_webviewOriginY;
@property(nonatomic) double paddingBottom; // @synthesize paddingBottom=_paddingBottom;
@property(nonatomic) _Bool isAphaOverLimit; // @synthesize isAphaOverLimit=_isAphaOverLimit;
@property(nonatomic) _Bool isViewDidDisAppear; // @synthesize isViewDidDisAppear=_isViewDidDisAppear;
@property(nonatomic) _Bool isViewWillDisAppear; // @synthesize isViewWillDisAppear=_isViewWillDisAppear;
@property(nonatomic) _Bool isViewAppearAgain; // @synthesize isViewAppearAgain=_isViewAppearAgain;
@property(nonatomic) _Bool isViewAppeared; // @synthesize isViewAppeared=_isViewAppeared;
@property(nonatomic) int uniqueId; // @synthesize uniqueId=_uniqueId;
@property(nonatomic) float transparentTitleDis; // @synthesize transparentTitleDis=_transparentTitleDis;
@property(retain, nonatomic) NSMutableDictionary *cacheDict; // @synthesize cacheDict=_cacheDict;
@property(retain, nonatomic) AFWFinancePotWebCore *webCore; // @synthesize webCore=_webCore;
@property(retain, nonatomic) AFWFinancePotWebNavigationItem *jsapiNavItem; // @synthesize jsapiNavItem=_jsapiNavItem;
@property(retain, nonatomic) AFWFinancePotWebProgressView *progressView; // @synthesize progressView=_progressView;
@property(retain, nonatomic) AFWFinancePotNaviTitleView *titleView; // @synthesize titleView=_titleView;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
@property(retain, nonatomic) NSDictionary *reportDataSpmDict; // @synthesize reportDataSpmDict=_reportDataSpmDict;
@property(retain, nonatomic) AFWFinancePotOptions *options; // @synthesize options=_options;
- (void).cxx_destruct;
- (void)deleteCache:(id)arg1;
- (id)getCache:(id)arg1;
- (void)setCache:(id)arg1 withValue:(id)arg2;
- (void)_sendData:(id)arg1 responseCallback:(CDUnknownBlockType)arg2 handlerName:(id)arg3;
- (void)callHandler:(id)arg1 data:(id)arg2 responseCallback:(CDUnknownBlockType)arg3;
- (void)reloadWebView;
- (void)setMainTitle:(id)arg1 subtitle:(id)arg2;
- (id)rightCustomNavigationBarButtonItem;
- (void)back;
- (id)leftCustomNavigationBarButtonItem;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (void)hideLoading;
- (void)showLoading:(id)arg1 delay:(double)arg2;
- (void)setTitleViewAlpha:(float)arg1;
- (void)setTitleColor:(id)arg1;
- (void)hideBackButton:(CDUnknownBlockType)arg1;
- (void)showBackButton:(CDUnknownBlockType)arg1;
- (void)hidePopMenu;
- (void)showPopMenuWithData:(id)arg1;
- (void)removeOptionMenu;
- (void)showOptionMenu:(CDUnknownBlockType)arg1;
- (void)setOptionMenu:(id)arg1 callBack:(CDUnknownBlockType)arg2;
- (void)navigationConfig;
- (id)webView;
- (void)reload;
- (void)goForward;
- (void)goBack;
- (_Bool)canGoBack;
- (_Bool)canGoForward;
- (void)webViewDidFailWithError:(id)arg1;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)webViewDidStartLoad:(id)arg1;
- (void)viewControllerPop;
- (void)didMoveToParentViewController:(id)arg1;
- (void)openWithSafeContainer;
- (void)appDidEnterBackground;
- (void)appWillEnterForeground;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithOptions:(id)arg1;
- (void)dealloc;
- (void)setWebViewFrame:(struct CGRect)arg1;
- (void)adjustWebviewContentInsets;
- (void)viewSafeAreaInsetsDidChange;
- (double)getOffSetTop;
- (void)viewWillLayoutSubviews;
@property(nonatomic) struct UIEdgeInsets contentEdgeInsets;
- (void)scrollViewDidScroll:(id)arg1;
- (void)switchToDefaultSkin:(_Bool)arg1;
- (void)switchTransparentTitleMode:(_Bool)arg1;
- (void)changeSkin:(_Bool)arg1 statusBarStyle:(long long)arg2 translucent:(_Bool)arg3;
- (id)getShowColor;
- (double)getNavigatorBarHeight;
- (void)decideNavigationBarStyle;
- (_Bool)hasSetTitleColor;
- (id)bottomLineColor;
- (int)titleBarColor;
- (_Bool)isTransparentTitleWithoutTitleColor;
- (_Bool)isTransparentTitleAlways;
- (_Bool)isTransparentTitleAuto;
- (_Bool)isEnableTransparentTitle;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

