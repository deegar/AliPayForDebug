//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AFWStockDetailBaseCell.h"

@class AFWStockCellHeader, AFWStockTrackerExposureStructure, BFFToolsInfoResPB, NSMutableArray;

@interface AFWStockMarketToolCell : AFWStockDetailBaseCell
{
    _Bool _isLoaded;
    AFWStockCellHeader *_header;
    BFFToolsInfoResPB *_model;
    NSMutableArray *_itemViewList;
    AFWStockTrackerExposureStructure *_expoStruct;
}

@property(nonatomic) _Bool isLoaded; // @synthesize isLoaded=_isLoaded;
@property(retain, nonatomic) AFWStockTrackerExposureStructure *expoStruct; // @synthesize expoStruct=_expoStruct;
@property(retain, nonatomic) NSMutableArray *itemViewList; // @synthesize itemViewList=_itemViewList;
@property(retain, nonatomic) BFFToolsInfoResPB *model; // @synthesize model=_model;
@property(retain, nonatomic) AFWStockCellHeader *header; // @synthesize header=_header;
- (void).cxx_destruct;
- (void)cellExpoFrame:(struct CGRect)arg1;
- (void)loadError:(id)arg1;
- (void)loadSuccess:(id)arg1;
- (id)loadOnline;
- (void)loadBegin;
- (void)updateItemView;
- (void)setupView;
- (void)viewDidAppear;
- (void)viewDidLoad;
- (_Bool)isModelVaild;
- (double)cellHeight;

@end

