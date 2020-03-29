//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <WebKit/WKWebView.h>

#import "PSDContentViewProtocol-Protocol.h"

@class NSString, NSURL, NSURLRequest, PSDContentViewConfiguration, UIScrollView, UIView, UIWindow;
@protocol PSDContentViewDelegate, PSDContentViewNavigationDelegate, PSDContentViewUIDelegate, PSDViewControllerProtocol;

@interface PSDWebView : WKWebView <PSDContentViewProtocol>
{
}

- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
@property(retain, nonatomic) PSDContentViewConfiguration *psdConfiguration;

// Remaining properties
@property(readonly, copy, nonatomic) NSURL *URL;
@property(nonatomic) _Bool allowsInlineMediaPlayback;
@property(readonly, nonatomic) _Bool canGoBack;
@property(copy, nonatomic) NSString *channelId;
@property(nonatomic) unsigned long long dataDetectorTypes;
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) __weak id delegate;
@property(readonly, copy) NSString *description;
@property(nonatomic) _Bool detectsPhoneNumbers;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) _Bool isLoading;
@property(nonatomic) __weak id <PSDContentViewDelegate> psdContentViewDelegate;
@property(nonatomic) __weak id <PSDContentViewNavigationDelegate> psdContentViewNavigationDelegate;
@property(nonatomic) __weak id <PSDContentViewUIDelegate> psdContentViewUIDelegate;
@property(nonatomic) __weak id <PSDViewControllerProtocol> psdViewController;
@property(readonly, nonatomic) NSURLRequest *request;
@property(nonatomic) _Bool scalesPageToFit;
@property(readonly, nonatomic) UIScrollView *scrollView;
@property(readonly) Class superclass;
@property(readonly, nonatomic) NSString *traceId;
@property(readonly, nonatomic) __weak UIView *view;
@property(readonly, nonatomic) UIWindow *window;

@end

