//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FHBaseTemplate.h"

@class FHCellUpgradeFooterModel;

@interface FHUpgradeFooterTemplate : FHBaseTemplate
{
    FHCellUpgradeFooterModel *_cellModel;
}

@property(retain, nonatomic) FHCellUpgradeFooterModel *cellModel; // @synthesize cellModel=_cellModel;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)cellForTableView:(id)arg1 atIndexPath:(id)arg2;
- (double)heightForTemplateItemAtIndex:(unsigned long long)arg1;
- (long long)numberOfItems;
- (id)initWithDelegate:(id)arg1 card:(id)arg2 obFloor:(id)arg3;

@end

