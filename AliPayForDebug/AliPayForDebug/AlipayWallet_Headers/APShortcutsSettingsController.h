//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTViewController.h"

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSArray, NSMutableArray, NSString, UIButton, UICollectionView, UITableView, UIView;

@interface APShortcutsSettingsController : DTViewController <UITableViewDelegate, UITableViewDataSource, UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>
{
    long long _launchMode;
    UITableView *_tableView;
    UICollectionView *_collectionView;
    NSArray *_phoneViewModels;
    UIView *_sceneHeaderView;
    UIButton *_guideButton;
    NSMutableArray *_sceneViews;
    NSMutableArray *_sceneButtons;
    long long _currentMode;
    NSMutableArray *_selectedItems;
    NSMutableArray *_unSelectedItems;
}

@property(retain, nonatomic) NSMutableArray *unSelectedItems; // @synthesize unSelectedItems=_unSelectedItems;
@property(retain, nonatomic) NSMutableArray *selectedItems; // @synthesize selectedItems=_selectedItems;
@property(nonatomic) long long currentMode; // @synthesize currentMode=_currentMode;
@property(retain, nonatomic) NSMutableArray *sceneButtons; // @synthesize sceneButtons=_sceneButtons;
@property(retain, nonatomic) NSMutableArray *sceneViews; // @synthesize sceneViews=_sceneViews;
@property(retain, nonatomic) UIButton *guideButton; // @synthesize guideButton=_guideButton;
@property(retain, nonatomic) UIView *sceneHeaderView; // @synthesize sceneHeaderView=_sceneHeaderView;
@property(copy, nonatomic) NSArray *phoneViewModels; // @synthesize phoneViewModels=_phoneViewModels;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) long long launchMode; // @synthesize launchMode=_launchMode;
- (void).cxx_destruct;
- (void)setTableViewEditable:(_Bool)arg1;
- (void)openH5:(id)arg1;
- (void)showGuideView:(id)arg1;
- (void)selectSceneMode:(long long)arg1;
- (void)saveShortcutsItems;
- (void)loadCurrentScene;
- (void)traitCollectionDidChange:(id)arg1;
- (_Bool)supportForceTouch;
- (void)registerNotification;
- (void)createSubviews;
- (void)reloadData;
- (void)initData;
- (void)resume;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)changeItemAtIndexPath:(id)arg1 delete:(_Bool)arg2;
- (id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 moveRowAtIndexPath:(id)arg2 toIndexPath:(id)arg3;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (id)titleForSection:(long long)arg1;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)addDesktopForItem:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)indexToPhoneMode:(unsigned long long)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

