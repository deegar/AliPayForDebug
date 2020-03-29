//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WHBaseCell.h"

@class UILabel, UIView, WHBaseCellModel;

@interface WHUserAutoLayoutCertifyCell : WHBaseCell
{
    UILabel *_textLabel;
    UIView *_footerView;
    double _scale;
    _Bool _lastRow;
    WHBaseCellModel *_cellModel;
}

@property(readonly, nonatomic) WHBaseCellModel *cellModel; // @synthesize cellModel=_cellModel;
@property(nonatomic, getter=isLastRow) _Bool lastRow; // @synthesize lastRow=_lastRow;
- (void).cxx_destruct;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setSeparatorInset:(struct UIEdgeInsets)arg1;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)updateCertify:(id)arg1;
- (double)calcHeight:(id)arg1 fontScale:(id)arg2;
- (void)reloadWithCellModel:(id)arg1 fontScale:(id)arg2;
- (void)setDataModel:(id)arg1 fontScale:(id)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

