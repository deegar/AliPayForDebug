//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "HCCollectionViewContentDelegate-Protocol.h"
#import "HCErrorDelegate-Protocol.h"

@class HCCollectionView, HCErrorView, HCNextEmptyView, HCNextLoadMoreView, NSString, NSValue, UIView;
@protocol HCCardFooterWidgetDelegate;

@interface HCCardFooterWidget : NSObject <HCErrorDelegate, HCCollectionViewContentDelegate>
{
    unsigned long long _mode;
    double _baselineYOffset;
    double _loadmoreDistance;
    NSValue *_beginDragOffset;
    _Bool _loadmoreLock;
    double _minIntervalLoadMore;
    _Bool _autoLoadMore;
    id <HCCardFooterWidgetDelegate> _delegate;
    HCCollectionView *_collectionView;
    UIView *_widgetView;
    HCNextEmptyView *_emptyView;
    HCErrorView *_errorView;
    HCNextLoadMoreView *_loadingView;
    HCNextLoadMoreView *_loadMoreView;
}

@property(retain, nonatomic) HCNextLoadMoreView *loadMoreView; // @synthesize loadMoreView=_loadMoreView;
@property(retain, nonatomic) HCNextLoadMoreView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) HCErrorView *errorView; // @synthesize errorView=_errorView;
@property(retain, nonatomic) HCNextEmptyView *emptyView; // @synthesize emptyView=_emptyView;
@property(retain, nonatomic) UIView *widgetView; // @synthesize widgetView=_widgetView;
@property(nonatomic) __weak HCCollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(nonatomic) _Bool autoLoadMore; // @synthesize autoLoadMore=_autoLoadMore;
@property(nonatomic) __weak id <HCCardFooterWidgetDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)retryRefreshCard;
- (void)suspendAnimation;
- (void)resumeAnimation;
- (void)adjustWidgetYOffset;
- (void)adjustBaselineOffset:(double)arg1;
- (void)updateContentInset;
- (void)layoutWidget;
- (double)widgetHeight;
@property(readonly, copy, nonatomic) NSString *modeDescription;
- (void)refresh:(unsigned long long)arg1;
- (void)unbind;
- (void)bindCollectionView:(id)arg1;
@property(readonly, nonatomic) unsigned long long refreshMode;
- (void)collectionViewDidEndDragging;
- (void)collectionViewBeginDragging;
- (void)contentOffsetDidChanged;
- (void)contentSizeDidChanged;
- (void)collectionView:(id)arg1 didChangedContentOffset:(struct CGPoint)arg2;
- (void)collectionView:(id)arg1 didChangedContentSize:(struct CGSize)arg2;
- (void)tryLoadMoreInFuture:(double)arg1;
- (_Bool)supportLoadMore;
- (_Bool)offsetHasArrivedThreshold;
- (_Bool)widgetIsVisible;
- (void)callLoadMore;
- (double)loadMoreMinInterval;
- (double)loadmoreDistanceThreshold;
- (void)clearSubviews;
- (void)reloadSubviews;
- (void)reload;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

