//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "PP_BEEPhotoGalleryViewDelegate-Protocol.h"

@class LifeHeaderSectionView, NSMutableArray, NSMutableSet, NSString, PP_BEEPhotoGalleryView, UILabel;

@interface LifeHeaderFrequentlyView : UIView <PP_BEEPhotoGalleryViewDelegate>
{
    LifeHeaderSectionView *_sectionView;
    PP_BEEPhotoGalleryView *_galleryView;
    UILabel *_emptyLabel;
    double _externalTop;
    NSMutableSet *_exposedPublicIds;
    NSMutableArray *_frequentlyArray;
}

@property(retain, nonatomic) NSMutableArray *frequentlyArray; // @synthesize frequentlyArray=_frequentlyArray;
@property(retain, nonatomic) NSMutableSet *exposedPublicIds; // @synthesize exposedPublicIds=_exposedPublicIds;
@property(nonatomic) double externalTop; // @synthesize externalTop=_externalTop;
@property(nonatomic) __weak UILabel *emptyLabel; // @synthesize emptyLabel=_emptyLabel;
@property(nonatomic) __weak PP_BEEPhotoGalleryView *galleryView; // @synthesize galleryView=_galleryView;
@property(nonatomic) __weak LifeHeaderSectionView *sectionView; // @synthesize sectionView=_sectionView;
- (void).cxx_destruct;
- (void)dealloc;
- (double)__gallertCellWidth;
- (void)__galleryViewClick:(long long)arg1;
- (id)__defaultDateItem;
- (void)__loadData:(id)arg1;
- (void)photoGalleryView:(id)arg1 performAction:(SEL)arg2 forItemAtIndex:(long long)arg3;
- (_Bool)photoGalleryView:(id)arg1 canPerformAction:(SEL)arg2 forItemAtIndex:(long long)arg3;
- (_Bool)photoGalleryView:(id)arg1 shouldShowMenuForItemAtIndex:(long long)arg2;
- (void)photoGalleryView:(id)arg1 willDisplayCellAtIndex:(long long)arg2;
- (void)photoGalleryView:(id)arg1 didClickBottomViewAtIndex:(long long)arg2;
- (void)photoGalleryView:(id)arg1 didSelectPhotoAtIndex:(long long)arg2;
- (void)onRefreshFollow:(id)arg1;
- (double)heightForFrequentlyView;
- (void)setFollowList:(id)arg1;
- (void)refreshForCircleStatus;
- (void)setupConstraints;
- (void)setupSubViews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

