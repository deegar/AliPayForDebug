//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

@class O2OIndexRefreshConfig, O2OIndexRefreshControlContent, UIColor, UIImageView, UIScrollView, UIView;

@interface O2OIndexRefreshControl : UIControl
{
    UIColor *_defaultTintColor;
    double _originalInsetTop;
    _Bool isiPhoneX;
    _Bool _refreshing;
    _Bool _shouldIgnoreInset;
    O2OIndexRefreshControlContent *_content;
    CDUnknownBlockType _expandBlock;
    long long _refreshControlState;
    O2OIndexRefreshConfig *_config;
    UIView *_appearView;
    UIScrollView *_scrollView;
    UIImageView *_contentBackgroundView;
}

@property(nonatomic) _Bool shouldIgnoreInset; // @synthesize shouldIgnoreInset=_shouldIgnoreInset;
@property(retain, nonatomic) UIImageView *contentBackgroundView; // @synthesize contentBackgroundView=_contentBackgroundView;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(nonatomic) __weak UIView *appearView; // @synthesize appearView=_appearView;
@property(retain, nonatomic) O2OIndexRefreshConfig *config; // @synthesize config=_config;
@property(nonatomic) long long refreshControlState; // @synthesize refreshControlState=_refreshControlState;
@property(copy, nonatomic) CDUnknownBlockType expandBlock; // @synthesize expandBlock=_expandBlock;
@property(readonly, nonatomic, getter=isRefreshing) _Bool refreshing; // @synthesize refreshing=_refreshing;
@property(retain, nonatomic) O2OIndexRefreshControlContent *content; // @synthesize content=_content;
- (void).cxx_destruct;
- (void)updateRefreshControlWithColor:(id)arg1;
- (void)setContentBackgroundColor:(id)arg1;
- (void)setRefreshColor:(id)arg1;
- (void)triggerRefreshing;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)removeInsetHeight;
- (void)setContentInset:(struct UIEdgeInsets)arg1;
- (void)addInsetHeight;
- (void)willMoveToWindow:(id)arg1;
- (void)dealloc;
- (void)endRefreshing;
- (void)beginRefreshing;
- (void)setTintColor:(id)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)setupViews;
- (id)initWithScrollView:(id)arg1;

@end

