//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AUKCollectionView.h"

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"

@class NSArray, NSDictionary, NSString;
@protocol BEEPhotoGalleryViewDelegate;

@interface BEEPhotoGalleryView : AUKCollectionView <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>
{
    double _cellWidth;
    double _cellMargin;
    _Bool _shouldAlignCenter;
    NSArray *_photoDatas;
    id <BEEPhotoGalleryViewDelegate> _galleryDelegate;
    NSString *_businesss;
    NSDictionary *_monitorDic;
    NSDictionary *_extendDic;
    struct UIEdgeInsets _galleryInset;
}

+ (double)heightForCellWithData:(id)arg1;
+ (double)heightForPhotoGalleryViewPhotoDatas:(id)arg1 withGalleryInset:(struct UIEdgeInsets)arg2;
+ (double)heightForPhotoGalleryViewPhotoDatas:(id)arg1;
@property(retain, nonatomic) NSDictionary *extendDic; // @synthesize extendDic=_extendDic;
@property(retain, nonatomic) NSDictionary *monitorDic; // @synthesize monitorDic=_monitorDic;
@property(retain, nonatomic) NSString *businesss; // @synthesize businesss=_businesss;
@property(nonatomic) struct UIEdgeInsets galleryInset; // @synthesize galleryInset=_galleryInset;
@property(nonatomic) _Bool shouldAlignCenter; // @synthesize shouldAlignCenter=_shouldAlignCenter;
@property(nonatomic) double cellMargin; // @synthesize cellMargin=_cellMargin;
@property(nonatomic) __weak id <BEEPhotoGalleryViewDelegate> galleryDelegate; // @synthesize galleryDelegate=_galleryDelegate;
@property(retain, nonatomic) NSArray *photoDatas; // @synthesize photoDatas=_photoDatas;
- (void).cxx_destruct;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (id)cellForCollectionView:(id)arg1 atIndexPath:(id)arg2;
- (void)registerCellClass;
- (void)collectionView:(id)arg1 performAction:(SEL)arg2 forItemAtIndexPath:(id)arg3 withSender:(id)arg4;
- (_Bool)collectionView:(id)arg1 canPerformAction:(SEL)arg2 forItemAtIndexPath:(id)arg3 withSender:(id)arg4;
- (_Bool)collectionView:(id)arg1 shouldShowMenuForItemAtIndexPath:(id)arg2;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 cellWidth:(double)arg2 cellMargin:(double)arg3;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

