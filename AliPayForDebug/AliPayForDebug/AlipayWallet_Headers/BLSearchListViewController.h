//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BLBaseViewController.h"

#import "AUSearchBarDelegate-Protocol.h"
#import "BLDateFilterViewDelegate-Protocol.h"
#import "BLHomeListDataManagerDelegate-Protocol.h"
#import "BLHomeListViewDelegate-Protocol.h"
#import "BLListHeaderDelegate-Protocol.h"

@class AUSearchBar, BLDateFilterView, BLHomeListDataManager, BLHomeListViewDelegateImpl, BLListTableView, BLQueryDateModel, NSDictionary, NSString, QueryListReq;

@interface BLSearchListViewController : BLBaseViewController <AUSearchBarDelegate, BLHomeListDataManagerDelegate, BLHomeListViewDelegate, BLDateFilterViewDelegate, BLListHeaderDelegate>
{
    _Bool _shouldRefresh;
    BLListTableView *_tableView;
    BLHomeListDataManager *_dataManager;
    BLHomeListViewDelegateImpl *_listViewDelegateImpl;
    AUSearchBar *_searchbar;
    BLDateFilterView *_dateFilterView;
    QueryListReq *_listReq;
    BLQueryDateModel *_queryDateModel;
    NSDictionary *_reqDict;
}

@property(retain, nonatomic) NSDictionary *reqDict; // @synthesize reqDict=_reqDict;
@property(retain, nonatomic) BLQueryDateModel *queryDateModel; // @synthesize queryDateModel=_queryDateModel;
@property(retain, nonatomic) QueryListReq *listReq; // @synthesize listReq=_listReq;
@property(nonatomic) _Bool shouldRefresh; // @synthesize shouldRefresh=_shouldRefresh;
@property(retain, nonatomic) BLDateFilterView *dateFilterView; // @synthesize dateFilterView=_dateFilterView;
@property(retain, nonatomic) AUSearchBar *searchbar; // @synthesize searchbar=_searchbar;
@property(retain, nonatomic) BLHomeListViewDelegateImpl *listViewDelegateImpl; // @synthesize listViewDelegateImpl=_listViewDelegateImpl;
@property(retain, nonatomic) BLHomeListDataManager *dataManager; // @synthesize dataManager=_dataManager;
@property(retain, nonatomic) BLListTableView *tableView; // @synthesize tableView=_tableView;
- (void).cxx_destruct;
- (void)reloadDataOfTableView;
- (void)loadDateData;
- (void)showDateView;
- (void)clickTimeSelect;
- (void)didTapNoDataView;
- (_Bool)nextPagePullViewIsLoading;
- (void)nextPagePullViewDidRefresh;
- (void)didSelectRowAtIndexPath:(id)arg1;
- (void)deleteRowAtIndexPath:(id)arg1;
- (void)deleteDataDidFinished:(_Bool)arg1 indexPath:(id)arg2;
- (void)changeSumDidFinish;
- (void)changeDataDidFinishedByRPC:(id)arg1;
- (void)hideLoading;
- (void)showLoading;
- (void)searchBarCancelButtonClicked:(id)arg1;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (_Bool)searchBarTextShouldBeginEditing:(id)arg1;
- (_Bool)searchBar:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)refreshEvent;
- (void)dealloc;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)init;
- (id)initWithDictionary:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

