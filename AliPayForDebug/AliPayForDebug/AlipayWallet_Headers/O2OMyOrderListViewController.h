//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "O2OListViewController.h"

#import "O2OCDPAdapterPromotionProtocol-Protocol.h"
#import "O2OWaitCommentListHeaderDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"

@class NSString, O2ODeleteOrderModel, O2OMyOrderListModel, O2OMyOrderListViewDataSource, O2OMyOrderListViewDelegate, O2OWaitCommentListHeader, UIScrollView;
@protocol O2OMyCommentScrollDelegate;

@interface O2OMyOrderListViewController : O2OListViewController <O2OCDPAdapterPromotionProtocol, O2OWaitCommentListHeaderDelegate, UIScrollViewDelegate>
{
    _Bool _isMyOrderList;
    _Bool _inCommentSuccess;
    _Bool _countAssigned;
    CDUnknownBlockType _afterShowModelAction;
    O2OWaitCommentListHeader *_headerControl;
    id <O2OMyCommentScrollDelegate> _scrollDelegate;
    long long _totalSize;
    O2OMyOrderListModel *_shopOrderListModel;
    O2OMyOrderListModel *_itemOrderListModel;
    O2OMyOrderListViewDataSource *_shopOrderDs;
    O2OMyOrderListViewDataSource *_itemOrderDs;
    O2OMyOrderListViewDelegate *_dl;
    O2ODeleteOrderModel *_deleteOrderModel;
    long long _itemCommentSize;
    long long _shopCommentSize;
    double _previousScrollOffset;
    UIScrollView *_exceptionScrollView;
}

@property(retain, nonatomic) UIScrollView *exceptionScrollView; // @synthesize exceptionScrollView=_exceptionScrollView;
@property(nonatomic) double previousScrollOffset; // @synthesize previousScrollOffset=_previousScrollOffset;
@property(nonatomic) _Bool countAssigned; // @synthesize countAssigned=_countAssigned;
@property(nonatomic) long long shopCommentSize; // @synthesize shopCommentSize=_shopCommentSize;
@property(nonatomic) long long itemCommentSize; // @synthesize itemCommentSize=_itemCommentSize;
@property(retain, nonatomic) O2ODeleteOrderModel *deleteOrderModel; // @synthesize deleteOrderModel=_deleteOrderModel;
@property(retain, nonatomic) O2OMyOrderListViewDelegate *dl; // @synthesize dl=_dl;
@property(retain, nonatomic) O2OMyOrderListViewDataSource *itemOrderDs; // @synthesize itemOrderDs=_itemOrderDs;
@property(retain, nonatomic) O2OMyOrderListViewDataSource *shopOrderDs; // @synthesize shopOrderDs=_shopOrderDs;
@property(retain, nonatomic) O2OMyOrderListModel *itemOrderListModel; // @synthesize itemOrderListModel=_itemOrderListModel;
@property(retain, nonatomic) O2OMyOrderListModel *shopOrderListModel; // @synthesize shopOrderListModel=_shopOrderListModel;
@property(readonly, nonatomic) long long totalSize; // @synthesize totalSize=_totalSize;
@property(nonatomic) __weak id <O2OMyCommentScrollDelegate> scrollDelegate; // @synthesize scrollDelegate=_scrollDelegate;
@property(retain, nonatomic) O2OWaitCommentListHeader *headerControl; // @synthesize headerControl=_headerControl;
@property(copy, nonatomic) CDUnknownBlockType afterShowModelAction; // @synthesize afterShowModelAction=_afterShowModelAction;
@property(nonatomic) _Bool inCommentSuccess; // @synthesize inCommentSuccess=_inCommentSuccess;
@property(nonatomic) _Bool isMyOrderList; // @synthesize isMyOrderList=_isMyOrderList;
- (void).cxx_destruct;
- (void)updateCountIsShop:(_Bool)arg1;
- (void)commentSuccess:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (void)popCurrentThenAdd:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)didSelectIndex:(long long)arg1;
- (void)showModel:(id)arg1;
- (void)showError:(id)arg1 withModel:(id)arg2;
- (void)showNoResult:(id)arg1;
- (void)showLoading:(id)arg1;
- (id)pageSpm;
- (void)dealloc;
- (void)back;
- (void)reload;
- (void)viewDidLoad;
- (_Bool)autohideNavigationBar;
@property(readonly, nonatomic) unsigned long long itemsCount;
- (id)initWithScheme:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

