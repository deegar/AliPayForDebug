//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "GO2OTagsSelectionDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class GO2OMenuGroup, GO2OTagsSelectionView, NSString, UIButton, UITableView;
@protocol GO2OMenuPopoverViewDelegate;

@interface GO2OMenuPopoverView : UIView <UITableViewDelegate, UITableViewDataSource, GO2OTagsSelectionDelegate>
{
    id <GO2OMenuPopoverViewDelegate> _delegate;
    NSString *_spmPrefix;
    UIView *_overView;
    UIButton *_cancelBtn;
    UIView *_tableContainerView;
    UITableView *_categoryListTableView;
    UITableView *_itemListTableView;
    GO2OMenuGroup *_menuGroup;
    UIView *_tagContainerView;
    GO2OTagsSelectionView *_tagView;
}

@property(retain, nonatomic) GO2OTagsSelectionView *tagView; // @synthesize tagView=_tagView;
@property(retain, nonatomic) UIView *tagContainerView; // @synthesize tagContainerView=_tagContainerView;
@property(retain, nonatomic) GO2OMenuGroup *menuGroup; // @synthesize menuGroup=_menuGroup;
@property(retain, nonatomic) UITableView *itemListTableView; // @synthesize itemListTableView=_itemListTableView;
@property(retain, nonatomic) UITableView *categoryListTableView; // @synthesize categoryListTableView=_categoryListTableView;
@property(retain, nonatomic) UIView *tableContainerView; // @synthesize tableContainerView=_tableContainerView;
@property(retain, nonatomic) UIButton *cancelBtn; // @synthesize cancelBtn=_cancelBtn;
@property(retain, nonatomic) UIView *overView; // @synthesize overView=_overView;
@property(copy, nonatomic) NSString *spmPrefix; // @synthesize spmPrefix=_spmPrefix;
@property(nonatomic) __weak id <GO2OMenuPopoverViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)selectResults:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)deselectOtherItemsAtFirstLevel;
- (id)tagsOfMenuGroup:(id)arg1;
- (void)reloadTagViewWithData:(id)arg1;
- (void)reloadListViewWithData:(id)arg1;
- (void)reloadWithData:(id)arg1;
- (void)hiddenFunc;
- (void)cancel;
- (void)disappear;
- (void)show:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

