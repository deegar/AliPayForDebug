//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "UICollectionViewDelegate-Protocol.h"

@class CKCollectionView, CKCollectionViewLayout, NSIndexPath, UICollectionView;

@protocol CKCollectionViewDelegateLayout <UICollectionViewDelegate>

@optional
- (struct CGRect)collectionView:(CKCollectionView *)arg1 layout:(CKCollectionViewLayout *)arg2 referenceFrameForFooterInSection:(long long)arg3;
- (struct CGRect)collectionView:(CKCollectionView *)arg1 layout:(CKCollectionViewLayout *)arg2 referenceFrameForHeaderInSection:(long long)arg3;
- (struct CGRect)collectionView:(CKCollectionView *)arg1 layout:(CKCollectionViewLayout *)arg2 frameForItemAtIndexPath:(NSIndexPath *)arg3;
- (struct CGSize)contentSizeOfCollectionView:(UICollectionView *)arg1;
@end

