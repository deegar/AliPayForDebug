//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "VZListViewDelegate-Protocol.h"

@class NSString, UITableViewController, VZListViewController;
@protocol VZListPullToRefreshViewDelegate;

@interface VZListViewDelegate : NSObject <VZListViewDelegate>
{
    _Bool _isRefreshing;
    VZListViewController *_controller;
    id <VZListPullToRefreshViewDelegate> _pullRefreshView;
    unsigned long long _type;
    id <VZListPullToRefreshViewDelegate> _pullRefreshViewInternal;
}

@property(retain, nonatomic) id <VZListPullToRefreshViewDelegate> pullRefreshViewInternal; // @synthesize pullRefreshViewInternal=_pullRefreshViewInternal;
@property(nonatomic) _Bool isRefreshing; // @synthesize isRefreshing=_isRefreshing;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(retain, nonatomic) id <VZListPullToRefreshViewDelegate> pullRefreshView; // @synthesize pullRefreshView=_pullRefreshView;
@property(nonatomic) __weak VZListViewController *controller; // @synthesize controller=_controller;
- (void).cxx_destruct;
- (void)onCellComponentClickedAtIndex:(id)arg1 Bundle:(id)arg2;
- (void)scrollViewDidScrollToTop:(id)arg1;
- (void)scrollViewWillBeginDecelerating:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)endRefreshing;
- (void)beginRefreshing;
- (void)dealloc;
- (id)init;
@property(retain, nonatomic) UITableViewController *dummyTableViewController;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

