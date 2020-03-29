//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FHTemplateBaseCell.h"

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"

@class FHCellNewsBattleHeadModel, FHTemplateNewsBattleBubbleView, NSArray, NSMutableDictionary, NSString, UICollectionView, UICollectionViewFlowLayout, UIImage, UIImageView, UIView;

@interface FHTemplateNewsBattleHeadCell : FHTemplateBaseCell <UICollectionViewDelegate, UICollectionViewDataSource>
{
    double _itemMargin;
    _Bool _isIPad;
    double _hSectionInset;
    _Bool _viewIsAppeared;
    _Bool _enableAutoUpdate;
    _Bool _disableLottie;
    FHCellNewsBattleHeadModel *_fhCellModel;
    UICollectionView *_widgetConllectionView;
    UIView *_accessibilityView;
    UICollectionViewFlowLayout *_fpCollectionViewLayout;
    double _indexOfCellBeforeDragging;
    NSArray *_cardContainerList;
    NSArray *_cardExtInfoList;
    NSMutableDictionary *_cardContainerViewMap;
    NSArray *_showedCardContainerList;
    long long _childrenCount;
    NSMutableDictionary *_widgetCellsMap;
    UIImage *_maskImage;
    FHTemplateNewsBattleBubbleView *_bubbleView;
    long long _selectedIndex;
    UIImageView *_leftBorder;
    UIImageView *_rightBorder;
}

@property(retain, nonatomic) UIImageView *rightBorder; // @synthesize rightBorder=_rightBorder;
@property(retain, nonatomic) UIImageView *leftBorder; // @synthesize leftBorder=_leftBorder;
@property(nonatomic) long long selectedIndex; // @synthesize selectedIndex=_selectedIndex;
@property(retain, nonatomic) FHTemplateNewsBattleBubbleView *bubbleView; // @synthesize bubbleView=_bubbleView;
@property(nonatomic) _Bool disableLottie; // @synthesize disableLottie=_disableLottie;
@property(nonatomic) _Bool enableAutoUpdate; // @synthesize enableAutoUpdate=_enableAutoUpdate;
@property(retain, nonatomic) UIImage *maskImage; // @synthesize maskImage=_maskImage;
@property(retain, nonatomic) NSMutableDictionary *widgetCellsMap; // @synthesize widgetCellsMap=_widgetCellsMap;
@property(nonatomic) long long childrenCount; // @synthesize childrenCount=_childrenCount;
@property(nonatomic) _Bool viewIsAppeared; // @synthesize viewIsAppeared=_viewIsAppeared;
@property(retain, nonatomic) NSArray *showedCardContainerList; // @synthesize showedCardContainerList=_showedCardContainerList;
@property(retain, nonatomic) NSMutableDictionary *cardContainerViewMap; // @synthesize cardContainerViewMap=_cardContainerViewMap;
@property(retain, nonatomic) NSArray *cardExtInfoList; // @synthesize cardExtInfoList=_cardExtInfoList;
@property(retain, nonatomic) NSArray *cardContainerList; // @synthesize cardContainerList=_cardContainerList;
@property(nonatomic) double indexOfCellBeforeDragging; // @synthesize indexOfCellBeforeDragging=_indexOfCellBeforeDragging;
@property(retain, nonatomic) UICollectionViewFlowLayout *fpCollectionViewLayout; // @synthesize fpCollectionViewLayout=_fpCollectionViewLayout;
@property(retain, nonatomic) UIView *accessibilityView; // @synthesize accessibilityView=_accessibilityView;
@property(retain, nonatomic) UICollectionView *widgetConllectionView; // @synthesize widgetConllectionView=_widgetConllectionView;
@property(retain, nonatomic) FHCellNewsBattleHeadModel *fhCellModel; // @synthesize fhCellModel=_fhCellModel;
- (void).cxx_destruct;
- (void)reportBubbleClick:(long long)arg1;
- (id)viewsNeedExposure;
- (void)rootViewIsDisAppeared;
- (void)rootViewIsAppeared;
- (void)setTopicCardAutoScale;
- (void)setForumAutoScroll:(_Bool)arg1;
- (void)startForumAutoScrollIfNeed;
- (void)didEndDisplaying;
- (void)updateData:(id)arg1 userStatusMap:(id)arg2;
- (_Bool)isDataChanged:(id)arg1;
- (double)calArrowCenterX:(long long)arg1;
- (void)setArrowHidden:(_Bool)arg1 atIndex:(long long)arg2;
- (void)setCurrentArrowHidden:(_Bool)arg1;
- (void)scrollContent:(long long)arg1 animated:(_Bool)arg2;
- (void)clickSNSBubble:(long long)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (long long)indexOfMajorCell;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
