//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "O2OListViewController.h"

#import "O2OCDPAdapterPromotionProtocol-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"

@class CDPSpaceView, NSString, O2OAllMyCommentsListModel, O2OAllMyCommentsListViewDataSource, UIScrollView, VZListViewDelegate;
@protocol O2OMyCommentScrollDelegate;

@interface O2OAllMyCommentsListViewController : O2OListViewController <O2OCDPAdapterPromotionProtocol, UIScrollViewDelegate>
{
    _Bool _fromCommentSuccess;
    id <O2OMyCommentScrollDelegate> _scrollDelegate;
    O2OAllMyCommentsListModel *_allMyCommentsListModel;
    O2OAllMyCommentsListViewDataSource *_ds;
    VZListViewDelegate *_dl;
    long long _commentsCount;
    CDPSpaceView *_cdpView;
    double _previousScrollOffset;
    UIScrollView *_exceptionScrollView;
}

@property(retain, nonatomic) UIScrollView *exceptionScrollView; // @synthesize exceptionScrollView=_exceptionScrollView;
@property(nonatomic) double previousScrollOffset; // @synthesize previousScrollOffset=_previousScrollOffset;
@property(retain, nonatomic) CDPSpaceView *cdpView; // @synthesize cdpView=_cdpView;
@property(nonatomic) _Bool fromCommentSuccess; // @synthesize fromCommentSuccess=_fromCommentSuccess;
@property(nonatomic) long long commentsCount; // @synthesize commentsCount=_commentsCount;
@property(retain, nonatomic) VZListViewDelegate *dl; // @synthesize dl=_dl;
@property(retain, nonatomic) O2OAllMyCommentsListViewDataSource *ds; // @synthesize ds=_ds;
@property(retain, nonatomic) O2OAllMyCommentsListModel *allMyCommentsListModel; // @synthesize allMyCommentsListModel=_allMyCommentsListModel;
@property(nonatomic) __weak id <O2OMyCommentScrollDelegate> scrollDelegate; // @synthesize scrollDelegate=_scrollDelegate;
- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)arg1;
- (void)reverseLocation;
- (void)promotionViewDidFinishLoading:(id)arg1 spaceCode:(id)arg2;
- (void)promitionEnd;
- (void)publishReplyNotiHandler:(id)arg1;
- (void)likeCommentNotiHandler:(id)arg1;
- (void)deleteCommentSuccess:(id)arg1;
- (void)onSettingButtonClicked:(id)arg1;
- (void)setupNavBarItem;
- (void)showModel:(id)arg1;
- (void)removeErrorView;
- (void)showError:(id)arg1 withModel:(id)arg2;
- (void)showEmpty:(id)arg1;
- (void)showLoading:(id)arg1;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)back;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (id)footerViewError:(id)arg1 withModel:(id)arg2;
- (id)pageSpm;
- (void)viewDidLoad;
- (void)dealloc;
- (id)init;
- (id)initWithScheme:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

