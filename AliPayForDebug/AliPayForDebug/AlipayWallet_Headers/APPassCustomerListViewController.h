//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTViewController.h"

#import "SVTableViewCellDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class AUActionSheet, AUNetErrorView, AUTableView, NSDictionary, NSMutableArray, NSString, ODRefreshControl;

@interface APPassCustomerListViewController : DTViewController <UITableViewDataSource, UITableViewDelegate, SVTableViewCellDelegate>
{
    _Bool _shouldAskBeforeDeleteDiscount;
    AUTableView *_tableView;
    NSMutableArray *_passList;
    ODRefreshControl *_refreshControl;
    NSString *_tipMessage;
    AUNetErrorView *_emptyListView;
    NSDictionary *_options;
    AUActionSheet *_deleteActionSheet;
    NSString *_editingPassId;
    AUNetErrorView *_netErrorView;
}

@property(retain, nonatomic) AUNetErrorView *netErrorView; // @synthesize netErrorView=_netErrorView;
@property(retain, nonatomic) NSString *editingPassId; // @synthesize editingPassId=_editingPassId;
@property(retain, nonatomic) AUActionSheet *deleteActionSheet; // @synthesize deleteActionSheet=_deleteActionSheet;
@property(retain, nonatomic) NSDictionary *options; // @synthesize options=_options;
@property(nonatomic) _Bool shouldAskBeforeDeleteDiscount; // @synthesize shouldAskBeforeDeleteDiscount=_shouldAskBeforeDeleteDiscount;
@property(retain, nonatomic) AUNetErrorView *emptyListView; // @synthesize emptyListView=_emptyListView;
@property(copy, nonatomic) NSString *tipMessage; // @synthesize tipMessage=_tipMessage;
@property(retain, nonatomic) ODRefreshControl *refreshControl; // @synthesize refreshControl=_refreshControl;
@property(retain, nonatomic) NSMutableArray *passList; // @synthesize passList=_passList;
@property(retain, nonatomic) AUTableView *tableView; // @synthesize tableView=_tableView;
- (void).cxx_destruct;
- (void)actionSheet:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (void)dealloc;
- (int)findIndexPathWithPassId:(id)arg1;
- (void)removePassData:(id)arg1 indexPath:(id)arg2;
- (void)removeData;
- (void)deleteWithPassId:(id)arg1;
- (void)deletePass:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)swipeableTableViewCell:(id)arg1 didTriggerRightUtilityButtonWithIndex:(long long)arg2;
- (_Bool)swipeableTableViewCellShouldHideUtilityButtonsOnSwipe:(id)arg1;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)convertBizTypeToPassCategory:(id)arg1;
- (void)reloadData;
- (void)registerNotifications;
- (void)hideNoDataTip;
- (void)showNoDataTip;
- (void)addRefreshControl;
- (_Bool)isTicket;
- (_Bool)isCardList;
- (void)reloadFromRPCByNetErrorRetry;
- (void)refreshEventRecieved:(id)arg1;
- (void)queryListRPC;
- (void)viewDidLoad;
- (id)initWithQuery:(id)arg1 params:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

