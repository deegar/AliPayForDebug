//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WHCardBaseTableViewCell.h"

#import "WHEntryCellViewDelegate-Protocol.h"

@class NSMutableArray, NSString, WHAssetsView, WHMerchantCardModel, WHTitleEntryView;

@interface WHNewMerchantTableViewCell : WHCardBaseTableViewCell <WHEntryCellViewDelegate>
{
    WHTitleEntryView *_titleEntryView;
    WHAssetsView *_incomeAssetView;
    WHAssetsView *_allAssetView;
    NSMutableArray *_serItemViews;
    WHMerchantCardModel *_cardModel;
}

+ (struct CGSize)templateSize:(id)arg1;
- (void).cxx_destruct;
- (void)entryCellViewClicked:(id)arg1;
- (void)assetClicked:(id)arg1;
- (void)titleEntryViewClicked:(id)arg1;
- (void)setServiceItemsViews:(id)arg1 badgesMap:(id)arg2;
- (void)reloadCard:(id)arg1;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
