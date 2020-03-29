//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WKTableViewController.h"

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"

@class NSMutableDictionary, NSString;

@interface WKHorizonTableViewController : WKTableViewController <UICollectionViewDataSource, UICollectionViewDelegate>
{
    NSMutableDictionary *_contentOffsetDictionary;
    NSMutableDictionary *_indexPathToHeight;
    NSMutableDictionary *_indexPathToCells;
    NSMutableDictionary *_indexPathToDocs;
    NSMutableDictionary *_indexPathToWkCell;
    NSMutableDictionary *_isHCellsToTableCell;
}

@property(retain, nonatomic) NSMutableDictionary *isHCellsToTableCell; // @synthesize isHCellsToTableCell=_isHCellsToTableCell;
@property(retain, nonatomic) NSMutableDictionary *indexPathToWkCell; // @synthesize indexPathToWkCell=_indexPathToWkCell;
@property(retain, nonatomic) NSMutableDictionary *indexPathToDocs; // @synthesize indexPathToDocs=_indexPathToDocs;
@property(retain, nonatomic) NSMutableDictionary *indexPathToCells; // @synthesize indexPathToCells=_indexPathToCells;
@property(retain, nonatomic) NSMutableDictionary *indexPathToHeight; // @synthesize indexPathToHeight=_indexPathToHeight;
@property(retain, nonatomic) NSMutableDictionary *contentOffsetDictionary; // @synthesize contentOffsetDictionary=_contentOffsetDictionary;
- (void).cxx_destruct;
- (long long)indexOfHCellInSectionModel:(id)arg1;
- (_Bool)isHCellTpl:(id)arg1;
- (_Bool)isMoreCellTpl:(id)arg1;
- (_Bool)isMoreCell:(id)arg1;
- (_Bool)isHCell:(id)arg1;
- (void)mergeHCell:(id)arg1;
- (void)setDataModel:(id)arg1;
- (id)currentWKViewCell:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)initDicts;
- (void)loadView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

