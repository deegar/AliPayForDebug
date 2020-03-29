//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTBaseViewController.h"

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class AUNetErrorView, NSMutableArray, NSString, UITableView;

@interface ALPPrivilegeListViewController : DTBaseViewController <UITableViewDelegate, UITableViewDataSource>
{
    NSString *_passId;
    NSString *_pid;
    NSString *_tid;
    NSString *_source;
    NSMutableArray *_dataSource;
    UITableView *_tableView;
    AUNetErrorView *_emptyView;
    AUNetErrorView *_errorView;
}

@property(retain, nonatomic) AUNetErrorView *errorView; // @synthesize errorView=_errorView;
@property(retain, nonatomic) AUNetErrorView *emptyView; // @synthesize emptyView=_emptyView;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) NSMutableArray *dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) NSString *source; // @synthesize source=_source;
@property(retain, nonatomic) NSString *tid; // @synthesize tid=_tid;
@property(retain, nonatomic) NSString *pid; // @synthesize pid=_pid;
@property(retain, nonatomic) NSString *passId; // @synthesize passId=_passId;
- (void).cxx_destruct;
- (id)itemsFromInfos:(id)arg1;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)itemAtIndexPath:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)showError:(id)arg1;
- (void)showNoResult;
- (void)showModel;
- (void)showLoading;
- (void)load;
- (void)viewDidLoad;
- (id)initWithQuery:(id)arg1 params:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

