//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTViewController.h"

#import "FHAssetsEditToolBarDelegate-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"

@class AUCustomNavigationBar, AUNetErrorView, FHAssetsEditDataProvider, FHAssetsEditToolBar, FHAssetsEditViewControllerModel, FHCollectionViewDiffableDataSource, NSMutableDictionary, NSString, UICollectionView, UILongPressGestureRecognizer;

@interface FHAssetsEditViewController : DTViewController <UICollectionViewDelegate, FHAssetsEditToolBarDelegate>
{
    _Bool _hasCache;
    FHAssetsEditViewControllerModel *_model;
    UICollectionView *_collectionView;
    FHAssetsEditToolBar *_editToolBar;
    AUNetErrorView *_errorView;
    AUCustomNavigationBar *_customNavigationBar;
    UILongPressGestureRecognizer *_longPressGestureRecognizer;
    FHCollectionViewDiffableDataSource *_diffableDataSource;
    FHAssetsEditDataProvider *_dataProvider;
    NSMutableDictionary *_exposureDict;
    NSMutableDictionary *_exposureMarkDic;
}

@property(nonatomic) _Bool hasCache; // @synthesize hasCache=_hasCache;
@property(retain, nonatomic) NSMutableDictionary *exposureMarkDic; // @synthesize exposureMarkDic=_exposureMarkDic;
@property(retain, nonatomic) NSMutableDictionary *exposureDict; // @synthesize exposureDict=_exposureDict;
@property(retain, nonatomic) FHAssetsEditDataProvider *dataProvider; // @synthesize dataProvider=_dataProvider;
@property(retain, nonatomic) FHCollectionViewDiffableDataSource *diffableDataSource; // @synthesize diffableDataSource=_diffableDataSource;
@property(retain, nonatomic) UILongPressGestureRecognizer *longPressGestureRecognizer; // @synthesize longPressGestureRecognizer=_longPressGestureRecognizer;
@property(retain, nonatomic) AUCustomNavigationBar *customNavigationBar; // @synthesize customNavigationBar=_customNavigationBar;
@property(retain, nonatomic) AUNetErrorView *errorView; // @synthesize errorView=_errorView;
@property(retain, nonatomic) FHAssetsEditToolBar *editToolBar; // @synthesize editToolBar=_editToolBar;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) FHAssetsEditViewControllerModel *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (void)exposureMarks:(id)arg1;
- (void)exposureSpm:(id)arg1 uniqSpm:(id)arg2 ext:(id)arg3;
- (void)exposureView:(id)arg1;
- (void)reportExposure;
- (void)resetExposure;
- (void)initExposure;
- (id)makeNetErrorView;
- (void)longPressGestureRecognized:(id)arg1;
- (void)completeButtonClick;
- (void)cancelButtonClick;
- (void)dismissErrorView;
- (void)showErrorView;
- (void)updateEditToolBarIsEditing:(_Bool)arg1;
- (void)resetCollectionViewContentOffset;
- (void)quiteEditing;
- (void)endEditingIsConfirm:(_Bool)arg1;
- (void)beginEditing;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)editAsset:(id)arg1;
- (void)collectionView:(id)arg1 moveItemAtIndexPath:(id)arg2 toIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 targetIndexPathForMoveFromItemAtIndexPath:(id)arg2 toProposedIndexPath:(id)arg3;
- (_Bool)collectionView:(id)arg1 canMoveItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)refreshData;
- (void)showRespErrorMessage:(id)arg1;
- (void)getInitialData;
- (void)setupViews;
- (void)enterBackground;
- (void)enterForeground;
- (void)viewDidDisappear:(_Bool)arg1;
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

