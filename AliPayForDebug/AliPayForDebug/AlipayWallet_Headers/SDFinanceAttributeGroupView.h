//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class AFWStockFinancialBlockModel, UILabel;

@interface SDFinanceAttributeGroupView : UIView
{
    AFWStockFinancialBlockModel *_attributeGroup;
    UIView *_headerView;
    UIView *_bodyView;
    UILabel *_headerTitleLabel;
    double _headerPaddingHeight;
    UIView *_lineView;
}

@property(retain, nonatomic) UIView *lineView; // @synthesize lineView=_lineView;
@property(nonatomic) double headerPaddingHeight; // @synthesize headerPaddingHeight=_headerPaddingHeight;
@property(retain, nonatomic) UILabel *headerTitleLabel; // @synthesize headerTitleLabel=_headerTitleLabel;
@property(retain, nonatomic) UIView *bodyView; // @synthesize bodyView=_bodyView;
@property(retain, nonatomic) UIView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) AFWStockFinancialBlockModel *attributeGroup; // @synthesize attributeGroup=_attributeGroup;
- (void).cxx_destruct;
- (double)bodyHeight;
- (void)setupBodyView;
- (id)addLabelAtRowIndex:(int)arg1 labelName:(id)arg2 value:(id)arg3;
- (void)hideLineView:(_Bool)arg1;
- (void)setupHeaderView;
- (id)initWithAttributeGroup:(id)arg1 withHeaderPaddingHeight:(double)arg2;

@end
