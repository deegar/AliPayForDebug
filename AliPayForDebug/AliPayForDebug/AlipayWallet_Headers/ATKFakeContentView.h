//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PSDContentView.h"

@class NSString;

@interface ATKFakeContentView : PSDContentView
{
    NSString *_customUrl;
}

@property(retain, nonatomic) NSString *customUrl; // @synthesize customUrl=_customUrl;
- (void).cxx_destruct;
- (void)goForward;
- (void)goBack;
- (void)stopLoading;
- (void)reload;
- (void)loadHTMLString:(id)arg1 baseURL:(id)arg2;
- (void)loadRequest:(id)arg1;
- (void)setAllowsInlineMediaPlayback:(_Bool)arg1;
- (_Bool)allowsInlineMediaPlayback;
- (void)setDataDetectorTypes:(unsigned long long)arg1;
- (unsigned long long)dataDetectorTypes;
- (void)setDetectsPhoneNumbers:(_Bool)arg1;
- (_Bool)detectsPhoneNumbers;
- (void)setScalesPageToFit:(_Bool)arg1;
- (_Bool)scalesPageToFit;
- (void)setChannelId:(id)arg1;
- (id)channelId;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (_Bool)canGoBack;
- (_Bool)isLoading;
- (id)request;
- (id)scrollView;
- (_Bool)drawViewHierarchyInRect:(struct CGRect)arg1 afterScreenUpdates:(_Bool)arg2;
- (id)window;
- (id)view;
- (void)evaluateJavaScript:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end
