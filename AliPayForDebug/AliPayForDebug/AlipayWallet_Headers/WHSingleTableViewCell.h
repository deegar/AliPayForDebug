//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AUSingleTitleListItem.h"

@class WHBaseCellModel;

@interface WHSingleTableViewCell : AUSingleTitleListItem
{
    WHBaseCellModel *_cellModel;
}

@property(retain, nonatomic) WHBaseCellModel *cellModel; // @synthesize cellModel=_cellModel;
- (void).cxx_destruct;
- (void)dealloc;
- (void)deregisterKVO;
- (void)registerKVO;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)reloadSubTitle;
- (void)reloadContent;
- (void)setCellScale:(_Bool)arg1 scale:(double)arg2;
- (void)reloadWithCellModel:(id)arg1;

@end

