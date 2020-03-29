//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "UIScrollViewDelegate-Protocol.h"

@class NSArray, NSString, UIScrollView, UIView;
@protocol PSDContentViewProtocol;

@interface MYPromotionScrollViewListener : NSObject <UIScrollViewDelegate>
{
    UIScrollView *_scrollView;
    UIView<PSDContentViewProtocol> *_webView;
    NSArray *_identifiers;
}

+ (id)mayaScrollViewListener:(id)arg1;
+ (void)listenToScrollView:(id)arg1 identifier:(id)arg2 webView:(id)arg3;
+ (id)mayaScrollViewListenerForDelegate:(id)arg1;
+ (void)setListener:(id)arg1 forDelegate:(id)arg2;
@property(copy, nonatomic) NSArray *identifiers; // @synthesize identifiers=_identifiers;
@property(nonatomic) __weak UIView<PSDContentViewProtocol> *webView; // @synthesize webView=_webView;
@property(nonatomic) __weak UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
- (void).cxx_destruct;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)maya_scrollViewDidEndDecelerating:(id)arg1;
- (void)maya_scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)maya_scrollViewWillBeginDragging:(id)arg1;
- (void)endScroll;
- (void)beginScroll;
- (void)dealloc;
- (void)hookClass:(Class)arg1 originalSelector:(SEL)arg2 withSelector:(SEL)arg3;
- (void)tryToHook:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)listenToScrollView:(id)arg1 identifier:(id)arg2 webView:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

