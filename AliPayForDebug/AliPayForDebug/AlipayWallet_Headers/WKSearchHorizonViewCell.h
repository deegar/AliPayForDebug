//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class APGIndexedCollectionView;

@interface WKSearchHorizonViewCell : UITableViewCell
{
    APGIndexedCollectionView *_collectionView;
}

@property(retain, nonatomic) APGIndexedCollectionView *collectionView; // @synthesize collectionView=_collectionView;
- (void).cxx_destruct;
- (void)setCollectionViewDataSourceDelegate:(id)arg1 indexPath:(id)arg2;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 size:(struct CGSize)arg3;

@end

