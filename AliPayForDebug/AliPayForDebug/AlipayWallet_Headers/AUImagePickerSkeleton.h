//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"

@class NSArray, NSIndexPath, NSString, UICollectionView, UICollectionViewFlowLayout, UILabel, UILongPressGestureRecognizer;
@protocol AUImagePickerSkeletonDelegate;

@interface AUImagePickerSkeleton : UIView <UICollectionViewDelegate, UICollectionViewDataSource>
{
    _Bool _canDrag;
    unsigned long long _maxNumberOfImages;
    id <AUImagePickerSkeletonDelegate> _delegate;
    NSArray *_imagePickerDatas;
    NSString *_title;
    unsigned long long _type;
    unsigned long long _columnCount;
    UILabel *_titleLabel;
    UILabel *_countLabel;
    UICollectionView *_collectionView;
    UICollectionViewFlowLayout *_layout;
    NSString *_business;
    UILongPressGestureRecognizer *_longPressGestureRecognizer;
    UIView *_snapedView;
    NSIndexPath *_currentIndexPath;
    NSIndexPath *_oldIndexPath;
    struct CGPoint _lastGesturePoint;
}

@property(nonatomic) struct CGPoint lastGesturePoint; // @synthesize lastGesturePoint=_lastGesturePoint;
@property(retain, nonatomic) NSIndexPath *oldIndexPath; // @synthesize oldIndexPath=_oldIndexPath;
@property(retain, nonatomic) NSIndexPath *currentIndexPath; // @synthesize currentIndexPath=_currentIndexPath;
@property(retain, nonatomic) UIView *snapedView; // @synthesize snapedView=_snapedView;
@property(retain, nonatomic) UILongPressGestureRecognizer *longPressGestureRecognizer; // @synthesize longPressGestureRecognizer=_longPressGestureRecognizer;
@property(copy, nonatomic) NSString *business; // @synthesize business=_business;
@property(retain, nonatomic) UICollectionViewFlowLayout *layout; // @synthesize layout=_layout;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) UILabel *countLabel; // @synthesize countLabel=_countLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) unsigned long long columnCount; // @synthesize columnCount=_columnCount;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) NSArray *imagePickerDatas; // @synthesize imagePickerDatas=_imagePickerDatas;
@property(nonatomic) __weak id <AUImagePickerSkeletonDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) unsigned long long maxNumberOfImages; // @synthesize maxNumberOfImages=_maxNumberOfImages;
@property(nonatomic) _Bool canDrag; // @synthesize canDrag=_canDrag;
- (void).cxx_destruct;
- (void)action:(id)arg1;
- (void)handleLongGesture:(id)arg1;
- (struct CGRect)viewRectOnScreenWithIndex:(unsigned long long)arg1;
- (double)calculateCollectionViewHeight;
- (void)reloadCollectView;
- (void)updateImagePickerDatasAfterDrag:(id)arg1;
- (void)updateImagePickerDatas:(id)arg1;
- (double)calculateCellSpacing;
- (double)calculateCellWidth;
- (unsigned long long)getActualCellCount;
- (unsigned long long)numberOfPickerLines;
- (void)updateHeight;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)resetLabel;
- (void)initView;
- (id)initWithHeaderTitle:(id)arg1 maxNumberOfImages:(unsigned long long)arg2 business:(id)arg3;
- (id)initWithMaxNumberOfImages:(unsigned long long)arg1 business:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

