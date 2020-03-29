//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTViewController.h"

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class ACAppManager, HNewSettingBadgeSDKManager, NSArray, NSDictionary, NSMutableArray, NSString, UITableView;

@interface HNewSettingViewController : DTViewController <UITableViewDataSource, UITableViewDelegate>
{
    _Bool _iSInReview;
    _Bool _canChangeRegion;
    ACAppManager *_appManager;
    UITableView *_tableView;
    NSArray *_stageList;
    NSDictionary *_extraInfo;
    HNewSettingBadgeSDKManager *_badgeSDKManager;
    NSMutableArray *_redDotShowingWidgetIDs;
}

@property(retain, nonatomic) NSMutableArray *redDotShowingWidgetIDs; // @synthesize redDotShowingWidgetIDs=_redDotShowingWidgetIDs;
@property(retain, nonatomic) HNewSettingBadgeSDKManager *badgeSDKManager; // @synthesize badgeSDKManager=_badgeSDKManager;
@property(retain, nonatomic) NSDictionary *extraInfo; // @synthesize extraInfo=_extraInfo;
@property(retain, nonatomic) NSArray *stageList; // @synthesize stageList=_stageList;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) ACAppManager *appManager; // @synthesize appManager=_appManager;
- (void).cxx_destruct;
- (id)indexPathForWidgetID:(id)arg1;
- (void)showRedDot;
- (void)hideRedDot;
- (void)reloadUIForBadgeSDK;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)getVersionString;
- (id)getUserMobilePhone;
- (id)getAppInfo;
- (void)refreshWillAppear:(id)arg1;
- (void)refreshSettingApps;
- (void)doAppDataChanged:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)dealloc;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
