//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "APSearchBarDelegate-Protocol.h"
#import "APSearchDisplayControllerDelegate-Protocol.h"
#import "FavBaseCellViewDelegate-Protocol.h"
#import "FavSearchDimmingViewDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class APSearchDisplayController, FavSearchDimmingView, NSArray, NSString, UILabel;
@protocol APGLocalSearchService, FavSearchLogicDelegate;

@interface FavSearchLogic : NSObject <FavSearchDimmingViewDelegate, APSearchBarDelegate, UITableViewDataSource, UITableViewDelegate, FavBaseCellViewDelegate, APSearchDisplayControllerDelegate>
{
    FavSearchDimmingView *_dimmingView;
    id <FavSearchLogicDelegate> _searchDelegate;
    APSearchDisplayController *_searchDisplayController;
    id <APGLocalSearchService> _localSearchService;
    UILabel *_emptyLabel;
    NSArray *_tableViewData;
    NSString *_filterType;
    NSString *_filterName;
    NSString *_searchText;
}

@property(copy, nonatomic) NSString *searchText; // @synthesize searchText=_searchText;
@property(copy, nonatomic) NSString *filterName; // @synthesize filterName=_filterName;
@property(copy, nonatomic) NSString *filterType; // @synthesize filterType=_filterType;
@property(retain, nonatomic) NSArray *tableViewData; // @synthesize tableViewData=_tableViewData;
@property(retain, nonatomic) UILabel *emptyLabel; // @synthesize emptyLabel=_emptyLabel;
@property(retain, nonatomic) id <APGLocalSearchService> localSearchService; // @synthesize localSearchService=_localSearchService;
@property(retain, nonatomic) APSearchDisplayController *searchDisplayController; // @synthesize searchDisplayController=_searchDisplayController;
@property(nonatomic) __weak id <FavSearchLogicDelegate> searchDelegate; // @synthesize searchDelegate=_searchDelegate;
- (void).cxx_destruct;
- (void)dealloc;
- (void)hideKeyboardOnScroll;
- (void)cancelSearchByTap;
- (void)searchDimmingView:(id)arg1 didSelected:(id)arg2;
- (_Bool)needLongPress:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)searchDisplayController:(id)arg1 willShowSearchResultsTableView:(id)arg2;
- (void)searchDisplayControllerWillEndSearch:(id)arg1;
- (void)searchDisplayControllerWillBeginSearch:(id)arg1;
- (void)searchBarCancelButtonClicked:(id)arg1;
- (id)formartData:(id)arg1;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (_Bool)searchBar:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
@property(readonly, nonatomic) FavSearchDimmingView *dimmingView; // @synthesize dimmingView=_dimmingView;
- (void)updateSearchFieldText;
- (id)initWithSearchDisplayController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

