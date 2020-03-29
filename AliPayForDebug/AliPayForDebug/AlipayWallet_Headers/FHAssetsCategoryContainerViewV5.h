//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "FHFloatOutTipsBarDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"

@class AUScrollView, FHFloatOutTipsBar, NSArray, NSString;
@protocol FHAssetsCategoryContainerViewDelegateV5;

@interface FHAssetsCategoryContainerViewV5 : UIView <UIScrollViewDelegate, FHFloatOutTipsBarDelegate>
{
    _Bool _isDismissing;
    _Bool _floatTipsHasShow;
    _Bool _rootViewIsAppeared;
    AUScrollView *_containerScollView;
    UIView *_scrollIndicatorView;
    UIView *_scrollIndicatorBarView;
    NSArray *_categoryControlList;
    NSArray *_categoryExposureViewArray;
    NSArray *_exposureViewArray;
    FHFloatOutTipsBar *_floatOutTipsBar;
    id <FHAssetsCategoryContainerViewDelegateV5> _weakDelegate;
}

@property(nonatomic) __weak id <FHAssetsCategoryContainerViewDelegateV5> weakDelegate; // @synthesize weakDelegate=_weakDelegate;
@property(nonatomic) _Bool rootViewIsAppeared; // @synthesize rootViewIsAppeared=_rootViewIsAppeared;
@property(nonatomic) _Bool floatTipsHasShow; // @synthesize floatTipsHasShow=_floatTipsHasShow;
@property(nonatomic) _Bool isDismissing; // @synthesize isDismissing=_isDismissing;
@property(retain, nonatomic) FHFloatOutTipsBar *floatOutTipsBar; // @synthesize floatOutTipsBar=_floatOutTipsBar;
@property(retain, nonatomic) NSArray *exposureViewArray; // @synthesize exposureViewArray=_exposureViewArray;
@property(retain, nonatomic) NSArray *categoryExposureViewArray; // @synthesize categoryExposureViewArray=_categoryExposureViewArray;
@property(retain, nonatomic) NSArray *categoryControlList; // @synthesize categoryControlList=_categoryControlList;
@property(retain, nonatomic) UIView *scrollIndicatorBarView; // @synthesize scrollIndicatorBarView=_scrollIndicatorBarView;
@property(retain, nonatomic) UIView *scrollIndicatorView; // @synthesize scrollIndicatorView=_scrollIndicatorView;
@property(retain, nonatomic) AUScrollView *containerScollView; // @synthesize containerScollView=_containerScollView;
- (void).cxx_destruct;
- (void)postScollDidEndNotification;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollIndicatorBarDidScroll:(id)arg1;
- (void)shouldExposureCategoryView;
- (void)calculateExposureView;
- (void)didClickItem:(id)arg1;
- (id)createV4D2CategoryViewArrayIfNeeded:(id)arg1 containerView:(id)arg2;
- (id)createV5CategoryViewArrayIfNeeded:(id)arg1 containerView:(id)arg2;
- (id)findItemShowBubbleMarkOffScreen:(id)arg1;
- (void)dismissFloatTipsBar;
- (void)showFloatTipsBar;
- (void)floatOutTipsBarDidShow:(id)arg1;
- (void)floatOutTipsBarShowTimeout:(id)arg1;
- (void)floatOutTipsBar:(id)arg1 didClickedWithModel:(id)arg2;
- (void)updateData:(id)arg1 assetVersion:(long long)arg2;
- (void)layoutSubviews;
- (void)languageSettingDidChanged:(id)arg1;
- (void)rootViewWillDisAppear:(id)arg1;
- (void)didMoveToWindow;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

