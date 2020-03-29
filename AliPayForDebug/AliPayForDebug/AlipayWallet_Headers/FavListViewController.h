//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "FavActionToolViewDelegate-Protocol.h"
#import "FavBaseCellViewDelegate-Protocol.h"
#import "FavBizDataManagerDelegate-Protocol.h"
#import "UIActionSheetDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class APBarButtonItem, APExceptionView, AUActionSheet, FavActionToolView, FavSocialInfo, FavStateView, FavViewController, NSArray, NSDictionary, NSMutableDictionary, NSString, UITableView;
@protocol FavBizDataManagerProtocol;

@interface FavListViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, FavActionToolViewDelegate, UIActionSheetDelegate, FavBizDataManagerDelegate, FavBaseCellViewDelegate>
{
    _Bool w_isDeleting;
    double _toolViewHeight;
    UITableView *_tableView;
    FavStateView *_stateView;
    unsigned long long _tableViewMode;
    NSArray *_tableViewData;
    APExceptionView *_networkErrorView;
    FavViewController *_segmentController;
    FavActionToolView *_toolView;
    AUActionSheet *_deleteActionSheet;
    FavSocialInfo *_socialInfo;
    NSDictionary *_detailVCClassMap;
    NSMutableDictionary *_selectedRowDict;
    id <FavBizDataManagerProtocol> _dataManager;
    APBarButtonItem *_leftBarBtnItem;
    NSArray *_restoreleftBarBtnItems;
    NSArray *_restoreRightBarBtnItems;
}

@property(retain, nonatomic) NSArray *restoreRightBarBtnItems; // @synthesize restoreRightBarBtnItems=_restoreRightBarBtnItems;
@property(retain, nonatomic) NSArray *restoreleftBarBtnItems; // @synthesize restoreleftBarBtnItems=_restoreleftBarBtnItems;
@property(retain, nonatomic) APBarButtonItem *leftBarBtnItem; // @synthesize leftBarBtnItem=_leftBarBtnItem;
@property(retain, nonatomic) id <FavBizDataManagerProtocol> dataManager; // @synthesize dataManager=_dataManager;
@property(retain, nonatomic) NSMutableDictionary *selectedRowDict; // @synthesize selectedRowDict=_selectedRowDict;
@property(retain, nonatomic) NSDictionary *detailVCClassMap; // @synthesize detailVCClassMap=_detailVCClassMap;
@property(retain, nonatomic) FavSocialInfo *socialInfo; // @synthesize socialInfo=_socialInfo;
@property(retain, nonatomic) AUActionSheet *deleteActionSheet; // @synthesize deleteActionSheet=_deleteActionSheet;
@property(retain, nonatomic) FavActionToolView *toolView; // @synthesize toolView=_toolView;
@property(nonatomic) __weak FavViewController *segmentController; // @synthesize segmentController=_segmentController;
@property(retain, nonatomic) APExceptionView *networkErrorView; // @synthesize networkErrorView=_networkErrorView;
@property(retain, nonatomic) NSArray *tableViewData; // @synthesize tableViewData=_tableViewData;
@property(nonatomic) unsigned long long tableViewMode; // @synthesize tableViewMode=_tableViewMode;
@property(retain, nonatomic) FavStateView *stateView; // @synthesize stateView=_stateView;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
- (void).cxx_destruct;
- (id)navigationItem;
- (void)dataManager:(id)arg1 updateItems:(id)arg2;
- (void)dataManager:(id)arg1 deleteItems:(id)arg2;
- (void)dataManager:(id)arg1 syncError:(id)arg2;
- (_Bool)needLongPress:(id)arg1;
- (void)cellMenuTypeTaped:(id)arg1 type:(unsigned long long)arg2;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)actionToolView:(id)arg1 didSelectAction:(int)arg2;
- (id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)showNetworkErrorView;
- (void)showStateViewWithSate:(unsigned long long)arg1;
- (void)onCancel;
- (void)gotoDetailViewControllerLogic:(id)arg1;
- (void)gotoShare;
- (void)deleteFavItemsWithRowsList:(id)arg1;
- (void)clearChooseState;
- (void)cancelSelectFavItems;
- (void)selectFavItems;
- (void)toggleSelectStatus;
@property(readonly, nonatomic) _Bool hasCacheData;
- (void)loadData;
- (void)refreshState;
- (void)onNetworkErrorView;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithDataManager:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

