//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCTableViewBaseController.h"

@class BCShop, CTTitleView, DTRpcAsyncCaller, HiChatSession, NSArray, NSString, UITableView;

@interface BCChatBaseSettingController : SCTableViewBaseController
{
    _Bool _latestIsNotDisturb;
    _Bool _latestIsNoReceive;
    _Bool _titleIsNotDisturb;
    _Bool _titleIsNoReceive;
    _Bool _needReload;
    NSString *_sessionId;
    NSString *_sessionType;
    HiChatSession *_session;
    BCShop *_shop;
    NSArray *_sections;
    UITableView *_tableView;
    CTTitleView *_titleView;
    DTRpcAsyncCaller *_notDisturbCaller;
    DTRpcAsyncCaller *_noReceiveCaller;
    DTRpcAsyncCaller *_fetchSessionCaller;
}

@property(nonatomic) _Bool needReload; // @synthesize needReload=_needReload;
@property(nonatomic) _Bool titleIsNoReceive; // @synthesize titleIsNoReceive=_titleIsNoReceive;
@property(nonatomic) _Bool titleIsNotDisturb; // @synthesize titleIsNotDisturb=_titleIsNotDisturb;
@property(nonatomic) _Bool latestIsNoReceive; // @synthesize latestIsNoReceive=_latestIsNoReceive;
@property(nonatomic) _Bool latestIsNotDisturb; // @synthesize latestIsNotDisturb=_latestIsNotDisturb;
@property(retain, nonatomic) DTRpcAsyncCaller *fetchSessionCaller; // @synthesize fetchSessionCaller=_fetchSessionCaller;
@property(retain, nonatomic) DTRpcAsyncCaller *noReceiveCaller; // @synthesize noReceiveCaller=_noReceiveCaller;
@property(retain, nonatomic) DTRpcAsyncCaller *notDisturbCaller; // @synthesize notDisturbCaller=_notDisturbCaller;
@property(retain, nonatomic) CTTitleView *titleView; // @synthesize titleView=_titleView;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) NSArray *sections; // @synthesize sections=_sections;
@property(retain, nonatomic) BCShop *shop; // @synthesize shop=_shop;
@property(retain, nonatomic) HiChatSession *session; // @synthesize session=_session;
@property(copy, nonatomic) NSString *sessionType; // @synthesize sessionType=_sessionType;
@property(copy, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
- (void).cxx_destruct;
- (void)updateTitleView;
- (void)back;
- (_Bool)delayFetchSessionAfterSwitchChanged;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)getTableViewSectionRowsInfo:(id)arg1;
- (void)onTopChat:(id)arg1;
- (void)showNetworkError;
- (void)restoreNotDisturb:(id)arg1 value:(_Bool)arg2;
- (void)realOnNotDisturb:(id)arg1;
- (void)onNotDisturb:(id)arg1;
- (void)restoreNoReceive:(id)arg1 value:(_Bool)arg2;
- (void)realOnNoReceive:(id)arg1;
- (void)onNoReceive:(id)arg1;
- (void)doCleanMessages;
- (void)onCleanMessages;
- (id)makeTableViewSections;
- (void)headerCellDidSelected;
- (void)configHeaderCell:(id)arg1;
- (void)sessionDidLoad;
- (void)createSubviews;
- (void)fetchNewSessionData:(_Bool)arg1;
- (void)configTitleView;
- (void)viewDidLoad;
- (void)commonInit;
- (id)initWithSessionId:(id)arg1 sessionType:(id)arg2;
- (id)initWithSessionInfo:(id)arg1;

@end

