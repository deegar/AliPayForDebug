//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "APContactBaseViewController.h"

@class APContactMultiSelectView, APContactSelectAllView, APGroupInfo, NSArray, NSMutableArray, NSMutableDictionary, NSString;

@interface APContactCombinedMultiSelectViewController : APContactBaseViewController
{
    _Bool _needMobileContact;
    _Bool _enableSelectAll;
    _Bool _defaultSelectAll;
    _Bool _enableSelectNone;
    _Bool _defaultAlertFlag;
    NSString *_confirmBtnTitle;
    long long _maxMultiCount;
    NSString *_overMaxText;
    NSArray *_customRecentArray;
    NSArray *_multiSelectContacts;
    NSArray *_needAddItems;
    NSString *_selectAllTips;
    APContactSelectAllView *_selectAllView;
    APGroupInfo *_selectedGroup;
    NSMutableArray *_selectedContactInfos;
    NSMutableDictionary *_selectedUids;
}

@property(nonatomic) _Bool defaultAlertFlag; // @synthesize defaultAlertFlag=_defaultAlertFlag;
@property(nonatomic) _Bool enableSelectNone; // @synthesize enableSelectNone=_enableSelectNone;
@property(retain, nonatomic) NSMutableDictionary *selectedUids; // @synthesize selectedUids=_selectedUids;
@property(retain, nonatomic) NSMutableArray *selectedContactInfos; // @synthesize selectedContactInfos=_selectedContactInfos;
@property(retain, nonatomic) APGroupInfo *selectedGroup; // @synthesize selectedGroup=_selectedGroup;
@property(retain, nonatomic) APContactSelectAllView *selectAllView; // @synthesize selectAllView=_selectAllView;
@property(retain, nonatomic) NSString *selectAllTips; // @synthesize selectAllTips=_selectAllTips;
@property(nonatomic) _Bool defaultSelectAll; // @synthesize defaultSelectAll=_defaultSelectAll;
@property(nonatomic) _Bool enableSelectAll; // @synthesize enableSelectAll=_enableSelectAll;
@property(retain, nonatomic) NSArray *needAddItems; // @synthesize needAddItems=_needAddItems;
@property(nonatomic) _Bool needMobileContact; // @synthesize needMobileContact=_needMobileContact;
@property(retain, nonatomic) NSArray *multiSelectContacts; // @synthesize multiSelectContacts=_multiSelectContacts;
@property(retain, nonatomic) NSArray *customRecentArray; // @synthesize customRecentArray=_customRecentArray;
@property(retain, nonatomic) NSString *overMaxText; // @synthesize overMaxText=_overMaxText;
@property(nonatomic) long long maxMultiCount; // @synthesize maxMultiCount=_maxMultiCount;
@property(retain, nonatomic) NSString *confirmBtnTitle; // @synthesize confirmBtnTitle=_confirmBtnTitle;
- (void).cxx_destruct;
- (void)addSelectedContactItems:(id)arg1;
- (void)doSelectAll:(_Bool)arg1;
- (id)getCommonLogArray;
- (id)cellClassNameInCommonView:(id)arg1 item:(id)arg2;
- (void)commonView:(id)arg1 configCell:(id)arg2 item:(id)arg3;
- (void)loadingViewShow:(_Bool)arg1;
- (void)refreshRightButtonWithCount:(long long)arg1;
- (void)selectionDidChangeInCommonView:(id)arg1;
- (void)dealClickConfirmBtn:(id)arg1 params:(id)arg2;
- (id)formatStringWithArray:(id)arg1;
- (void)handleSubmition;
- (void)didClickConfirmBtn:(id)arg1;
- (id)defaultSelectedItemsInCommonView:(id)arg1;
- (void)reloadContacts;
- (void)loadContact;
- (void)adjustFrames;
- (void)setupSelectView;
- (void)setupRightBarBtnItem;
- (void)adjustSelectAllFrames;
- (void)setupSelectAll;
- (void)setupUI;
- (void)checkDefaultSelectAll;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (void)viewWillDestroy;
- (void)configWithDict:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(retain, nonatomic) APContactMultiSelectView *selectView; // @dynamic selectView;

@end

